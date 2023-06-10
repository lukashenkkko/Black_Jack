#ifndef SOUND_H
#define SOUND_H

#include <iostream>
#include <QMediaPlayer>
#include <QAudioOutput>

class Sound
{
public:
    Sound();
    void playMusic();
    void playButton();
    void playCard();

    QMediaPlayer * m_player;
    QAudioOutput* audioOutput;
};

#endif // SOUND_H
