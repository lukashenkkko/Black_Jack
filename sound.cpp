#include "sound.h"

Sound::Sound()
{

}

void Sound::playMusic()
{
    m_player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    m_player->setAudioOutput(audioOutput);
    m_player->setSource(QUrl("C:/Code_projects/Qt_project/blackJack/sound/music.wav"));
    m_player->setLoops(QMediaPlayer::Infinite);
    audioOutput->setVolume(10);
    m_player->play();
}

void Sound::playButton()
{
    m_player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    m_player->setAudioOutput(audioOutput);
    m_player->setSource(QUrl("C:/Code_projects/Qt_project/blackJack/sound/button.mp3"));
    audioOutput->setVolume(2);
    m_player->play();
}

void Sound::playCard()
{
    m_player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    m_player->setAudioOutput(audioOutput);
    m_player->setSource(QUrl("C:/Code_projects/Qt_project/blackJack/sound/cardsound.mp3"));
    audioOutput->setVolume(10);
    m_player->play();
}



