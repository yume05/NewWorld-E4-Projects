#include "dialogmodifierpersonnel.h"
#include "ui_dialogmodifierpersonnel.h"

DialogModifierPersonnel::DialogModifierPersonnel(QString leNom, QString lePrenom, QString leMail, QString leTel, QString laRue, QString laVille, QString leCp, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModifierPersonnel)
{
    ui->setupUi(this);
    ui->lineEditNom->setText(leNom);
    ui->lineEditPrenom->setText(lePrenom);
    ui->lineEditMail->setText(leMail);
    ui->lineEditTel->setText(leTel);
    ui->lineEditRue->setText(laRue);
    ui->lineEditVille->setText(laVille);
    ui->lineEditCp->setText(leCp);

}

DialogModifierPersonnel::~DialogModifierPersonnel()
{
    delete ui;
}

QString DialogModifierPersonnel::getNom()
{
    return ui->lineEditNom->text();
}


QString DialogModifierPersonnel::getPrenom()
{
    return ui->lineEditPrenom->text();
}

QString DialogModifierPersonnel::getMail()
{
    return ui->lineEditMail->text();
}

QString DialogModifierPersonnel::getTel()
{
    return ui->lineEditTel->text();
}

QString DialogModifierPersonnel::getRue()
{
    return ui->lineEditRue->text();
}

QString DialogModifierPersonnel::getVille()
{
    return ui->lineEditVille->text();
}

QString DialogModifierPersonnel::getCp()
{
    return ui->lineEditCp->text();
}

/*QString DialogModifierPersonnel::getType()
{
    return ui->comboBoxType->();
}*/
