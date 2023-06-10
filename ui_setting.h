/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(464, 367);
        Setting->setStyleSheet(QString::fromUtf8("background-color: rgb(57,57,57);"));
        listWidget = new QListWidget(Setting);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 30, 161, 192));
        listWidget->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);"));
        label = new QLabel(Setting);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 30, 221, 221));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: rgb(228,228,228);\n"
"}"));
        pushButton = new QPushButton(Setting);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 300, 81, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QPushButton\n"
"{\n"
" border: 1.5px solid rgb(228,228,228);\n"
"  border-radius: 10px;\n"
"  padding: 2px;\n"
"  background-color: rgb(57,57,57);\n"
"	font: 900 10pt \"Segoe UI Black\";\n"
"  color: rgb(228,228,228);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(70, 70, 70);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: rgb(50, 50, 50);\n"
"}"));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Setting", "34523452345]", nullptr));
        pushButton->setText(QCoreApplication::translate("Setting", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
