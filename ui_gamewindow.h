/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gamewindow
{
public:
    QLabel *label_background;
    QPushButton *pushButton_6;
    QLabel *label_coin1;
    QLabel *label_coin10;
    QLabel *label_coin50;
    QLabel *label_coin100;
    QLabel *label_coin5;
    QLabel *label_coin500;
    QPushButton *pushButton_menu;
    QLabel *label_panel;
    QPushButton *pushButton_right;
    QPushButton *pushButton_left;
    QLabel *label_arrow;
    QLabel *card_side;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_play;
    QLabel *label_all;
    QLabel *label_bet;
    QLabel *label_bet_number;
    QLabel *label_all_number;
    QLabel *card_side_2;
    QLabel *card_side_3;
    QPushButton *pushButton_addCard;
    QPushButton *pushButton_removeCard;
    QLabel *label_addCard;
    QLabel *label_removeCard;
    QLabel *label_dealer_point;
    QLabel *label_player_point;
    QLabel *label_winlose;
    QPushButton *pushButton_another_bet;
    QPushButton *pushButton_replay;
    QLabel *label_another_bet;
    QLabel *label_replay;

    void setupUi(QDialog *Gamewindow)
    {
        if (Gamewindow->objectName().isEmpty())
            Gamewindow->setObjectName("Gamewindow");
        Gamewindow->resize(1081, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pht/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Gamewindow->setWindowIcon(icon);
        Gamewindow->setStyleSheet(QString::fromUtf8(""));
        label_background = new QLabel(Gamewindow);
        label_background->setObjectName("label_background");
        label_background->setGeometry(QRect(0, 470, 71, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_background->sizePolicy().hasHeightForWidth());
        label_background->setSizePolicy(sizePolicy);
        pushButton_6 = new QPushButton(Gamewindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(490, 290, 111, 111));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 5px solid;\n"
"border-color: rgb(173, 173, 173);\n"
"  border-radius: 55px;\n"
"  padding: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"	border-color: rgb(255, 255, 255);\n"
"}"));
        label_coin1 = new QLabel(Gamewindow);
        label_coin1->setObjectName("label_coin1");
        label_coin1->setGeometry(QRect(495, 420, 91, 91));
        label_coin1->setStyleSheet(QString::fromUtf8(""));
        label_coin10 = new QLabel(Gamewindow);
        label_coin10->setObjectName("label_coin10");
        label_coin10->setGeometry(QRect(770, 700, 91, 91));
        label_coin10->setStyleSheet(QString::fromUtf8(""));
        label_coin50 = new QLabel(Gamewindow);
        label_coin50->setObjectName("label_coin50");
        label_coin50->setGeometry(QRect(500, 700, 91, 91));
        label_coin50->setStyleSheet(QString::fromUtf8(""));
        label_coin100 = new QLabel(Gamewindow);
        label_coin100->setObjectName("label_coin100");
        label_coin100->setGeometry(QRect(390, 700, 91, 91));
        label_coin100->setStyleSheet(QString::fromUtf8(""));
        label_coin5 = new QLabel(Gamewindow);
        label_coin5->setObjectName("label_coin5");
        label_coin5->setGeometry(QRect(660, 515, 91, 91));
        label_coin5->setStyleSheet(QString::fromUtf8(""));
        label_coin500 = new QLabel(Gamewindow);
        label_coin500->setObjectName("label_coin500");
        label_coin500->setGeometry(QRect(330, 515, 91, 91));
        label_coin500->setStyleSheet(QString::fromUtf8(""));
        pushButton_menu = new QPushButton(Gamewindow);
        pushButton_menu->setObjectName("pushButton_menu");
        pushButton_menu->setGeometry(QRect(840, 470, 81, 81));
        pushButton_menu->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pht/image/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_menu->setIcon(icon1);
        pushButton_menu->setIconSize(QSize(81, 81));
        label_panel = new QLabel(Gamewindow);
        label_panel->setObjectName("label_panel");
        label_panel->setGeometry(QRect(-22, 485, 1141, 181));
        label_panel->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);\n"
" border: 3px solid white;"));
        pushButton_right = new QPushButton(Gamewindow);
        pushButton_right->setObjectName("pushButton_right");
        pushButton_right->setGeometry(QRect(570, 570, 80, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        pushButton_right->setFont(font);
        pushButton_right->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"   color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        pushButton_left = new QPushButton(Gamewindow);
        pushButton_left->setObjectName("pushButton_left");
        pushButton_left->setGeometry(QRect(430, 570, 80, 51));
        pushButton_left->setFont(font);
        pushButton_left->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
" color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        label_arrow = new QLabel(Gamewindow);
        label_arrow->setObjectName("label_arrow");
        label_arrow->setGeometry(QRect(530, 530, 31, 41));
        QFont font1;
        font1.setPointSize(19);
        label_arrow->setFont(font1);
        label_arrow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        card_side = new QLabel(Gamewindow);
        card_side->setObjectName("card_side");
        card_side->setGeometry(QRect(840, 30, 141, 211));
        label = new QLabel(Gamewindow);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 280, 91, 91));
        label_2 = new QLabel(Gamewindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(501, 300, 91, 91));
        pushButton_play = new QPushButton(Gamewindow);
        pushButton_play->setObjectName("pushButton_play");
        pushButton_play->setGeometry(QRect(215, 470, 81, 81));
        pushButton_play->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pht/image/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_play->setIcon(icon2);
        pushButton_play->setIconSize(QSize(70, 55));
        label_all = new QLabel(Gamewindow);
        label_all->setObjectName("label_all");
        label_all->setGeometry(QRect(10, 590, 91, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rubik Bubbles")});
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        label_all->setFont(font2);
        label_all->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Rubik Bubbles\";"));
        label_bet = new QLabel(Gamewindow);
        label_bet->setObjectName("label_bet");
        label_bet->setGeometry(QRect(10, 530, 91, 41));
        label_bet->setFont(font2);
        label_bet->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Rubik Bubbles\";"));
        label_bet_number = new QLabel(Gamewindow);
        label_bet_number->setObjectName("label_bet_number");
        label_bet_number->setGeometry(QRect(110, 530, 161, 41));
        label_bet_number->setFont(font2);
        label_bet_number->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Rubik Bubbles\";"));
        label_all_number = new QLabel(Gamewindow);
        label_all_number->setObjectName("label_all_number");
        label_all_number->setGeometry(QRect(105, 590, 161, 41));
        label_all_number->setFont(font2);
        label_all_number->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"Rubik Bubbles\";"));
        card_side_2 = new QLabel(Gamewindow);
        card_side_2->setObjectName("card_side_2");
        card_side_2->setGeometry(QRect(835, 33, 141, 211));
        card_side_3 = new QLabel(Gamewindow);
        card_side_3->setObjectName("card_side_3");
        card_side_3->setGeometry(QRect(830, 36, 141, 211));
        pushButton_addCard = new QPushButton(Gamewindow);
        pushButton_addCard->setObjectName("pushButton_addCard");
        pushButton_addCard->setGeometry(QRect(260, 470, 81, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_addCard->sizePolicy().hasHeightForWidth());
        pushButton_addCard->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(40);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setStyleStrategy(QFont::PreferDefault);
        pushButton_addCard->setFont(font3);
        pushButton_addCard->setLayoutDirection(Qt::LeftToRight);
        pushButton_addCard->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"text-align: center;\n"
"	font: 40pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pht/image/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_addCard->setIcon(icon3);
        pushButton_addCard->setIconSize(QSize(150, 150));
        pushButton_removeCard = new QPushButton(Gamewindow);
        pushButton_removeCard->setObjectName("pushButton_removeCard");
        pushButton_removeCard->setGeometry(QRect(170, 470, 81, 81));
        pushButton_removeCard->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 40pt \"Segoe UI Black\";\n"
"  color: rgb(255,15,20)\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        pushButton_removeCard->setIconSize(QSize(70, 55));
        label_addCard = new QLabel(Gamewindow);
        label_addCard->setObjectName("label_addCard");
        label_addCard->setGeometry(QRect(290, 440, 41, 21));
        label_addCard->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 15pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);\n"
"}"));
        label_removeCard = new QLabel(Gamewindow);
        label_removeCard->setObjectName("label_removeCard");
        label_removeCard->setGeometry(QRect(182, 430, 71, 41));
        label_removeCard->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 15pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);\n"
"}"));
        label_dealer_point = new QLabel(Gamewindow);
        label_dealer_point->setObjectName("label_dealer_point");
        label_dealer_point->setGeometry(QRect(350, 20, 81, 81));
        label_dealer_point->setStyleSheet(QString::fromUtf8("\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"text-align: center;\n"
"	font: 25pt \"Segoe UI Black\";\n"
"  color: white;\n"
""));
        label_player_point = new QLabel(Gamewindow);
        label_player_point->setObjectName("label_player_point");
        label_player_point->setGeometry(QRect(350, 555, 81, 81));
        label_player_point->setStyleSheet(QString::fromUtf8("\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"text-align: center;\n"
"	font: 25pt \"Segoe UI Black\";\n"
"  color: white;\n"
""));
        label_winlose = new QLabel(Gamewindow);
        label_winlose->setObjectName("label_winlose");
        label_winlose->setGeometry(QRect(240, 250, 611, 91));
        label_winlose->setStyleSheet(QString::fromUtf8("\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"text-align: center;\n"
"	font: 40pt \"Segoe UI Black\";\n"
"  color: white;\n"
"AlignCenter;\n"
""));
        pushButton_another_bet = new QPushButton(Gamewindow);
        pushButton_another_bet->setObjectName("pushButton_another_bet");
        pushButton_another_bet->setGeometry(QRect(170, 470, 81, 81));
        pushButton_another_bet->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"	font: 900 40pt \"Segoe UI Black\";\n"
"  color: rgb(255,15,20)\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        pushButton_another_bet->setIcon(icon3);
        pushButton_another_bet->setIconSize(QSize(70, 55));
        pushButton_replay = new QPushButton(Gamewindow);
        pushButton_replay->setObjectName("pushButton_replay");
        pushButton_replay->setGeometry(QRect(260, 470, 81, 81));
        sizePolicy1.setHeightForWidth(pushButton_replay->sizePolicy().hasHeightForWidth());
        pushButton_replay->setSizePolicy(sizePolicy1);
        pushButton_replay->setFont(font3);
        pushButton_replay->setLayoutDirection(Qt::LeftToRight);
        pushButton_replay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(50, 50, 50);\n"
"text-align: center;\n"
"	font: 40pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(40, 40, 40);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(30, 30, 30);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pht/image/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_replay->setIcon(icon4);
        pushButton_replay->setIconSize(QSize(90, 90));
        label_another_bet = new QLabel(Gamewindow);
        label_another_bet->setObjectName("label_another_bet");
        label_another_bet->setGeometry(QRect(172, 430, 91, 41));
        label_another_bet->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 15pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);\n"
"}"));
        label_replay = new QLabel(Gamewindow);
        label_replay->setObjectName("label_replay");
        label_replay->setGeometry(QRect(264, 440, 81, 21));
        label_replay->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 15pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);\n"
"}"));
        label_background->raise();
        label_panel->raise();
        pushButton_menu->raise();
        label_coin1->raise();
        label_coin10->raise();
        label_coin100->raise();
        label_coin5->raise();
        label_coin50->raise();
        label_coin500->raise();
        pushButton_right->raise();
        pushButton_left->raise();
        label_arrow->raise();
        label->raise();
        label_2->raise();
        pushButton_6->raise();
        pushButton_play->raise();
        label_all->raise();
        label_bet->raise();
        label_bet_number->raise();
        label_all_number->raise();
        card_side_3->raise();
        card_side_2->raise();
        card_side->raise();
        pushButton_addCard->raise();
        pushButton_removeCard->raise();
        label_addCard->raise();
        label_removeCard->raise();
        label_dealer_point->raise();
        label_player_point->raise();
        label_winlose->raise();
        pushButton_another_bet->raise();
        pushButton_replay->raise();
        label_another_bet->raise();
        label_replay->raise();

        retranslateUi(Gamewindow);

        QMetaObject::connectSlotsByName(Gamewindow);
    } // setupUi

    void retranslateUi(QDialog *Gamewindow)
    {
        Gamewindow->setWindowTitle(QCoreApplication::translate("Gamewindow", "Dialog", nullptr));
        label_background->setText(QString());
        pushButton_6->setText(QString());
        label_coin1->setText(QString());
        label_coin10->setText(QString());
        label_coin50->setText(QString());
        label_coin100->setText(QString());
        label_coin5->setText(QString());
        label_coin500->setText(QString());
        pushButton_menu->setText(QString());
        label_panel->setText(QString());
        pushButton_right->setText(QCoreApplication::translate("Gamewindow", "\360\237\241\272", nullptr));
        pushButton_left->setText(QCoreApplication::translate("Gamewindow", "\360\237\241\270", nullptr));
        label_arrow->setText(QCoreApplication::translate("Gamewindow", "\360\237\241\271", nullptr));
        card_side->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        pushButton_play->setText(QString());
        label_all->setText(QCoreApplication::translate("Gamewindow", "\320\222\321\201\321\214\320\276\320\263\320\276:", nullptr));
        label_bet->setText(QCoreApplication::translate("Gamewindow", "\320\241\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_bet_number->setText(QCoreApplication::translate("Gamewindow", "0", nullptr));
        label_all_number->setText(QCoreApplication::translate("Gamewindow", "1000", nullptr));
        card_side_2->setText(QString());
        card_side_3->setText(QString());
        pushButton_addCard->setText(QString());
        pushButton_removeCard->setText(QCoreApplication::translate("Gamewindow", "X", nullptr));
        label_addCard->setText(QCoreApplication::translate("Gamewindow", "hit", nullptr));
        label_removeCard->setText(QCoreApplication::translate("Gamewindow", "Stand", nullptr));
        label_dealer_point->setText(QString());
        label_player_point->setText(QString());
        label_winlose->setText(QCoreApplication::translate("Gamewindow", "TextLabel", nullptr));
        pushButton_another_bet->setText(QString());
        pushButton_replay->setText(QString());
        label_another_bet->setText(QCoreApplication::translate("Gamewindow", "Another", nullptr));
        label_replay->setText(QCoreApplication::translate("Gamewindow", "Replay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamewindow: public Ui_Gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
