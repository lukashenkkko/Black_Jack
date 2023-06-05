#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "gamemenu.h"

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

    //Variables for coin animation
    xShift=495;
    yShift=610;
    scale=190;
    angleStep=0;

    //i=1;
   //std::shared_ptr<int> coinID(new int(i));
    //*coinID=i;

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
    coinScrolling(1.047);
   //*coinID-=1;
}

void Gamewindow::on_pushButton_right_clicked()
{
    //2.6
    coinScrolling(-1.047);
    //*coinID+=1;
}

void Gamewindow::coinScrolling(float turn)
{
    float angleUnit = 6.28/coinList.size();
    angleStep+=turn;
    for(int i=0;i<coinList.size();i++)
    {
        QLabel* lbl=coinList.at(i);
        QPropertyAnimation *animation=new QPropertyAnimation(lbl,"geometry");
        animation->setDuration(800);
        animation->setEasingCurve(QEasingCurve::Linear);
        animation->setEndValue(QRectF(cos(angleUnit*i+angleStep-1.57)*scale+xShift, sin(angleUnit*i+angleStep-1.57)*scale+yShift, ui->label_coin1->height(),ui->label_coin1->width()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
}


void Gamewindow::on_pushButton_6_clicked()
{
    //ui->pushButton_6->setText(QString::number(*coinID));
}


void Gamewindow::on_pushButton_menu_clicked()
{
    Gamemenu gameMenuWindow;
    gameMenuWindow.setModal(true);
    gameMenuWindow.exec();
}

