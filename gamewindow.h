#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include "QList"
#include "math.h"
#include "QPropertyAnimation"
#include "QLabel"

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

private:
    Ui::Gamewindow *ui;

    int xShift, yShift, scale;
    QList<QLabel*> coinList;
    void coinScrolling();
};

#endif // GAMEWINDOW_H
