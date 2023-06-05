#include "gamemenu.h"
#include "ui_gamemenu.h"

Gamemenu::Gamemenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gamemenu)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint|Qt::FramelessWindowHint); //Static window size
}

Gamemenu::~Gamemenu()
{
    delete ui;
}

void Gamemenu::on_pushButton_return_game_clicked()
{
    close();
}

void Gamemenu::on_pushButton_return_mainmenu_clicked()
{
    QApplication::closeAllWindows();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->setWindowFlags(Qt::Window|Qt::Dialog);
    mainWindow->show();
}

void Gamemenu::on_pushButton_exit_clicked()
{
    QApplication::quit();
}

