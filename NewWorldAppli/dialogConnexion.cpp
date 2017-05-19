#include "dialogConnexion.h"
#include "ui_dialogConnexion.h"

DialogConnexion::DialogConnexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnexion)
{
    ui->setupUi(this);
}

DialogConnexion::~DialogConnexion()
{
    delete ui;
}

QString DialogConnexion::getLogin()
{
    return ui->lineEditLogin->text();
}

QString DialogConnexion::getMdp()
{
    return ui->lineEditMdp->text();
}

QString DialogConnexion::getIp()
{
    return ui->lineEditIp->text();
}
