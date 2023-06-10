#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <memory>
#include "QList"
#include "math.h"
#include "QPropertyAnimation"
#include "QLabel"
#include "cardinfo.h"


namespace Ui {
class Gamewindow;
}

class Gamewindow : public QDialog
{
    Q_OBJECT

public:
    explicit Gamewindow(QWidget *parent = nullptr);
    ~Gamewindow();

private slots:
    void on_pushButton_left_clicked();

    void on_pushButton_right_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_menu_clicked();

    void on_pushButton_play_clicked();

    void on_pushButton_addCard_clicked();

    void on_pushButton_removeCard_clicked();

    void on_pushButton_another_bet_clicked();

    void on_pushButton_replay_clicked();

private:
    Ui::Gamewindow *ui;

    int skinID;

    //variables for coin animation
    int xShift, yShift, scale;
    float angleStep;
    QList<QLabel*> coinList;

    void coinScrolling(float turn); //function of coin animation

    //variables for card animation
    int xShiftCard, yShiftCard, scaleCard, cardSize;
    float angleStepCard;
    QList<QLabel*> cardListAnim, cardListAnimDealer;
    QList<CardInfo> cardList;
    std::vector<int> usedCard;

    int randomShadowID;

    //function of card animation
    void cardAdding(int whom);
    void cardSecretAdding();
    void cardFlip(int x, int y);

    int cardRandomizing();

    void sleep(qint64 msec);

    int playerPoint=0, dealerPoint=0,secretDealerPoint=0;
    void bet_regimeON();
    void bet_regimeOFF();

    int coinID; //tracking which cois is selected

public slots:
    void slot();
};

#endif // GAMEWINDOW_H
