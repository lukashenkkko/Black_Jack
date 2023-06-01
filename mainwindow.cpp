#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setting.h"
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint); //Static window size

    //setting the size of the background image
    QPixmap background_mainmenu(":/pht/image/background_mainmenu.jpg");
    ui->label_background_main->setGeometry(0,0,0,0);
    ui->label_background_main->setFixedHeight(height());
    ui->label_background_main->setFixedWidth(width());
    ui->label_background_main->setPixmap(background_mainmenu.scaled(width(),height()));

    //setting the size of the title image
    QPixmap titlePix(":/pht/image/title.png");
    int w1=ui->title->width();
    int h1=ui->title->height();
    ui->title->setPixmap(titlePix.scaled(w1,h1));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_exit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_setting_clicked()
{
    Setting settingWindow;
    settingWindow.setModal(true);
    settingWindow.exec();
}

void MainWindow::on_pushButton_play_clicked()
{
    gwindow=new Gamewindow(this);
    gwindow->show();
    hide();
}

