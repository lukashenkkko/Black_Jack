#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "gamemenu.h"
#include <QPixmap>
#include <iostream>
#include "QString"
#include "QTimer"
#include <ctime>


 Gamewindow::Gamewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gamewindow)
{
    ui->setupUi(this);
     setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint); //Static window size

    //hiding widgets
    ui->pushButton_play->hide();
    ui->label_winlose->hide();
    ui->pushButton_replay->hide();
    ui->pushButton_another_bet->hide();
    ui->label_replay->hide();
    ui->label_another_bet->hide();

    ui->label_winlose->setAlignment(Qt::AlignHCenter);
    bet_regimeON();

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
    angleStep=-1.57;
    coinID=1;

    coinList.append(ui->label_coin1);
    coinList.append(ui->label_coin5);
    coinList.append(ui->label_coin10);
    coinList.append(ui->label_coin50);
    coinList.append(ui->label_coin100);
    coinList.append(ui->label_coin500);


    //Variables for card animation
    xShiftCard=515;
    yShiftCard=540;
    scaleCard=130;
    angleStepCard=-1.57;
    cardSize=600;
    skinID=1;

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
    ui->card_side_2->setPixmap(cardPix.scaled(ui->card_side->width(),ui->card_side->height()));
    ui->card_side_3->setPixmap(cardPix.scaled(ui->card_side->width(),ui->card_side->height()));

    //Adding all cards to the list to implement randomization
    cardList.append(card1);
    cardList.append(card2);
    cardList.append(card3);
    cardList.append(card4);
    cardList.append(card5);
    cardList.append(card6);
    cardList.append(card7);
    cardList.append(card8);
    cardList.append(card9);
    cardList.append(card10);
    cardList.append(card11);
    cardList.append(card12);
    cardList.append(card13);
    cardList.append(card14);
    cardList.append(card15);
    cardList.append(card16);
    cardList.append(card17);
    cardList.append(card18);
    cardList.append(card19);
    cardList.append(card20);
    cardList.append(card21);
    cardList.append(card22);
    cardList.append(card23);
    cardList.append(card24);
    cardList.append(card25);
    cardList.append(card26);
    cardList.append(card27);
    cardList.append(card28);
    cardList.append(card29);
    cardList.append(card30);
    cardList.append(card31);
    cardList.append(card32);
    cardList.append(card33);
    cardList.append(card34);
    cardList.append(card35);
    cardList.append(card36);
    cardList.append(card37);
    cardList.append(card38);
    cardList.append(card39);
    cardList.append(card40);
    cardList.append(card41);
    cardList.append(card42);
    cardList.append(card43);
    cardList.append(card44);
    cardList.append(card45);
    cardList.append(card46);
    cardList.append(card47);
    cardList.append(card48);
    cardList.append(card49);
    cardList.append(card50);
    cardList.append(card51);
    cardList.append(card52);
    cardList.append(card53);

}

Gamewindow::~Gamewindow()
{
    delete ui;
}

void Gamewindow::on_pushButton_left_clicked()
{
    coinScrolling(1.047);
    if(coinID==1)
        coinID=6;
    else
    coinID-=1;
}

void Gamewindow::on_pushButton_right_clicked()
{
    //2.6
    coinScrolling(-1.047);
    if(coinID==6)
    coinID=1;
    else
    coinID+=1;
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
        animation->setEndValue(QRectF(cos(angleUnit*i+angleStep)*scale+xShift, sin(angleUnit*i+angleStep)*scale+yShift, ui->label_coin1->height(),ui->label_coin1->width()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
}

//function to exit the mode when can place bet
void Gamewindow::bet_regimeON()
{
    ui->pushButton_6->setEnabled(true);
    ui->label_arrow->show();
    ui->pushButton_left->show();
    ui->pushButton_right->show();
    ui->label_coin1->show();
    ui->label_coin5->show();
    ui->label_coin10->show();
    ui->label_coin50->show();
    ui->label_coin100->show();
    ui->label_coin500->show();

    //button for game
    ui->pushButton_removeCard->hide();
    ui->pushButton_addCard->hide();
    ui->label_removeCard->hide();
    ui->label_addCard->hide();
    ui->label_player_point->hide();
    ui->label_dealer_point->hide();
}

//function to enter the mode when can place bet
void Gamewindow::bet_regimeOFF()
{
    ui->pushButton_6->setEnabled(false);
    ui->label_arrow->hide();
    ui->pushButton_left->hide();
    ui->pushButton_right->hide();
    ui->pushButton_play->hide();
    ui->label_coin1->hide();
    ui->label_coin5->hide();
    ui->label_coin50->hide();
    ui->label_coin10->hide();
    ui->label_coin100->hide();
    ui->label_coin500->hide();

    //button for game
    ui->pushButton_removeCard->show();
    ui->pushButton_addCard->show();
    ui->label_removeCard->show();
    ui->label_addCard->show();
    ui->label_player_point->show();
    ui->label_dealer_point->show();
}

//button for bet
void Gamewindow::on_pushButton_6_clicked()
{
     ui->pushButton_play->show();

    switch(coinID){
    case 1:{
        QPixmap coin1pix(":/pht/image/coin1.png");
        ui->label_2->setPixmap(coin1pix.scaled(ui->label_coin1->width(),ui->label_coin1->height()));
        ui->label_bet_number->setText("1");
        break;
    }
    case 2:{
        QPixmap coin5pix(":/pht/image/coin5 .png");
        ui->label_2->setPixmap(coin5pix.scaled(ui->label_coin5->width(),ui->label_coin5->height()));
        ui->label_bet_number->setText("5");
        break;
    }
    case 3:{
        QPixmap coin10pix(":/pht/image/coin10.png");
        ui->label_2->setPixmap(coin10pix.scaled(ui->label_coin10->width(),ui->label_coin10->height()));
        ui->label_bet_number->setText("10");
        break;
    }
    case 4:{
        QPixmap coin50pix(":/pht/image/coin50.png");
        ui->label_2->setPixmap(coin50pix.scaled(ui->label_coin50->width(),ui->label_coin50->height()));
        ui->label_bet_number->setText("50");
        break;
    }
    case 5:{
        QPixmap coin100pix(":/pht/image/coin100.png");
        ui->label_2->setPixmap(coin100pix.scaled(ui->label_coin100->width(),ui->label_coin100->height()));
        ui->label_bet_number->setText("100");
        break;
    }
    case 6:{
        QPixmap coin500pix(":/pht/image/coin500.png");
        ui->label_2->setPixmap(coin500pix.scaled(ui->label_coin500->width(),ui->label_coin500->height()));
        ui->label_bet_number->setText("500");
        break;
    }
    }
}

void Gamewindow::on_pushButton_menu_clicked()
{
    Gamemenu gameMenuWindow;
    gameMenuWindow.setModal(true);
    gameMenuWindow.exec();
}

void Gamewindow::on_pushButton_play_clicked()
{
    bet_regimeOFF();
    ui->label_all_number->setText(QString::number((ui->label_all_number->text()).toInt()-(ui->label_bet_number->text()).toInt()));

    //first deal
    cardAdding(1);
    cardAdding(1);
    cardAdding(0);
    cardSecretAdding();
}

//Function for animation card adding
void Gamewindow::cardAdding(int whom) //1 if card to player & 0 if card to dealer
{
    int randomID=cardRandomizing();  //card randomization

    //adding new label
    QLabel* lbl= new QLabel(this);
    lbl->setGeometry(ui->card_side->geometry());

    QPixmap cardPix(cardList.at(randomID).link);
    lbl->setPixmap(cardPix.scaled(ui->card_side->width(),ui->card_side->height()));
    lbl->show();

    //animation
    angleStepCard=4.2;
    if(whom==1){
    playerPoint+=cardList.at(randomID).cost;  //Point calculation
    cardListAnim.append(lbl);
    float angleUnit = 1.57/cardListAnim.size();
    for(int i=0;i<cardListAnim.size();i++){
        QLabel *lbl= cardListAnim.at(i);
        QPropertyAnimation* animation= new QPropertyAnimation(lbl,"geometry");
        animation->setDuration(800);
        animation->setEasingCurve(QEasingCurve::InCubic);

        animation->setEndValue(QRectF(cos(angleUnit*i+angleStepCard)*scaleCard+xShiftCard, sin(angleUnit*i+angleStepCard)*scaleCard+yShiftCard,ui->card_side->width(),ui->card_side->height()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    ui->label_player_point->setText(QString::number(playerPoint)); //set point to label
    if(playerPoint>20)
        on_pushButton_removeCard_clicked();
    }
    else{
    dealerPoint+=cardList.at(randomID).cost; //Point calculation
    cardListAnimDealer.append(lbl);
    float angleUnit = 1.57/cardListAnimDealer.size();
    for(int i=0;i<cardListAnimDealer.size();i++){
        QLabel *lbl= cardListAnimDealer.at(i);
        QPropertyAnimation* animation= new QPropertyAnimation(lbl,"geometry");
        animation->setDuration(800);
        animation->setEasingCurve(QEasingCurve::InCubic);
        animation->setEndValue(QRectF(cos(angleUnit*i+angleStepCard)*scaleCard+xShiftCard, sin(angleUnit*i+angleStepCard)*scaleCard+120,ui->card_side->width(),ui->card_side->height()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
     ui->label_dealer_point->setText(QString::number(dealerPoint)); //set point to label
    }
    sleep(150);
}

void Gamewindow::cardSecretAdding()  //adding hidden dealer cards
{
    int randomID=cardRandomizing();  //card randomization

    QLabel* lbl= new QLabel(this);
    lbl->setGeometry(ui->card_side->geometry());

    QPixmap cardPix(cardList.at(52).link);
    lbl->setPixmap(cardPix.scaled(ui->card_side->width(),ui->card_side->height()));
    lbl->show();

    angleStepCard=4.2;
    secretDealerPoint+=cardList.at(randomID).cost; //Point calculation
    cardListAnimDealer.append(lbl);
    float angleUnit = 1.57/cardListAnimDealer.size();
    for(int i=0;i<cardListAnimDealer.size();i++){
     QLabel *lbl= cardListAnimDealer.at(i);
     QPropertyAnimation* animation= new QPropertyAnimation(lbl,"geometry");
     animation->setDuration(800);
     animation->setEasingCurve(QEasingCurve::InCubic);
     animation->setEndValue(QRectF(cos(angleUnit*i+angleStepCard)*scaleCard+xShiftCard, sin(angleUnit*i+angleStepCard)*scaleCard+120,ui->card_side->width(),ui->card_side->height()));
     animation->start(QAbstractAnimation::DeleteWhenStopped);
    }
    ui->label_dealer_point->setText(QString::number(dealerPoint)); //set point to label
    sleep(150);
}

int Gamewindow::cardRandomizing()
{
    srand (time(NULL));
    int randomID;
    while(true){
     randomID=rand()%52;
     if(std::find(usedCard.begin(),usedCard.end(),randomID)==usedCard.end())
     {
        usedCard.push_back(randomID);
        return randomID;
        break;
     }
    }
}

void Gamewindow::on_pushButton_addCard_clicked()
{
    cardAdding(1);
}

void Gamewindow::sleep(qint64 msec)
{
        QEventLoop loop;
        QTimer::singleShot(msec, &loop, SLOT(quit()));
        loop.exec();
}


void Gamewindow::on_pushButton_removeCard_clicked()
{
    ui->pushButton_addCard->hide();
    ui->pushButton_removeCard->hide();
    ui->pushButton_replay->show();
    ui->pushButton_another_bet->show();
    ui->label_replay->show();
    ui->label_another_bet->show();

    ui->label_removeCard->hide();
    ui->label_addCard->hide();

    if(playerPoint>21){  //lose
     ui->label_winlose->show();
     ui->label_winlose->setText("Нема виграшу");
    }
    else{
     while(dealerPoint<12)
     cardAdding(0);

        dealerPoint+=secretDealerPoint;
     ui->label_dealer_point->setText(QString::number(dealerPoint));

        if(playerPoint>dealerPoint||dealerPoint>21) //win
     {
     ui->label_winlose->show();
     ui->label_winlose->setText("Ви виграли: ");
     ui->label_winlose->setText(ui->label_winlose->text().append(QString::number(ui->label_bet_number->text().toInt()*2)));
     ui->label_all_number->setText(QString::number((ui->label_all_number->text().toInt()+ui->label_bet_number->text().toInt()*2)));
     }
        else{ //lose
     ui->label_winlose->show();
     ui->label_winlose->setText("Нема виграшу");
        }
    }
}

void Gamewindow::on_pushButton_another_bet_clicked()
{
    //deleting old info
    playerPoint=0;
    dealerPoint=0;
    secretDealerPoint=0;

    bet_regimeON();
    ui->label_winlose->hide();
    ui->pushButton_another_bet->hide();
    ui->pushButton_replay->hide();
    ui->label_another_bet->hide();
    ui->label_replay->hide();

    //deleting old card
    usedCard.clear();
    for(int i=0;i<cardListAnim.size();i++){
    QLabel* lbl=cardListAnim.at(i);
    delete lbl;
    }
    cardListAnim.remove(0,cardListAnim.size());

    for(int i=0;i<cardListAnimDealer.size();i++){
    QLabel* lbl=cardListAnimDealer.at(i);
    delete lbl;
    }
    cardListAnimDealer.remove(0,cardListAnimDealer.size());

}

void Gamewindow::on_pushButton_replay_clicked()
{
    //deleting old info
    playerPoint=0;
    dealerPoint=0;
    secretDealerPoint=0;

    ui->label_winlose->hide();
    ui->pushButton_another_bet->hide();
    ui->pushButton_replay->hide();
    ui->label_another_bet->hide();
    ui->label_replay->hide();

    //deleting old card
    usedCard.clear();
    for(int i=0;i<cardListAnim.size();i++){
    QLabel* lbl=cardListAnim.at(i);
    delete lbl;
    }
    cardListAnim.remove(0,cardListAnim.size());

    for(int i=0;i<cardListAnimDealer.size();i++){
    QLabel* lbl=cardListAnimDealer.at(i);
    delete lbl;
    }
    cardListAnimDealer.remove(0,cardListAnimDealer.size());

    on_pushButton_play_clicked();
}














