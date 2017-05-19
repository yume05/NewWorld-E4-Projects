#ifndef DIALOGMENUPRINCIPAL_H
#define DIALOGMENUPRINCIPAL_H

#include <QDialog>

namespace Ui {
class DialogMenuPrincipal;
}

class DialogMenuPrincipal : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogMenuPrincipal(QWidget *parent = 0);
    ~DialogMenuPrincipal();
    
private:
    Ui::DialogMenuPrincipal *ui;
};

#endif // DIALOGMENUPRINCIPAL_H
