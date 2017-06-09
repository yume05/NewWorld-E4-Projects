#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow2(QString leUser, QWidget *parent = 0);
    ~MainWindow2();
    QString idUserConnected;
    QString idVisiteCourante;
    QString idProducteurVisite;
    QString producteur;
    QString gestionnaire;
    QString etat;
    QString datePrevue;
    QString typeVisite;
    QString choixFinal;
    QString motifRefus;
    QString etatVisiteCombo;
    QString prodEtat;
    void chargerVisitesToutes();
    void clearVisite();
    
private slots:
    void on_tableWidgetVisites_cellClicked(int row, int column);

    void on_comboBoxEtatVisite_currentTextChanged(const QString &arg1);

    void on_pushButtonValiderAcc_clicked();

    void on_pushButtonValiderAtt_clicked();

private:
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
