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

private:
    Ui::Gamewindow *ui;

    int skinID;

    //variables for coin animation
    int xShift, yShift, scale;
    float angleStep;
    QList<QLabel*> coinList;
    void coinScrolling(float turn); //function of coin animation
    void cardCreating(int);

    //int i;
    //std::shared_ptr<int> coinID();
};

#endif // GAMEWINDOW_H
