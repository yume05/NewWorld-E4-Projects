#ifndef DIALOGAJOUTPERSONNEL_H
#define DIALOGAJOUTPERSONNEL_H

#include <QDialog>

namespace Ui {
class DialogAjoutPersonnel;
}

class DialogAjoutPersonnel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutPersonnel(QWidget *parent = 0);
    ~DialogAjoutPersonnel();
    QString getNom();
    QString getPrenom();
    QString getMail();
    QString getTel();
    QString getVille();
    QString getRue();
    QString getCp();

private:
    Ui::DialogAjoutPersonnel *ui;
};

#endif // DIALOGAJOUTPERSONNEL_H
