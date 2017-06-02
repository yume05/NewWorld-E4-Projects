#include "dialogafficheimageproduit.h"
#include "ui_dialogafficheimageproduit.h"
#include <QDebug>

DialogAfficheImageProduit::DialogAfficheImageProduit(QString lImage, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAfficheImageProduit)
{
    ui->setupUi(this);
    qDebug()<<lImage;
    ui->labelImage->setPixmap("/home/clapprand/public_html/Program/MDBFree/img/produits/"+lImage);
    ui->labelImage->show();
}

DialogAfficheImageProduit::~DialogAfficheImageProduit()
{
    delete ui;
}

void DialogAfficheImageProduit::on_pushButton_clicked()
{
    close();
}
