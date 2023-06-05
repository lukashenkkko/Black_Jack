#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "gamemenu.h"
#include <QPixmap>
#include <iostream>
#include "QString"

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

    //Adding cards objects
    CardInfo card1(":/Cards1/image/cards/1/2B.png",2,skinID);
    CardInfo card2(":/Cards1/image/cards/1/2C.png",2,skinID);
    CardInfo card3(":/Cards1/image/cards/1/2H.png",2,skinID);
    CardInfo card4(":/Cards1/image/cards/1/2P.png",2,skinID);

    CardInfo card5(":/Cards1/image/cards/1/3B.png",3,skinID);
    CardInfo card6(":/Cards1/image/cards/1/3C.png",3,skinID);
    CardInfo card7(":/Cards1/image/cards/1/3H.png",3,skinID);
    CardInfo card8(":/Cards1/image/cards/1/3P.png",3,skinID);

    CardInfo card9(":/Cards1/image/cards/1/4B.png",4,skinID);
    CardInfo card10(":/Cards1/image/cards/1/4C.png",4,skinID);
    CardInfo card11(":/Cards1/image/cards/1/4H.png",4,skinID);
    CardInfo card12(":/Cards1/image/cards/1/4P.png",4,skinID);

    CardInfo card13(":/Cards1/image/cards/1/5B.png",5,skinID);
    CardInfo card14(":/Cards1/image/cards/1/5C.png",5,skinID);
    CardInfo card15(":/Cards1/image/cards/1/5H.png",5,skinID);
    CardInfo card16(":/Cards1/image/cards/1/5P.png",5,skinID);

    CardInfo card17(":/Cards1/image/cards/1/6B.png",6,skinID);
    CardInfo card18(":/Cards1/image/cards/1/6C.png",6,skinID);
    CardInfo card19(":/Cards1/image/cards/1/6H.png",6,skinID);
    CardInfo card20(":/Cards1/image/cards/1/6P.png",6,skinID);

    CardInfo card21(":/Cards1/image/cards/1/7B.png",7,skinID);
    CardInfo card22(":/Cards1/image/cards/1/7C.png",7,skinID);
    CardInfo card23(":/Cards1/image/cards/1/7H.png",7,skinID);
    CardInfo card24(":/Cards1/image/cards/1/7P.png",7,skinID);

    CardInfo card25(":/Cards1/image/cards/1/8B.png",8,skinID);
    CardInfo card26(":/Cards1/image/cards/1/8C.png",8,skinID);
    CardInfo card27(":/Cards1/image/cards/1/8H.png",8,skinID);
    CardInfo card28(":/Cards1/image/cards/1/8P.png",8,skinID);

    CardInfo card29(":/Cards1/image/cards/1/9B.png",9,skinID);
    CardInfo card30(":/Cards1/image/cards/1/9C.png",9,skinID);
    CardInfo card31(":/Cards1/image/cards/1/9H.png",9,skinID);
    CardInfo card32(":/Cards1/image/cards/1/9P.png",9,skinID);

    CardInfo card33(":/Cards1/image/cards/1/10B.png",10,skinID);
    CardInfo card34(":/Cards1/image/cards/1/10C.png",10,skinID);
    CardInfo card35(":/Cards1/image/cards/1/10H.png",10,skinID);
    CardInfo card36(":/Cards1/image/cards/1/10P.png",10,skinID);

    CardInfo card37(":/Cards1/image/cards/1/JB.png",10,skinID);
    CardInfo card38(":/Cards1/image/cards/1/JC.png",10,skinID);
    CardInfo card39(":/Cards1/image/cards/1/JH.png",10,skinID);
    CardInfo card40(":/Cards1/image/cards/1/JP.png",10,skinID);

    CardInfo card41(":/Cards1/image/cards/1/QB.png",10,skinID);
    CardInfo card42(":/Cards1/image/cards/1/QC.png",10,skinID);
    CardInfo card43(":/Cards1/image/cards/1/QH.png",10,skinID);
    CardInfo card44(":/Cards1/image/cards/1/QP.png",10,skinID);

    CardInfo card45(":/Cards1/image/cards/1/KB.png",10,skinID);
    CardInfo card46(":/Cards1/image/cards/1/KC.png",10,skinID);
    CardInfo card47(":/Cards1/image/cards/1/KH.png",10,skinID);
    CardInfo card48(":/Cards1/image/cards/1/KP.png",10,skinID);

    CardInfo card49(":/Cards1/image/cards/1/AB.png",11,skinID);
    CardInfo card50(":/Cards1/image/cards/1/AC.png",11,skinID);
    CardInfo card51(":/Cards1/image/cards/1/AH.png",11,skinID);
    CardInfo card52(":/Cards1/image/cards/1/AP.png",11,skinID);

    CardInfo card53(":/Cards1/image/cards/1/SIDE.png",0,skinID);

    QPixmap cardPix(card53.link);
    ui->card_side->setPixmap(cardPix.scaled(ui->card_side->width(),ui->card_side->height()));
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


