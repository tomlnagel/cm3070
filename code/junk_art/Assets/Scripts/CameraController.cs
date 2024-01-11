using UnityEngine;

/// <summary>
/// Properties and methods for moving the main camera around the game world
/// Adapted from example in Unity 2019.4 template: 3D Sample Scene (URP)
/// </summary>
public class CameraController : MonoBehaviour
{
    /// <summary>
    /// The target position and rotation for the camera to move towards
    /// </summary>
    class TargetState
    {
        //target rotation
        public float yaw;
        public float pitch;
        public float roll;
        //target position
        public float x;
        public float y;
        public float z;

       /// <summary>
       /// Set the target state to match a given transform
       /// </summary>
       /// <param name="t">The transform to copy</param>
        public void SetFromTransform(Transform t)
        {
            pitch = t.eulerAngles.x;
            yaw = t.eulerAngles.y;
            roll = t.eulerAngles.z;
            x = t.position.x;
            y = t.position.y;
            z = t.position.z;
        }

        /// <summary>
        /// Translate the target state position according to given vector
        /// </summary>
        /// <param name="translation">The vector to apply</param>
        public void Translate(Vector3 translation)
        {
            //rotate input translation by current rotation
            Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;

            //apply result to target state
            x += rotatedTranslation.x;
            y += rotatedTranslation.y;
            z += rotatedTranslation.z;
        }
    }

    /// <summary>
    /// Update camera's position towards target position and rotation
    /// </summary>
    class CameraUpdater
    {
        //camera rotation
        private float yaw;
        private float pitch;
        private float roll;
        //camera position
        private float x;
        private float y;
        private float z;

        /// <summary>
        /// Set the camera state to match a given transform
        /// </summary>
        /// <param name="t">The transform to copy</param>
        public void SetFromTransform(Transform t)
        {
            pitch = t.eulerAngles.x;
            yaw = t.eulerAngles.y;
            roll = t.eulerAngles.z;
            x = t.position.x;
            y = t.position.y;
            z = t.position.z;
        }

        /// <summary>
        /// Update camera state to a percentage towards a target state
        /// </summary>
        /// <param name="target">The state to approach</param>
        /// <param name="positionLerpPct">How far to approach target position</param>
        /// <param name="rotationLerpPct">How far to approach target rotation</param>
        public void LerpTowards(TargetState target, float positionLerpPct, float rotationLerpPct)
        {
            yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
            pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
            roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);

            x = Mathf.Lerp(x, target.x, positionLerpPct);
            y = Mathf.Lerp(y, target.y, positionLerpPct);
            z = Mathf.Lerp(z, target.z, positionLerpPct);
        }

        /// <summary>
        /// Apply the calcualted  position to a given transform
        /// </summary>
        /// <param name="camera">The camera transform to move</param>
        public void UpdateTransform(Transform camera)
        {
            camera.eulerAngles = new Vector3(pitch, yaw, roll);
            camera.position = new Vector3(x, y, z);
        }
    }

    TargetState TargetCameraState = new TargetState();
    CameraUpdater LerpingCameraUpdater = new CameraUpdater();

    [Header("Movement Settings")]
    [Tooltip("Exponential boost factor on translation.")]
    public float boost = 3.5f;

    [Tooltip("Time it takes to interpolate camera position 99% of the way to the target."), Range(0.001f, 1f)]
    public float positionLerpTime = 0.2f;

    [Header("Rotation Settings")]
    [Tooltip("X = Change in mouse position.\nY = Multiplicative factor for camera rotation.")]
    public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));

    [Tooltip("Time it takes to interpolate camera rotation 99% of the way to the target."), Range(0.001f, 1f)]
    public float rotationLerpTime = 0.01f;

    [Tooltip("Whether or not to invert our Y axis for mouse input to rotation.")]
    public bool invertY = false;

    private bool controlsEnabled = true;

    void OnEnable()
    {
        //intialise the states
        TargetCameraState.SetFromTransform(transform);
        LerpingCameraUpdater.SetFromTransform(transform);

        //event subscriptions
        GrabObject.onRotateStart += DisableCameraControls;
        GrabObject.onRotateStop += EnableCameraControls;
    }

    private void OnDisable()
    {
        //event unsubscriptions
        GrabObject.onRotateStart -= DisableCameraControls;
        GrabObject.onRotateStop -= EnableCameraControls;
    }

    /// <summary>
    /// Disable camera from interpreting control inputs
    /// </summary>
    public void DisableCameraControls()
    {
        controlsEnabled = false;
    }

    /// <summary>
    /// Enable camera to interpret control inputs
    /// </summary>
    public void EnableCameraControls()
    {
        controlsEnabled = true;
    }

    /// <summary>
    /// Turn WASD inputs into camera movement direction
    /// </summary>
    /// <returns>A vector to move the camera</returns>
    Vector3 GetInputTranslationDirection()
    {
        Vector3 direction = new Vector3();
        if (Input.GetKey(KeyCode.W))
        {
            direction += Vector3.forward;
        }
        if (Input.GetKey(KeyCode.S))
        {
            direction += Vector3.back;
        }
        if (Input.GetKey(KeyCode.A))
        {
            direction += Vector3.left;
        }
        if (Input.GetKey(KeyCode.D))
        {
            direction += Vector3.right;
        }
        if (Input.GetKey(KeyCode.Q))
        {
            direction += Vector3.down;
        }
        if (Input.GetKey(KeyCode.E))
        {
            direction += Vector3.up;
        }
        return direction;
    }

    void Update()
    {
        if (!controlsEnabled)
        {
            return;
        }

        Vector3 translation = Vector3.zero;

        // Hide and lock cursor when right mouse button pressed
        if (Input.GetMouseButtonDown(1))
        {
            Cursor.lockState = CursorLockMode.Locked;
        }

        // Unlock and show cursor when right mouse button released
        if (Input.GetMouseButtonUp(1))
        {
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
        }

        // Rotation
        if (Input.GetMouseButton(1))
        {
            //get mouse movement
            Vector2 mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));

            //apply sensitivity curve
            float mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);

            TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
            TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
        }

        // Translation
        translation = GetInputTranslationDirection() * Time.deltaTime;

        // Modify movement by a boost factor (defined in Inspector)
        translation *= Mathf.Pow(2.0f, boost);

        TargetCameraState.Translate(translation);

        // Framerate-independent interpolation
        // Calculate the lerp amount, such that we get 99% of the way to our target in the specified time
        var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
        var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
        LerpingCameraUpdater.LerpTowards(TargetCameraState, positionLerpPct, rotationLerpPct);

        LerpingCameraUpdater.UpdateTransform(transform);
    }
}