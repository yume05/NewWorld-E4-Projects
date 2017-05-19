#include "dialogajoutpersonnel.h"
#include "ui_dialogajoutpersonnel.h"

DialogAjoutPersonnel::DialogAjoutPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAjoutPersonnel)
{
    ui->setupUi(this);
}

DialogAjoutPersonnel::~DialogAjoutPersonnel()
{
    delete ui;
}

QString DialogAjoutPersonnel::getNom()
{
    return ui->lineEditNom->text();
}


QString DialogAjoutPersonnel::getPrenom()
{
    return ui->lineEditPrenom->text();
}

QString DialogAjoutPersonnel::getMail()
{
    return ui->lineEditMail->text();
}

QString DialogAjoutPersonnel::getTel()
{
    return ui->lineEditTel->text();
}

QString DialogAjoutPersonnel::getRue()
{
    return ui->lineEditRue->text();
}

QString DialogAjoutPersonnel::getVille()
{
    return ui->lineEditVille->text();
}

QString DialogAjoutPersonnel::getCp()
{
    return ui->lineEditCp->text();
}
