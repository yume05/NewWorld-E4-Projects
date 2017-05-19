#ifndef DIALOGMODIFIERPERSONNEL_H
#define DIALOGMODIFIERPERSONNEL_H

#include <QDialog>

namespace Ui {
class DialogModifierPersonnel;
}

class DialogModifierPersonnel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogModifierPersonnel(QString leNom, QString lePrenom, QString leMail, QString leTel, QString laRue, QString laVille, QString leCp,  QWidget *parent = 0);
    ~DialogModifierPersonnel();
    QString getNom();
    QString getPrenom();
    QString getMail();
    QString getTel();
    QString getVille();
    QString getRue();
    QString getCp();

private:
    Ui::DialogModifierPersonnel *ui;
};

#endif // DIALOGMODIFIERPERSONNEL_H
