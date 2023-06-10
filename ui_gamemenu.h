/********************************************************************************
** Form generated from reading UI file 'gamemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMENU_H
#define UI_GAMEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamemenu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_return_game;
    QPushButton *pushButton_return_mainmenu;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Gamemenu)
    {
        if (Gamemenu->objectName().isEmpty())
            Gamemenu->setObjectName("Gamemenu");
        Gamemenu->resize(400, 357);
        Gamemenu->setStyleSheet(QString::fromUtf8("background-color: rgb(57,57,57);\n"
" border: 6px solid black;\n"
"  \n"
"  padding: 10px;\n"
""));
        layoutWidget = new QWidget(Gamemenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 50, 281, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_return_game = new QPushButton(layoutWidget);
        pushButton_return_game->setObjectName("pushButton_return_game");
        pushButton_return_game->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(169, 0, 0);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(139, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(119, 0, 0);\n"
"}"));

        verticalLayout->addWidget(pushButton_return_game);

        pushButton_return_mainmenu = new QPushButton(layoutWidget);
        pushButton_return_mainmenu->setObjectName("pushButton_return_mainmenu");
        pushButton_return_mainmenu->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(169, 0, 0);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(139, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(119, 0, 0);\n"
"}"));

        verticalLayout->addWidget(pushButton_return_mainmenu);

        pushButton_exit = new QPushButton(layoutWidget);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" border: 4px solid black;\n"
"  border-radius: 20px;\n"
"  padding: 10px;\n"
"background-color: rgb(169, 0, 0);\n"
"	font: 900 16pt \"Segoe UI Black\";\n"
"  font: black;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(139, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(119, 0, 0);\n"
"}"));

        verticalLayout->addWidget(pushButton_exit);


        retranslateUi(Gamemenu);

        QMetaObject::connectSlotsByName(Gamemenu);
    } // setupUi

    void retranslateUi(QDialog *Gamemenu)
    {
        Gamemenu->setWindowTitle(QCoreApplication::translate("Gamemenu", "Dialog", nullptr));
        pushButton_return_game->setText(QCoreApplication::translate("Gamemenu", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\214 \320\264\320\276 \320\263\321\200\320\270", nullptr));
        pushButton_return_mainmenu->setText(QCoreApplication::translate("Gamemenu", "\320\222\320\270\320\271\321\202\320\270 \320\262 \320\263\320\276\320\273\320\276\320\262\320\275\320\265 \320\274\320\265\320\275\321\216", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Gamemenu", "\320\222\320\270\320\271\321\202\320\270 \320\267\321\226 \320\263\321\200\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamemenu: public Ui_Gamemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMENU_H
