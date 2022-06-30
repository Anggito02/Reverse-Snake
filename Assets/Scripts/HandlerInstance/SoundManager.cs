using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;

    private void Awake()
    {
        instance = this;
    }

    // Sounds
    public List<AudioSource> SnakeMovementSounds = new List<AudioSource>();
    public AudioSource SnakeBiteSound;
    public AudioSource ThemeSound;

    public AudioSource LoseSFX;
    public AudioSource LoseSong;

    public AudioSource WinSong;
}
