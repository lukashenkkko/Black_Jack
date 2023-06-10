#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QDialog>
#include "QMainWindow"
#include "mainwindow.h"
#include "sound.h"

namespace Ui {
class Gamemenu;
}

class Gamemenu : public QDialog
{
    Q_OBJECT

public:
    explicit Gamemenu(QWidget *parent = nullptr);
    ~Gamemenu();

private slots:
    void on_pushButton_return_game_clicked();

    void on_pushButton_return_mainmenu_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::Gamemenu *ui;
};

#endif // GAMEMENU_H
