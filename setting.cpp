#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Стиль 1");
    ui->listWidget->addItem("Стиль 2");
    ui->listWidget->addItem("Стиль 3");
    ui->listWidget->addItem("Стиль 4");

    //*style=1;
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_pushButton_clicked()
{
    Sound sound;
    sound.playButton();
    if(ui->listWidget->currentItem()->text() == "Cтиль 1")
        style=1;
    if(ui->listWidget->currentItem()->text() == "Cтиль 2")
        style=2;
    if(ui->listWidget->currentItem()->text() == "Cтиль 3")
        style=3;
    if(ui->listWidget->currentItem()->text() == "Cтиль 4")
        style=4;

    emit signal();
    hide();
}


