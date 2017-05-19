#ifndef DIALOGCONNEXION_H
#define DIALOGCONNEXION_H

#include <QDialog>

namespace Ui {
class DialogConnexion;
}

class DialogConnexion : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConnexion(QWidget *parent = 0);
    ~DialogConnexion();
    QString getLogin();
    QString getMdp();
    QString getIp();
    
private:
    Ui::DialogConnexion *ui;
};



#endif // DIALOGCONNEXION_H
