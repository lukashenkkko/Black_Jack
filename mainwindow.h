#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamewindow.h"
#include "setting.h"
#include <QMediaPlayer>
#include <qmediaplayer.h>
#include "sound.h"
#include <QAudioOutput>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_exit_clicked();

    void on_pushButton_setting_clicked();

    void on_pushButton_play_clicked();

private:
    Ui::MainWindow *ui;
    Gamewindow *gwindow;
    Setting *settingWindow;

    QMediaPlayer* m_player;
    QAudioOutput* audioOutput;
    void con();
};
#endif // MAINWINDOW_H
