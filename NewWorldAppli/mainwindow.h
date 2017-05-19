#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QString leUserConnected, QWidget *parent = 0);
    ~MainWindow();
    QString idUserConnected;
    QString idPersonnel;
    void chargeLePersonnel();
    void chargeLesRayons();
    void chargeLesRayonsCombo();


private slots:
    void on_pushButtonGestionPersonnelAjouter_clicked();

    void on_pushButtonGestionPersonnelModifier_clicked();

    void on_pushButtonGestionPersonnelSupprimer_clicked();

    void on_tableWidgetPersonnel_cellClicked(int row, int column);

    void on_tableWidgetRayons_cellClicked(int row, int column);

    void on_tableWidgetTypeProduits_cellClicked(int row, int column);

    void on_comboBoxRayons_currentIndexChanged(const QString&);


    void on_pushButtonAjoutRayons_clicked();

    void on_pushButtonSupprimerRayons_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
