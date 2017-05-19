#include "dialogajoutrayons.h"
#include "ui_dialogajoutrayons.h"

DialogAjoutRayons::DialogAjoutRayons(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutRayons)
{
    ui->setupUi(this);
}

DialogAjoutRayons::~DialogAjoutRayons()
{
    delete ui;
}
