using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using System;

/// <summary>
/// Provide audioclips to objects requesting them
/// Static class - only one instace allowed
/// </summary>
public static class AudioController
{
    private static AudioClip[] fallClips = {
        Resources.Load<AudioClip>("Audio/fall_1"),
        Resources.Load<AudioClip>("Audio/fall_2"),
        Resources.Load<AudioClip>("Audio/fall_3"),
        Resources.Load<AudioClip>("Audio/fall_4"),
        Resources.Load<AudioClip>("Audio/fall_5"),
        Resources.Load<AudioClip>("Audio/fall_6"),
        Resources.Load<AudioClip>("Audio/fall_7"),
        Resources.Load<AudioClip>("Audio/fall_8"),
        Resources.Load<AudioClip>("Audio/fall_9")
    };

    private static AudioClip[] touchClips =
    {
        Resources.Load<AudioClip>("Audio/touch_1"),
        Resources.Load<AudioClip>("Audio/touch_2"),
        Resources.Load<AudioClip>("Audio/touch_3"),
        Resources.Load<AudioClip>("Audio/touch_4"),
        Resources.Load<AudioClip>("Audio/touch_5"),
        Resources.Load<AudioClip>("Audio/touch_6"),
        Resources.Load<AudioClip>("Audio/touch_7"),
        Resources.Load<AudioClip>("Audio/touch_8")
    };

    private static System.Random rng = new System.Random(); //make a random number generator

    public static AudioClip GetFallClip()
    {
        //return a random clip from fallclips
        return fallClips[rng.Next(fallClips.Length)];
    }

    public static AudioClip GetTouchClip()
    {
        //return a random clip from fallclips
        return touchClips[rng.Next(touchClips.Length)];
    }
}
