#ifndef DIALOGAJOUTRAYONS_H
#define DIALOGAJOUTRAYONS_H

#include <QDialog>

namespace Ui {
class DialogAjoutRayons;
}

class DialogAjoutRayons : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAjoutRayons(QWidget *parent = 0);
    ~DialogAjoutRayons();

private:
    Ui::DialogAjoutRayons *ui;
};

#endif // DIALOGAJOUTRAYONS_H
