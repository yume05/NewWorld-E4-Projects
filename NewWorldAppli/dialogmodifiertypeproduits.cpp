#include "dialogmodifiertypeproduits.h"
#include "ui_dialogmodifiertypeproduits.h"
#include <QComboBox>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>

DialogModifierTypeProduits::DialogModifierTypeProduits(QString leTypeProduit, QString leRayon, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogModifierTypeProduits)
{
    ui->setupUi(this);
    chargeLesRayons();
    ui->lineEditModifTextTypeProduit->setText(leTypeProduit);
    ui->comboBoxDeplacerTypeProduit->setCurrentText(leRayon);
}

DialogModifierTypeProduits::~DialogModifierTypeProduits()
{
    delete ui;
}


QString DialogModifierTypeProduits::getRayons()
{
    return ui->comboBoxDeplacerTypeProduit->currentData().toString();
}

QString DialogModifierTypeProduits::getTypeProduits()
{
    return ui->lineEditModifTextTypeProduit->text();
}


void DialogModifierTypeProduits::chargeLesRayons()
{
    qDebug()<<"void DialogModifierTypeProduits::chargeLesRayons()";
    ui->comboBoxDeplacerTypeProduit->clear();
    QSqlQuery reqRayons ("select libelle, id from rayons;");
    //On affiche tout les rayons
    while (reqRayons.next())
    {
        QString nomRayons = reqRayons.value(0).toString();
        QString idRayons = reqRayons.value(1).toString();
        ui->comboBoxDeplacerTypeProduit->addItem(nomRayons, idRayons);
    }
}
