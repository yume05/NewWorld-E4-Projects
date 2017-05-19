#include "dialogMenuPrincipal.h"
#include "ui_dialogMenuPrincipal.h"

DialogMenuPrincipal::DialogMenuPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMenuPrincipal)
{
    ui->setupUi(this);
}

DialogMenuPrincipal::~DialogMenuPrincipal()
{
    delete ui;
}
