/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_background_main;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_play;
    QPushButton *pushButton_setting;
    QPushButton *pushButton_exit;
    QLabel *title;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(761, 551);
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pht/image/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_background_main = new QLabel(centralwidget);
        label_background_main->setObjectName("label_background_main");
        label_background_main->setGeometry(QRect(240, 400, 761, 561));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(230, 210, 339, 271));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_play = new QPushButton(verticalLayoutWidget);
        pushButton_play->setObjectName("pushButton_play");
        pushButton_play->setMinimumSize(QSize(120, 70));
        pushButton_play->setSizeIncrement(QSize(0, 0));
        pushButton_play->setStyleSheet(QString::fromUtf8("QPushButton\n"
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

        verticalLayout_3->addWidget(pushButton_play);

        pushButton_setting = new QPushButton(verticalLayoutWidget);
        pushButton_setting->setObjectName("pushButton_setting");
        pushButton_setting->setMinimumSize(QSize(300, 70));
        pushButton_setting->setSizeIncrement(QSize(0, 0));
        pushButton_setting->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_setting->setIconSize(QSize(16, 16));

        verticalLayout_3->addWidget(pushButton_setting);

        pushButton_exit = new QPushButton(verticalLayoutWidget);
        pushButton_exit->setObjectName("pushButton_exit");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_exit->sizePolicy().hasHeightForWidth());
        pushButton_exit->setSizePolicy(sizePolicy);
        pushButton_exit->setMinimumSize(QSize(300, 70));
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

        verticalLayout_3->addWidget(pushButton_exit);

        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(160, 40, 441, 131));
        title->setPixmap(QPixmap(QString::fromUtf8(":/pht/image/title.png")));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Black Jack", nullptr));
        label_background_main->setText(QString());
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\320\260\321\202\320\270 \320\263\321\200\321\203", nullptr));
        pushButton_setting->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\271\321\202\320\270 \320\267\321\226 \320\263\321\200\320\270", nullptr));
        title->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
