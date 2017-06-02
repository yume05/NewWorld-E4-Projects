#ifndef DIALOGAFFICHEIMAGEPRODUIT_H
#define DIALOGAFFICHEIMAGEPRODUIT_H

#include <QDialog>

namespace Ui {
class DialogAfficheImageProduit;
}

class DialogAfficheImageProduit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAfficheImageProduit(QString lImage, QWidget *parent = 0);
    ~DialogAfficheImageProduit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogAfficheImageProduit *ui;
};

#endif // DIALOGAFFICHEIMAGEPRODUIT_H
