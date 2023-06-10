#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include "sound.h"

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_clicked(const QModelIndex &index);

private:
    Ui::Setting *ui;
    int style;

signals:
    void signal(int value);

public slots:
    void slot();
};

#endif // SETTING_H
