#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Name1");
    ui->listWidget->addItem("Name2");
    ui->listWidget->addItem("Name3");
    ui->listWidget->addItem("Name4");
}

Setting::~Setting()
{
    delete ui;
}
