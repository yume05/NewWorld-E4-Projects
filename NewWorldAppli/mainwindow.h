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
    QString idTypeProduitPasRanges;
    QString idRayonPasRanges;
    QString idRayonCourant;
    QString idTypeProduitCourant;
    QString idProduitCourant;
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

    void on_pushButtonModifierTypeProduits_clicked();

    void on_comboBoxTypeProduits_currentIndexChanged(const QString &arg1);

    void on_pushButtonAjoutTypeProduits_clicked();

    void on_pushButtonSupprimerTypeProduits_clicked();

    void on_tableWidgetProduits_cellClicked(int row, int column);

    void on_pushButtonModifierProduits_clicked();

    void on_pushButtonSupprimerProduits_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
