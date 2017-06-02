#ifndef DIALOGMODIFIERTYPEPRODUITS_H
#define DIALOGMODIFIERTYPEPRODUITS_H

#include <QDialog>

namespace Ui {
class DialogModifierTypeProduits;
}

class DialogModifierTypeProduits : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModifierTypeProduits(QString leTypeProduit, QString leRayon, QWidget *parent = 0);
    ~DialogModifierTypeProduits();
    QString getRayons();
    QString getTypeProduits();
    void chargeLesRayons();

private slots:

private:
    Ui::DialogModifierTypeProduits *ui;
};

#endif // DIALOGMODIFIERTYPEPRODUITS_H
