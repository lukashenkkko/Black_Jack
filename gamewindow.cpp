#include "gamewindow.h"
#include "ui_gamewindow.h"

Gamewindow::Gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gamewindow)
{
    ui->setupUi(this);
     setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint); //Static window size

    //setting the size of the background image
    QPixmap background(":/pht/image/background.jpg");
    ui->label_background->setGeometry(0,0,0,0);
    ui->label_background->setFixedHeight(height());
    ui->label_background->setFixedWidth(width());
    ui->label_background->setPixmap(background.scaled(width(),height()));

    //setting the size of the coin image
    QPixmap coin1pix(":/pht/image/coin1.png");
    ui->label_coin1->setPixmap(coin1pix.scaled(ui->label_coin1->width(),ui->label_coin1->height()));

    QPixmap coin5pix(":/pht/image/coin5 .png");
    ui->label_coin5->setPixmap(coin5pix.scaled(ui->label_coin5->width(),ui->label_coin5->height()));

    QPixmap coin10pix(":/pht/image/coin10.png");
    ui->label_coin10->setPixmap(coin10pix.scaled(ui->label_coin10->width(),ui->label_coin10->height()));

    QPixmap coin50pix(":/pht/image/coin50.png");
    ui->label_coin50->setPixmap(coin50pix.scaled(ui->label_coin50->width(),ui->label_coin50->height()));

    QPixmap coin100pix(":/pht/image/coin100.png");
    ui->label_coin100->setPixmap(coin100pix.scaled(ui->label_coin100->width(),ui->label_coin100->height()));

    QPixmap coin500pix(":/pht/image/coin500.png");
    ui->label_coin500->setPixmap(coin500pix.scaled(ui->label_coin500->width(),ui->label_coin500->height()));

    //Animation
    xShift=540;
    yShift=320;
    scale=120;

    coinList.append(ui->label_coin1);
    coinList.append(ui->label_coin5);
    coinList.append(ui->label_coin10);
    coinList.append(ui->label_coin50);
    coinList.append(ui->label_coin100);
    coinList.append(ui->label_coin500);
}

Gamewindow::~Gamewindow()
{
    delete ui;
}

void Gamewindow::on_pushButton_left_clicked()
{
    coinScrolling();
}

void Gamewindow::on_pushButton_right_clicked()
{
    coinScrolling();
}

void Gamewindow::coinScrolling()
{
    float angleUnit = 6.28/coinList.size();
    for(int i=0;i<coinList.size();i++)
    {
        QLabel* lbl=coinList.at(i);
        QPropertyAnimation *animation=new QPropertyAnimation(lbl,"geometry");
        animation->setDuration(1000);
        animation->setEasingCurve(QEasingCurve::Linear);
        animation->setEndValue(QRectF(cos(angleUnit*i)*scale+xShift, sin(angleUnit*i)*scale+yShift, ui->label_coin1->height(),ui->label_coin1->width()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
}

