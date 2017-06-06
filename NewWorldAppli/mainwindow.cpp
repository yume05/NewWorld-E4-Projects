#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlQuery>
#include <QTableWidget>
#include <QSqlRecord>
#include "dialogmodifierpersonnel.h"
#include "dialogajoutpersonnel.h"
#include <QMessageBox>
#include <QInputDialog>
#include "dialogmodifiertypeproduits.h"
#include <QDateEdit>
#include <QDateTime>
#include "dialogafficheimageproduit.h"

MainWindow::MainWindow(QString leUserConnected, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    idUserConnected = leUserConnected;
    ui->setupUi(this);
    chargeLePersonnel();
    chargeLesRayons();
    chargeLesRayonsCombo();
    chargeLesProducteursAccepter();
    chargeLesProducteursTous();
    chargeLesControleurs();
    chargeLesVisites();
    QSqlQuery reqTypeProduitPasRanges("select typeProduits.id from rayons inner join typeProduits on rayons.id = typeProduits.idRayons where rayons.libelle = 'Pas ranges' ;");
    while(reqTypeProduitPasRanges.next()){
        idTypeProduitPasRanges = reqTypeProduitPasRanges.value(0).toString();
    }
    QSqlQuery reqRayonPasRanges ("select distinct rayons.id from rayons where libelle = 'Pas ranges';");
    while(reqRayonPasRanges.next()){
        idRayonPasRanges = reqRayonPasRanges.value(0).toString();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::chargeLePersonnel()
{
    qDebug()<<"void MainWindow::chargeLePersonnel()";

    ui->tableWidgetPersonnel->setRowCount(0);
    ui->tableWidgetPersonnel->setColumnCount(0);
    //je créée ma requete qui chargera les evaluations à l'ouverture de l'application
    QSqlQuery reqChargePersonnel;
    QString textreq = "SELECT pers_login, pers_nom, pers_prenom, pers_mail, pers_tel, pers_cp, pers_rue, pers_ville, type_libelle, pers_id FROM personnel INNER JOIN type ON personnel.pers_type = type.type_id;";
    qDebug()<<textreq;
    //je fais une boucle 0, n
    reqChargePersonnel.exec(textreq);
    //le next agit en curseur, et va a la ligne suivante jusqu'a qu'ils n'en existent plus
    int nbLigne = ui->tableWidgetPersonnel->rowCount();
    QSqlRecord fields = reqChargePersonnel.record();

        while(reqChargePersonnel.next())//pour chaque
        {
            nbLigne++;
            ui->tableWidgetPersonnel->setRowCount(nbLigne);
            //nbLigne recoit +1 pour initialiser la ligne qui sera ajouter
            //ajout d'une ligne en plus des lignes déjà présentes

            ui->tableWidgetPersonnel->setColumnCount(9);
             //pour chaque champ à afficher
              for(int noCol=0;noCol<10;noCol++)
              {
                    QString colonne = reqChargePersonnel.value(noCol).toString();
                    ui->tableWidgetPersonnel->setItem(nbLigne-1,noCol,new QTableWidgetItem(colonne));
              }
              //chargement de l'identifiant du client en data32 de la première colonne
              ui->tableWidgetPersonnel->item(nbLigne-1,0)->setData(32,reqChargePersonnel.value("pers_id").toInt());

        }//fin du pour chaque
        for(int noField=0;noField<fields.count();noField++)
        {
            // on donne le nom de colonne
            ui->tableWidgetPersonnel->setHorizontalHeaderItem(noField,new QTableWidgetItem(fields.fieldName(noField)));
        }

}
void MainWindow::chargeLesRayonsCombo()
{
    QSqlQuery reqRayons ("select libelle, id from rayons;");
    ui->comboBoxRayons->clear();
    while (reqRayons.next()){
        QString nomRayons = reqRayons.value(0).toString();
        QString idRayons = reqRayons.value(1).toString();
        ui->comboBoxRayons->addItem(nomRayons, idRayons);
    }
}

/**
 * @brief MainWindow::chargeLesRayons
 */
void MainWindow::chargeLesRayons()
{
    qDebug()<<"void MainWindow::chargeLesRayons()";
    ui->tableWidgetRayons->setRowCount(0);
    QSqlQuery reqRayons ("select libelle, id from rayons;");
    int nbLigne = ui->tableWidgetRayons->rowCount();
            while (reqRayons.next())
            {
                    nbLigne++;
                    ui->tableWidgetRayons->setRowCount(nbLigne);
                    //nbLigne recoit +1 pour initialiser la ligne qui sera ajouter
                    //ajout d'une ligne en plus des lignes déjà présentes

                    ui->tableWidgetRayons->setColumnCount(1);
                     //pour chaque champ à afficher
                      for(int noCol=0;noCol<1;noCol++)
                      {
                            QString colonne = reqRayons.value(noCol).toString();
                            ui->tableWidgetRayons->setItem(nbLigne-1,noCol,new QTableWidgetItem(colonne));
                      }
                      //chargement de l'identifiant du client en data32 de la première colonne
                      ui->tableWidgetRayons->item(nbLigne-1,0)->setData(32,reqRayons.value("id").toInt());

                }//fin du pour chaque

}

void MainWindow::chargeLesProducteursAccepter()
{
    qDebug()<<"void MainWindow::chargeLesProducteurs()";
    ui->tableWidgetProducteurs->setRowCount(0);
    QSqlQuery reqProducteurs ("SELECT user.user_login, user.user_nom, user.user_prenom, user.user_id FROM user INNER JOIN type ON user.user_type = type.type_id WHERE type.type_libelle = 'Producteur' AND user.etat = 'ACC';");
    int nbLigne = ui->tableWidgetProducteurs->rowCount();
    while(reqProducteurs.next())
    {
        nbLigne++;
        ui->tableWidgetProducteurs->setRowCount(nbLigne);
        for(int noCol=0;noCol<4;noCol++)
        {
            QString colonne  = reqProducteurs.value(noCol).toString();
            ui->tableWidgetProducteurs->setItem(nbLigne-1,noCol, new QTableWidgetItem(colonne));
        }
        ui->tableWidgetProducteurs->item(nbLigne-1,0)->setData(32,reqProducteurs.value("user_id").toInt());
    }
}

void MainWindow::chargeLesProducteursTous()
{
    qDebug()<<"void MainWindow::chargeLesProducteursTous()";
    ui->tableWidgetProducteursTous->setRowCount(0);
    QSqlQuery reqProducteursTous ("SELECT user.user_login, user.user_nom, user.user_prenom, user.user_rue, user.user_ville, user.user_cp, user.etat, user.user_id FROM user INNER JOIN type ON user.user_type = type.type_id WHERE type.type_libelle = 'Producteur' AND user.etat like 'ACC' OR user.etat like 'ATT' AND type.type_libelle = 'Producteur';");
    int nbLigne = ui->tableWidgetProducteursTous->rowCount();
    qDebug()<<"SELECT user.user_login, user.user_nom, user.user_prenom, user.user_rue, user.user_ville, user.user_cp, propose.etat, user.user_id FROM user INNER JOIN type ON user.user_type = type.type_id INNER JOIN propose ON user.user_id = propose.producteurUser WHERE type.type_libelle = 'Producteur' AND user.etat like 'ACC' OR user.etat like 'ATT' AND type.type_libelle = 'Producteur';";
    while(reqProducteursTous.next())
    {
        nbLigne++;
        ui->tableWidgetProducteursTous->setRowCount(nbLigne);
        QString adresse = reqProducteursTous.value(3).toString();
        adresse += " "+reqProducteursTous.value(4).toString();
        adresse += " "+reqProducteursTous.value(5).toString();
        qDebug()<<adresse;
        QString nomcomplet = reqProducteursTous.value(1).toString();
        nomcomplet += " "+reqProducteursTous.value(2).toString();
        qDebug()<<nomcomplet;
        QString login  = reqProducteursTous.value(0).toString();
        QString etat  = reqProducteursTous.value(6).toString();
        ui->tableWidgetProducteursTous->setItem(nbLigne-1,0, new QTableWidgetItem(login));
        ui->tableWidgetProducteursTous->setItem(nbLigne-1,1, new QTableWidgetItem(nomcomplet));
        ui->tableWidgetProducteursTous->setItem(nbLigne-1,2, new QTableWidgetItem(adresse));
        ui->tableWidgetProducteursTous->setItem(nbLigne-1,3, new QTableWidgetItem(etat));
        ui->tableWidgetProducteursTous->item(nbLigne-1,0)->setData(32,reqProducteursTous.value("user_id").toInt());
    }
}

void MainWindow::chargeLesControleurs()
{
    qDebug()<<"void MainWindow::chargeLesControleurs()";
    ui->tableWidgetControleurs->setRowCount(0);
    QSqlQuery reqControleurs ("SELECT personnel.pers_login, personnel.pers_nom, personnel.pers_prenom, personnel.pers_rue, personnel.pers_ville, personnel.pers_rue, personnel.pers_id FROM personnel INNER JOIN type ON personnel.pers_type = type.type_id WHERE type.type_libelle = 'Controleur';");
    qDebug()<<"SELECT personnel.pers_login, personnel.pers_nom, personnel.pers_prenom, personnel.pers_rue, personnel.pers_ville, personnel.pers_rue FROM personnel INNER JOIN type ON personnel.pers_type = type.type_id WHERE type.type_libelle = 'Controleur';";
    int nbLigne = ui->tableWidgetControleurs->rowCount();
    while(reqControleurs.next())
    {
        nbLigne++;
        ui->tableWidgetControleurs->setRowCount(nbLigne);
        QString adresse = reqControleurs.value(3).toString();
        adresse += " "+reqControleurs.value(4).toString();
        adresse += " "+reqControleurs.value(5).toString();
        qDebug()<<adresse;
        QString nomcomplet = reqControleurs.value(1).toString();
        nomcomplet += " "+reqControleurs.value(2).toString();
        qDebug()<<nomcomplet;
        QString login  = reqControleurs.value(0).toString();
        ui->tableWidgetControleurs->setItem(nbLigne-1,0, new QTableWidgetItem(login));
        ui->tableWidgetControleurs->setItem(nbLigne-1,1, new QTableWidgetItem(nomcomplet));
        ui->tableWidgetControleurs->setItem(nbLigne-1,2, new QTableWidgetItem(adresse));
        ui->tableWidgetControleurs->item(nbLigne-1,0)->setData(32,reqControleurs.value("pers_id").toInt());
    }
}

void MainWindow::chargeLesVisites()
{
    qDebug()<<"void MainWindow::chargeLesVisites()";
    ui->tableWidgetVisites->setRowCount(0);
    //Requete pour afficher le gestionnaire en toute lettre
    QSqlQuery reqVisites ("SELECT personnel.pers_nom, personnel.pers_prenom, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.dateVisite, user.user_nom, user_prenom, visitePrevue.id FROM visitePrevue INNER JOIN personnel ON visitePrevue.idGestionnaire = personnel.pers_id INNER JOIN user ON visitePrevue.idProducteur = user.user_id WHERE personnel.pers_type like 1 ;");
    int nbLigne = ui->tableWidgetVisites->rowCount();
    //requete pour afficher le controleur en toute lettre
    QSqlQuery reqVisites2 ("SELECT personnel.pers_nom, personnel.pers_prenom, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.dateVisite, user.user_nom, user_prenom, visitePrevue.id FROM visitePrevue INNER JOIN personnel ON visitePrevue.idControleur = personnel.pers_id INNER JOIN user ON visitePrevue.idProducteur = user.user_id WHERE personnel.pers_type like 2 ;");
    qDebug()<<"SELECT personnel.pers_nom, personnel.pers_prenom, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.dateVisite, user.user_nom, user_prenom, visitePrevue.id FROM visitePrevue INNER JOIN personnel ON visitePrevue.idGestionnaire = personnel.pers_id INNER JOIN user ON visitePrevue.idProducteur = user.user_id WHERE personnel.pers_type like 1 ;";
    qDebug()<<"SELECT personnel.pers_nom, personnel.pers_prenom, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.dateVisite, user.user_nom, user_prenom, visitePrevue.id FROM visitePrevue INNER JOIN personnel ON visitePrevue.idControleur = personnel.pers_id INNER JOIN user ON visitePrevue.idProducteur = user.user_id WHERE personnel.pers_type like 2 ;";
    while(reqVisites.next() && reqVisites2.next())
    {
        nbLigne++;
        ui->tableWidgetVisites->setRowCount(nbLigne);

        QString nomcompletGestionnaire = reqVisites.value(0).toString();
        nomcompletGestionnaire += " "+reqVisites.value(1).toString();
        qDebug()<<nomcompletGestionnaire;
        QString nomcompletControleur = reqVisites2.value(0).toString();
        nomcompletControleur += " "+reqVisites2.value(1).toString();
        qDebug()<<nomcompletControleur;
        QString nomcompletProducteur = reqVisites.value(5).toString();
        nomcompletProducteur += " "+reqVisites2.value(6).toString();
        qDebug()<<nomcompletProducteur;

        QString dateVisite = reqVisites.value(4).toString();
        QString etat  = reqVisites.value(2).toString();
        QString typeVisite = reqVisites.value(3).toString();
        ui->tableWidgetVisites->setItem(nbLigne-1,0, new QTableWidgetItem(dateVisite));
        ui->tableWidgetVisites->setItem(nbLigne-1,1, new QTableWidgetItem(etat));
        ui->tableWidgetVisites->setItem(nbLigne-1,2, new QTableWidgetItem(nomcompletGestionnaire));
        ui->tableWidgetVisites->setItem(nbLigne-1,3, new QTableWidgetItem(nomcompletControleur));
        ui->tableWidgetVisites->setItem(nbLigne-1,4, new QTableWidgetItem(nomcompletProducteur));
        ui->tableWidgetVisites->setItem(nbLigne-1,5, new QTableWidgetItem(typeVisite));
        ui->tableWidgetVisites->item(nbLigne-1,0)->setData(32,reqVisites.value("id").toInt());
    }
}

void MainWindow::on_tableWidgetRayons_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetRayons_clicked(const QModelIndex &index)";
        //ui->tableWidgetTypeProduits->setRowCount(0);
        //Récupère le numéro de la ligne sélectionner
        ui->pushButtonModifierProduits->setEnabled(false);
        ui->pushButtonSupprimerProduits->setEnabled(false);
        ui->lineEditLibelleProduit->setEnabled(false);
        ui->doubleSpinBoxPoids->setEnabled(false);
        ui->doubleSpinBoxPrix->setEnabled(false);
        ui->dateTimeEditDebut->setEnabled(false);
        ui->dateTimeEditFin->setEnabled(false);
        ui->lineEditLibelleProduit->clear();
        ui->doubleSpinBoxPoids->clear();
        ui->doubleSpinBoxPrix->clear();
        idRayonCourant=ui->tableWidgetRayons->item(row,0)->data(32).toString();
        qDebug()<<idRayonCourant;
        QSqlQuery reqTypeProduits ("select typeProduits.libelle, typeProduits.id from typeProduits inner join rayons on typeProduits.idRayons = rayons.id where idRayons = "+idRayonCourant+";");
        int nbLigne= reqTypeProduits.numRowsAffected();
        ui->tableWidgetTypeProduits->setRowCount(nbLigne);
        int noLigne=0;
        while (reqTypeProduits.next())
        {
            QString typeDuProduit = reqTypeProduits.value(0).toString();
            QTableWidgetItem* nouvelItem=new QTableWidgetItem(typeDuProduit);
            //chargement de l'identifiant du client en data32 de la première colonne
            nouvelItem->setData(32,reqTypeProduits.value("id").toInt());
            ui->tableWidgetTypeProduits->setItem(noLigne,0,nouvelItem);
            noLigne++;

        }//fin du pourchaque typeDeProduit
}

void MainWindow::on_comboBoxRayons_currentIndexChanged(const QString &arg1)
{
        qDebug()<<"void MainWindow::on_comboBoxRayons_currentIndexChanged(const QString &arg1)";
        ui->comboBoxTypeProduits->clear();
        int nbreDeLigne = ui->comboBoxRayons->count();
        if(nbreDeLigne>0){
            ui->pushButtonSupprimerRayons->setEnabled(true);
                //Récupère le numéro de la ligne sélectionner
                    QString idRayons = ui->comboBoxRayons->currentData().toString();
                    QSqlQuery reqTypeProduit ("select typeProduits.libelle, typeProduits.id from typeProduits inner join rayons on typeProduits.idRayons = rayons.id where idRayons = "+idRayons+";");

                            while (reqTypeProduit.next())
                            {
                                QString nomTypeProduit = reqTypeProduit.value(0).toString();
                                QString idTypeProduit = reqTypeProduit.value(1).toString();
                                ui->comboBoxTypeProduits->addItem(nomTypeProduit, idTypeProduit);
                            }
                   }


}

void MainWindow::on_tableWidgetTypeProduits_cellClicked(int row, int column)
{
        qDebug()<<"void MainWindow::on_tableWidgetTypeProduits_cellClicked(const QModelIndex &index)";
        ui->tableWidgetProduits->setRowCount(0);
        //Récuperer l'id de la ligne sélectionnait
        ui->pushButtonModifierProduits->setEnabled(false);
        ui->pushButtonSupprimerProduits->setEnabled(false);
        ui->lineEditLibelleProduit->setEnabled(false);
        ui->doubleSpinBoxPoids->setEnabled(false);
        ui->doubleSpinBoxPrix->setEnabled(false);
        ui->dateTimeEditDebut->setEnabled(false);
        ui->dateTimeEditFin->setEnabled(false);
        ui->lineEditLibelleProduit->clear();
        ui->doubleSpinBoxPoids->clear();
        ui->doubleSpinBoxPrix->clear();
        //Récupère le numéro de la ligne sélectionner
        idTypeProduitCourant=ui->tableWidgetTypeProduits->item(row,0)->data(32).toString();
        qDebug()<<idTypeProduitCourant;
        QSqlQuery reqProduits ("select produits.libelle, produits.prix, produits.poids, produits.dateDebut, produits.dateFin, produits.id from produits inner join typeProduits on produits.idTypeProduits = typeProduits.id INNER JOIN propose ON produits.id = propose.producteurProduits where propose.etat = 'ACC' AND idTypeProduits = "+idTypeProduitCourant+";");
        int nbLigne= 0;
                while (reqProduits.next())
                {
                        nbLigne++;
                        ui->tableWidgetProduits->setRowCount(nbLigne);
                        //nbLigne recoit +1 pour initialiser la ligne qui sera ajouter
                        //ajout d'une ligne en plus des lignes déjà présentes

                         //pour chaque champ à afficher
                          for(int noCol=0;noCol<5;noCol++)
                          {
                                QString colomn = reqProduits.value(noCol).toString();
                                ui->tableWidgetProduits->setItem(nbLigne-1,noCol,new QTableWidgetItem(colomn));
                          }
                          //chargement de l'identifiant du client en data32 de la première colonne
                          ui->tableWidgetProduits->item(nbLigne-1,0)->setData(32,reqProduits.value("id").toInt());

                    }//fin du pour chaque
}




void MainWindow::on_pushButtonGestionPersonnelModifier_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonGestionPersonnelModifier_clicked()";
    qDebug()<<"MARCHE";
    //Récupère le numéro de la ligne sélectionner
    int ligneSelect = ui->tableWidgetPersonnel->currentRow();
    qDebug()<<ligneSelect;
    //Récupération du prénom de la ligne sélectionner
    QString nomValue = ui->tableWidgetPersonnel->item(ligneSelect, 0)->text();
    //Récupération du nom de la ligne sélectionner
    QString prenomValue = ui->tableWidgetPersonnel->item(ligneSelect, 1)->text();
    //Récupération de l'adresse mail de la ligne sélectionner
    QString mailValue = ui->tableWidgetPersonnel->item(ligneSelect, 2)->text();
    //Récupération du portable de la ligne sélectionner
    QString telValue = ui->tableWidgetPersonnel->item(ligneSelect, 3)->text();
    QString cpValue = ui->tableWidgetPersonnel->item(ligneSelect, 4)->text();
    //Récupération de l'adresse mail de la ligne sélectionner
    QString rueValue = ui->tableWidgetPersonnel->item(ligneSelect, 5)->text();
    //Récupération du portable de la ligne sélectionner
    QString villeValue = ui->tableWidgetPersonnel->item(ligneSelect, 6)->text();
    idPersonnel=ui->tableWidgetPersonnel->item(ligneSelect,0)->data(32).toString();
    qDebug()<<idPersonnel;
    //execution du dialogue contact
    DialogModifierPersonnel diagModifPers(nomValue, prenomValue, mailValue, telValue, rueValue, villeValue, cpValue, this);
    //si le dialogue à été exécuter
    if(diagModifPers.exec()==QDialog::Accepted)
    {
        qDebug()<<"test";
        //les variables recoivent les données saisies du dialogue edit
        QString nom = diagModifPers.getNom();
        QString prenom = diagModifPers.getPrenom();
        QString mail = diagModifPers.getMail();
        QString portable = diagModifPers.getTel();
        QString cp = diagModifPers.getCp();
        QString ville = diagModifPers.getVille();
        QString rue = diagModifPers.getRue();



        //Création d'une requete permettant la modification d'un contact dans la bdd

        QString texteReq = "update personnel set pers_prenom = '"+prenom+"', pers_nom = '"+nom+"', pers_mail = '"+mail+"', pers_tel = '"+portable+"', pers_rue = '"+rue+"', pers_ville = '"+ville+"', pers_cp = '"+cp+"', pers_type= '1' WHERE pers_id = '"+idPersonnel+"';";
        qDebug()<<texteReq;
        QSqlQuery reqModifier(texteReq);
        reqModifier.exec();

        //recharge les contacts
        ui->tableWidgetPersonnel->setRowCount(0);
        chargeLePersonnel();
}
}

void MainWindow::on_pushButtonGestionPersonnelSupprimer_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonGestionPersonnelSupprimer_clicked()";
    int nbreDeLigne = ui->tableWidgetPersonnel->rowCount();
    if(nbreDeLigne>0){
            //Récupère le numéro de la ligne sélectionner
            int ligneSelect = ui->tableWidgetPersonnel->currentRow();
            //demander la confirmation par une question.
            int rep = (QMessageBox::question(this, tr("Personnel"),  "Voulez vous vraiment supprimer cette personne ? ", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes));

            //Si la réponse à la question est positive, sortir de l'application
            if (rep == QMessageBox::Yes)
            {
                idPersonnel=ui->tableWidgetPersonnel->item(ligneSelect,0)->data(32).toString();

                if(idPersonnel == idUserConnected){
                    ui->statusBar->showMessage("Vous n'allez quand même pas vous supprimez !");
                }else{
                    ui->tableWidgetPersonnel->removeRow(ligneSelect);
                    //Création d'une requete permettant la suppression d'un Personnel dans la bdd
                    QSqlQuery reqSupprimePersonnel;
                    QString texteReq = "delete from personnel where pers_id = ";
                    texteReq += idPersonnel;
                    texteReq += ";";

                    qDebug()<<texteReq;
                    //Execution de la requete permettant de supprimer un contact
                    reqSupprimePersonnel.exec(texteReq);
                    int ligne = ui->tableWidgetPersonnel->rowCount();
                    if(ligne==0){

                                ui->pushButtonGestionPersonnelSupprimer->setEnabled(false);
                                ui->pushButtonGestionPersonnelModifier->setEnabled(false);
                        }
                    chargeLePersonnel();
                }

            }else{
                 ui->statusBar->showMessage("Action suppression annuler");
            }


       }else{
        ui->statusBar->showMessage("Pas de contact");

    }
}

void MainWindow::on_tableWidgetPersonnel_cellClicked(int row, int column)
{
    ui->pushButtonGestionPersonnelModifier->setEnabled(true);
    ui->pushButtonGestionPersonnelSupprimer->setEnabled(true);
}


void MainWindow::on_pushButtonGestionPersonnelAjouter_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonGestionPersonnelAjouter_clicked()";
    //execution du dialogue contact
    DialogAjoutPersonnel diagAjoutPersonnel;
    //si le dialogue à été exécuter
    if(diagAjoutPersonnel.exec()==QDialog::Accepted)
    {
        //les variables recoivent les données saisies du dialogue edit
        QString login = diagAjoutPersonnel.getLogin();
        QString nom = diagAjoutPersonnel.getNom();
        QString prenom = diagAjoutPersonnel.getPrenom();
        QString mail = diagAjoutPersonnel.getMail();
        QString portable = diagAjoutPersonnel.getTel();
        QString cp = diagAjoutPersonnel.getCp();
        QString ville = diagAjoutPersonnel.getVille();
        QString rue = diagAjoutPersonnel.getRue();
        QString type = diagAjoutPersonnel.getType();
        qDebug()<<type;
        //si champs vides
        if(login.isEmpty() || prenom.isEmpty() || nom.isEmpty() || mail.isEmpty() || portable.isEmpty() || cp.isEmpty() || ville.isEmpty() || rue.isEmpty()){
            //Message d'erreur
            QMessageBox::critical(this, "Error", "You have to complete all fields !!");
             return;
        }else{
            if(type=="Gestionnaire")
            {
                type = "1";
            } else {
                type = "2";
            }

            //nbLigne recoit le nombre de ligne du tableWidgetStudent
            int nbLigne = ui->tableWidgetPersonnel->rowCount();
            //nbLigne recoit +1 pour initialiser la ligne qui sera AjoutPersonneler
            nbLigne++;
            //AjoutPersonnel d'une ligne en plus des lignes déjà présentes
            ui->tableWidgetPersonnel->setRowCount(nbLigne);
            //remplissage de la ligne AjoutPersonneler, avec les données correspondantes
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 0, new QTableWidgetItem(login));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 1, new QTableWidgetItem(nom));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 2, new QTableWidgetItem(prenom));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 3, new QTableWidgetItem(mail));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 4, new QTableWidgetItem(portable));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 5, new QTableWidgetItem(cp));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 6, new QTableWidgetItem(rue));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 7, new QTableWidgetItem(ville));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 8, new QTableWidgetItem(type));




            //Création d'une requete qui inserera les données saisies dans la table Personnel
            QSqlQuery reqPersonnel;
            QString texteRequete = "insert into personnel (pers_login, pers_nom, pers_prenom, pers_mdp, pers_mail, pers_tel, pers_ville, pers_rue, pers_cp, pers_type) values ('";
            texteRequete += login;
            texteRequete +="','";
            texteRequete += nom;
            texteRequete +="','";
            texteRequete +=prenom;
            texteRequete +="', 'ini01', '";
            texteRequete +=mail;
            texteRequete +="','";
            texteRequete +=portable;
            texteRequete +="','";
            texteRequete +=ville;
            texteRequete +="','";
            texteRequete +=rue;
            texteRequete +="','";
            texteRequete+=cp;
            texteRequete +="','";
            texteRequete+=type;
            texteRequete += "');";

            //test de la requete
            qDebug()<<texteRequete;
            //execution de la requête
            reqPersonnel.exec(texteRequete);
            chargeLePersonnel();

            }//fin sinon
    }
}




void MainWindow::on_pushButtonAjoutRayons_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAjoutRayons_clicked()";
        //déclaration variable ok booléen
        bool ok;
        //ouvre une boite de dialogue, pour saisie le nom d'un rayon
        //nomRayons recoit le nom du rayon saisie
        QString nomRayons = QInputDialog::getText(this, tr("Gestion catalogue"),
                                                   tr ("Nom rayon ="), QLineEdit::Normal, "...", &ok);
        //si ok=1 et nomRayons n'est pas vide
        if(ok && !nomRayons.isEmpty())
        {
            QSqlQuery reqRayonsVerif;
            QString texteVerif ("select * from rayons where libelle = '"+nomRayons+"';");
            reqRayonsVerif.exec(texteVerif);
            qDebug()<<texteVerif;
            //Si le nom du rayon n'existe pas déjà
            if(reqRayonsVerif.size()==0){
                QSqlQuery reqRayons;
                QString texteRequete = "insert into rayons (libelle) values ('"+nomRayons+"');";
                //test de la requete
                qDebug()<<texteRequete;
                //execution de la requête
                reqRayons.exec(texteRequete);
                //Une fois le rayon créer, on va lui créer un type de produits s'appellant "Pas rangés";
                QSqlQuery reqPasRanges ("select id from rayons where libelle = '"+nomRayons+"';");
                while (reqPasRanges.next()){
                    QString idNouveauRayon = reqPasRanges.value(0).toString();
                    qDebug()<<"idNouveauRayon = "+idNouveauRayon;
                    QSqlQuery reqAjoutPasRanges ("insert into typeProduits (libelle, idRayons) values ('Pas ranges', "+idNouveauRayon+");");
                    reqAjoutPasRanges.exec();
                }
                chargeLesRayonsCombo();
            }
            else
            {
                //message d'erreur
                QMessageBox::critical(this, "Error", "This name is already exist !!");
                 return;
            }//fin sinon
        }//fin si
}

void MainWindow::on_pushButtonSupprimerRayons_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSupprimerRayons_clicked()";
    //Récuperer l'id du rayon sélectionnait
    QString idRayons = ui->comboBoxRayons->currentData().toString();
    qDebug()<<idRayons;
    //Vérifier si le rayon que l'utilisateur veut supprimer n'est pas le rayon "Pas ranges"
    QSqlQuery reqIsRayonPasRanges ("select * from rayons where id = "+idRayons+" AND libelle = 'Pas ranges';");
    int nbLigne= reqIsRayonPasRanges.numRowsAffected();
    //Si le rayon sélectionnait n'est pas le rayon "Pas Rangés"
    if(nbLigne==0){

        //Vérifier si le rayon en question possède des type de produits
        QSqlQuery reqExisteTypeProduit ("select typeProduits.id from rayons inner join typeProduits on typeProduits.idRayons = rayons.id where idRayons = "+idRayons+";");
        qDebug()<<"select typeProduits.id from rayons inner join typeProduits on typeProduits.idRayons = rayons.id where idRayons = "+idRayons+";";
        int nbLigne= reqExisteTypeProduit.numRowsAffected();
        qDebug()<<nbLigne;

        //Si le rayon ne possède aucuns type de produits, alors il peut etre supprimer normalement
        if(nbLigne == 0){
            QSqlQuery reqDeleteRayon ("delete from rayons where id = "+idRayons+";");
            qDebug()<<"delete from rayons where id = '+idRayons+';";
            reqDeleteRayon.exec();
            chargeLesRayonsCombo();
            chargeLesRayons();
        //Si le rayon possède des type de produits il faut les déplacer dans le "pas ranges" et supprimer son 'pas rangés' à lui
        }else{
            //On verifie que la catégorie pas rangés du rayons possède des produits
            QSqlQuery reqPossedeProduits ("select produits.id from rayons inner join typeProduits on rayons.id = typeProduits.idRayons inner join produits on typeProduits.id = produits.idTypeProduits where rayons.id = "+idRayons+" AND typeProduits.libelle = 'Pas ranges';");
            int nbLigne= reqPossedeProduits.numRowsAffected();
            qDebug()<<nbLigne;
            //Si oui il possède des produits, on les déplace dans la catégorie pas ranges du rayon pas ranges et on supprime la categorie "pas ranges" du rayon que l'on veut supprimer
            if(nbLigne > 0){
                qDebug()<<"Pas rangés du rayons possède des produits";


                    qDebug()<<idTypeProduitPasRanges;
                    //On met les produits en question dans la cétégorie "pas rangés" du rayon " pas rangés"
                    while(reqPossedeProduits.next()){
                        QString idProduitPasRanges = reqPossedeProduits.value(0).toString();
                        qDebug()<<idProduitPasRanges;
                        //On déplace les produits dans la categorie pas rangés du rayon pas rangés
                        QSqlQuery reqUpdateProduitsDansPasRanges("update produits set idTypeProduits = "+idTypeProduitPasRanges+" where id = "+idProduitPasRanges+";");
                        reqUpdateProduitsDansPasRanges.exec();
                    }

            //Elle ne possède pas de produits
            }else{
                //On supprime le type de produits Pas rangés du rayon
                QSqlQuery reqDeleteTypeProduitPasRanges ("delete from typeProduits where libelle = 'Pas ranges', idRayons = "+idRayons+";");
                qDebug()<<"delete from typeProduits where libelle = 'Pas ranges', idRayons = "+idRayons+";";
                reqDeleteTypeProduitPasRanges.exec();
            }

            //On récupère l'id du rayon "Pas rangés"

            qDebug()<<idRayonPasRanges;
            //On déplace le type de produits dans le rayon Pas rangés
            QSqlQuery reqUpdateRayon("update typeProduits set idRayons = "+idRayonPasRanges+" where idRayons = "+idRayons+";");
            reqUpdateRayon.exec();

            //On supprime le rayon.
            QSqlQuery reqDeleteRayon ("delete from rayons where id = "+idRayons+";");
            qDebug()<<"delete from rayons where id = '+idRayons+';";
            reqDeleteRayon.exec();
            chargeLesRayonsCombo();
            chargeLesRayons();
         }
     //Si le rayon est bien le rayon "Pas Rangés" impossible de le supprimer
     }else{
        QMessageBox::critical(this, "Error", "Impossible de supprimer ce rayon");
         return;
    }

}

void MainWindow::on_pushButtonModifierTypeProduits_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifierTypeProduits_clicked()";
    //Récuperer l'id du type de produit sélectionnait
    QString nomTypeProduit = ui->comboBoxTypeProduits->currentText();
    QString idTypeProduit = ui->comboBoxTypeProduits->currentData().toString();
    QString idRayon = ui->comboBoxRayons->currentText();

    qDebug()<<idTypeProduit;
    qDebug()<<idRayon;
    //Afficher la boite de dialog permettant de modifier et de deplacer le type de produit dans un autre rayon
    DialogModifierTypeProduits diagModifTypeProduit(nomTypeProduit, idRayon, this);
    //si le dialogue à été exécuter
    if(diagModifTypeProduit.exec()==QDialog::Accepted)
    {
        qDebug()<<"Entrer dans la boite de dialog";
        //On récupère les informations saisies de la boite de dialog
        QString nomTypeProduit = diagModifTypeProduit.getTypeProduits();
        QString idRayonApres = diagModifTypeProduit.getRayons();
        //Si le rayon n'a pas été changé, on fait juste un update du text rayon
        if(idRayonApres == idRayon){
            QString texteReq = "update typeProduits set libelle = '"+nomTypeProduit+"' WHERE id = "+idTypeProduit+";";
            qDebug()<<texteReq;
            QSqlQuery reqModifierTypeProduit(texteReq);
            reqModifierTypeProduit.exec();
        //Si le rayon à été changer on modifie l'emplacement du type de Produit et on déplace ces produits avec
        }else{
            QString texteReq = "update typeProduits set idRayons =";
            texteReq = texteReq +idRayonApres+", libelle = '"+nomTypeProduit+"' WHERE id = ";
            texteReq =texteReq + idTypeProduit+";";
            qDebug()<<texteReq;
            QSqlQuery reqDeplacerTypeProduit(texteReq);
            reqDeplacerTypeProduit.exec();
        }
        //recharge les contacts
        ui->comboBoxTypeProduits->clear();
        chargeLesRayonsCombo();
        chargeLesRayons();
    }

}

void MainWindow::on_comboBoxTypeProduits_currentIndexChanged(const QString &arg1)
{
    ui->pushButtonModifierTypeProduits->setEnabled(true);
    ui->pushButtonSupprimerTypeProduits->setEnabled(true);
}

void MainWindow::on_pushButtonAjoutTypeProduits_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonAjoutTypeProduits_clicked()";
    QString idRayon = ui->comboBoxRayons->currentData().toString();
    qDebug()<<idRayon;
    //déclaration variable ok booléen
    bool ok;
    //ouvre une boite de dialogue, pour saisie le nom d'un rayon
    //nomRayons recoit le nom du rayon saisie
    QString nomTypeProduits = QInputDialog::getText(this, tr("Gestion catalogue"),
                                               tr ("Nom type de produits ="), QLineEdit::Normal, "...", &ok);
    //si ok=1 et nomRayons n'est pas vide
    if(ok && !nomTypeProduits.isEmpty())
    {
        QSqlQuery reqTypeProduitsVerif;
        QString texteVerif ("select * from typeProduits where libelle = '"+nomTypeProduits+"';");
        reqTypeProduitsVerif.exec(texteVerif);
        qDebug()<<texteVerif;
        //Si le nom du type de produit n'existe pas
        if(reqTypeProduitsVerif.size()==0){
            QSqlQuery reqTypeProduits;
            QString texteRequete = "insert into typeProduits (libelle, idRayons) values ('"+nomTypeProduits+"', "+idRayon+");";
            //test de la requete
            qDebug()<<texteRequete;
            //execution de la requête
            reqTypeProduits.exec(texteRequete);
            chargeLesRayonsCombo();
            chargeLesRayons();
        }
        else
        {
            //message d'erreur
            QMessageBox::critical(this, "Error", "This name is already exist !!");
             return;
        }//fin sinon
    }//fin si
}

void MainWindow::on_pushButtonSupprimerTypeProduits_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSupprimerTypeProduits_clicked()";
    //Récuperer l'id du type de produits à supprimer
    QString idTypeProduit = ui->comboBoxTypeProduits->currentData().toString();
    qDebug()<<idTypeProduit;
    qDebug()<<idTypeProduitPasRanges;

    //Si le type de produit sélectionnait n'est pas le type 'Pas ranges' du rayons 'Pas ranges'
    if(idTypeProduit != idTypeProduitPasRanges){

        //On verifie que le type de produit ne possède pas déjà des produits
        QSqlQuery reqExisteProduit ("select produits.id from typeProduits inner join produits on typeProduits.id = produits.idTypeProduits where typeProduits.id = "+idTypeProduit+";");
        qDebug()<<"select * from typeProduits inner join produits on typeProduits.id = produits.idTypeProduits where typeProduits.id = "+idTypeProduit+";";
        int nbLigne= reqExisteProduit.numRowsAffected();
        qDebug()<<nbLigne;

        //Si le type de produits ne possède aucuns produits on peut le supprimer direct
        if(nbLigne == 0){
            QSqlQuery reqDeleteTypeProduit ("delete from typeProduits where id = "+idTypeProduit+";");
            qDebug()<<"delete from typeProduits where id = "+idTypeProduit+";";
            reqDeleteTypeProduit.exec();
            chargeLesRayonsCombo();
            chargeLesRayons();
        //Si le rayon possède des produits on les déplace dans le type de produits 'pas ranges' du rayon 'Pas ranges'
        }else{
            while(reqExisteProduit.next()){
                QString idProduitARanger = reqExisteProduit.value(0).toString();
                QSqlQuery reqUpdateProduits ("update produits set idTypeProduits = "+idTypeProduitPasRanges+" where id = "+idProduitARanger+";");
                qDebug()<<"update produits set idTypeProduits = "+idTypeProduitPasRanges+" where id = "+idProduitARanger+";";
                reqUpdateProduits.exec();
            }
            //Et on supprime le type de produit sélectionnait
            QSqlQuery reqDeleteTypeProduit ("delete from typeProduits where id = "+idTypeProduit+";");
            qDebug()<<"delete from typeProduits where id = "+idTypeProduit+";";
            reqDeleteTypeProduit.exec();
            chargeLesRayonsCombo();
            chargeLesRayons();

         }
     //Si le type de produit est bien "Pas Rangés" du rayon 'Pas rangés' impossible de le supprimer
     }else{
        QMessageBox::critical(this, "Error", "Impossible de supprimer ce type de produit");
         return;
    }
}

void MainWindow::on_tableWidgetProduits_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetProduits_cellClicked(int row, int column)";
    //Récuperer l'id de la ligne sélectionnait
    ui->pushButtonModifierProduits->setEnabled(true);
    ui->pushButtonSupprimerProduits->setEnabled(true);
    ui->lineEditLibelleProduit->setEnabled(true);
    ui->doubleSpinBoxPoids->setEnabled(true);
    ui->doubleSpinBoxPrix->setEnabled(true);
    ui->dateTimeEditDebut->setEnabled(true);
    ui->dateTimeEditFin->setEnabled(true);
    idProduitCourant=ui->tableWidgetProduits->item(row,0)->data(32).toString();

    QSqlQuery reqProduit ("Select libelle, prix, poids, dateDebut, dateFin from produits where id = "+idProduitCourant+";");
    while(reqProduit.next()){
        QString libelle = reqProduit.value(0).toString();
        float prix = reqProduit.value(1).toFloat();
        float poids = reqProduit.value(2).toFloat();
        QDateTime dateDebut = reqProduit.value(3).toDateTime();
        QDateTime dateFin = reqProduit.value(4).toDateTime();
        ui->dateTimeEditDebut->setDateTime(dateDebut);
        ui->dateTimeEditFin->setDateTime(dateFin);
        ui->lineEditLibelleProduit->setText(libelle);
        ui->doubleSpinBoxPoids->setValue(poids);
        ui->doubleSpinBoxPrix->setValue(prix);
    }
    chargeLesRayonsCombo();
    QSqlQuery reqFindRayon ("select libelle from rayons where id = "+idRayonCourant+";");
    while(reqFindRayon.next()){
        QString libelleRayon = reqFindRayon.value(0).toString();
        ui->comboBoxRayons->setCurrentText(libelleRayon);
    }
    QSqlQuery reqFindTypeProduits ("select libelle from typeProduits where id = "+idTypeProduitCourant+";");
    while(reqFindTypeProduits.next()){
        QString libelleTypeProduits = reqFindTypeProduits.value(0).toString();
        ui->comboBoxTypeProduits->setCurrentText(libelleTypeProduits);
    }
    //Dévérouiller les bouton suppr et modif

}

void MainWindow::on_pushButtonModifierProduits_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonModifierProduits_clicked()";
    //On récupère toutes les informations rentrées
    QString idTypeProduitUpdate = ui->comboBoxTypeProduits->currentData().toString();
    QString libelleProduitUpdate = ui->lineEditLibelleProduit->text();
    double poidsProduitValue = ui->doubleSpinBoxPoids->value();
    double prixProduitValue= ui->doubleSpinBoxPrix->value();
    QString poidsProduitUpdate = QString::number(poidsProduitValue, 'g', 6);
    QString prixProduitUpdate = QString::number(prixProduitValue, 'g', 6);
    qDebug()<<poidsProduitUpdate;
    QString dateDebutUpdate = ui->dateTimeEditDebut->dateTime().toString("yyyy-dd-mm hh:mm");
    QString dateFinUpdate = ui->dateTimeEditFin->dateTime().toString("yyyy-dd-mm hh:mm");
    qDebug()<<idTypeProduitUpdate;
    qDebug()<<dateDebutUpdate;
    qDebug()<<dateFinUpdate;
    qDebug()<<idProduitCourant;
    //On l'update dans la base de données
    QSqlQuery reqUpdateProduit ("update produits set libelle = '"+libelleProduitUpdate+"', poids = "+poidsProduitUpdate+", prix = "+prixProduitUpdate+", dateDebut = '"+dateDebutUpdate+"', dateFin = '"+dateFinUpdate+"', idTypeProduits = "+idTypeProduitUpdate+" where id = "+idProduitCourant+";");
    qDebug()<<"update produits set libelle = '"+libelleProduitUpdate+"', poids = "+poidsProduitUpdate+", prix = "+prixProduitUpdate+", dateDebut = '"+dateDebutUpdate+"', dateFin = '"+dateFinUpdate+"', idTypeProduits = "+idTypeProduitUpdate+" where id = "+idProduitCourant+";";
    reqUpdateProduit.exec();
    chargeLesRayonsCombo();
    chargeLesRayons();



}

void MainWindow::on_pushButtonSupprimerProduits_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSupprimerProduits_clicked()";
    //Récupération des informations du produits
    qDebug()<<idProduitCourant;
    QSqlQuery reqProduitVerif ("select libelle, prix, poids from produits where id = " +idProduitCourant+";");
    while(reqProduitVerif.next()){
        QString libelle = reqProduitVerif.value(0).toString();
        QString prix = reqProduitVerif.value(1).toString();
        QString poids = reqProduitVerif.value(2).toString();
        //demander confirmation de la suppresion du produit
        int rep = (QMessageBox::warning(this, tr("Gestion catalogue"),  "Voulez vous vraiment supprimer ce produit ? "+libelle+" "+prix+"€ "+poids+"kilos.", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes));

        //Si la réponse à la question est positive, sortir de l'application
        if (rep == QMessageBox::Yes)
        {
            QSqlQuery reqSupprimerProduit ("delete from produits where id = "+idProduitCourant+";");
            QSqlQuery reqSupprimerProduit2 ("delete from propose where producteurProduits = "+idProduitCourant+";");
            qDebug()<<"delete from propose where producteurProduits = "+idProduitCourant+";";
            reqSupprimerProduit2.exec();
            qDebug()<<"delete from produits where id = "+idProduitCourant+";";
            reqSupprimerProduit.exec();
            QMessageBox::critical(this, "Error", "Ce produit a bien été supprimé.");
            return;
            ui->tableWidgetProduits->setRowCount(0);
        }
      }


}

void MainWindow::on_tableWidgetProducteurs_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetProducteurs_cellClicked(int row, int column)";
    idProducteurSelectionner = ui->tableWidgetProducteurs->item(row,0)->data(32).toString();
    qDebug()<<idProducteurSelectionner;
    QSqlQuery reqProduitProposer ("SELECT  produits.libelle, produits.prix, produits.poids, rayons.libelle, typeProduits.libelle, produits.dateDebut, produits.dateFin, produits.id FROM rayons INNER JOIN typeProduits ON rayons.id = typeProduits.idRayons INNER JOIN produits ON typeProduits.id = produits.idTypeProduits INNER JOIN propose ON produits.id = propose.producteurProduits WHERE producteurUser like "+idProducteurSelectionner+" AND etat = 'ATT';");
    int nbLigne=0;
    while(reqProduitProposer.next()){
        nbLigne++;
        ui->tableWidgetProduitsAttente->setRowCount(nbLigne);
         //pour chaque champ à afficher
          for(int noCol=0;noCol<8;noCol++)
          {
                QString colonne = reqProduitProposer.value(noCol).toString();
                ui->tableWidgetProduitsAttente->setItem(nbLigne-1,noCol,new QTableWidgetItem(colonne));
          }
          //chargement de l'identifiant en data32 de la première colonne
          ui->tableWidgetProduitsAttente->item(nbLigne-1,0)->setData(32,reqProduitProposer.value("id").toInt());

    }//fin du pour chaque


}

void MainWindow::on_tableWidgetProduitsAttente_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetProduitsAttente_cellClicked(int row, int column)";
    idProduitSelectionner = ui->tableWidgetProduitsAttente->item(row,0)->data(32).toString();
    ui->libelleProduit->setEnabled(true);
    ui->prixProduit->setEnabled(true);
    ui->poidsProduit->setEnabled(true);
    ui->datedebutProduit->setEnabled(true);
    ui->datefinProduit->setEnabled(true);
    ui->rayonProduit->setEnabled(true);
    ui->categorieProduit->setEnabled(true);
    ui->imageProduit->setEnabled(true);
    ui->etatProduit->setEnabled(true);
    ui->pushButtonValiderProduit->setEnabled(true);
    qDebug()<<"Ici";

    QSqlQuery reqProduitEtat ("SELECT  produits.libelle, produits.prix, produits.poids, rayons.libelle, typeProduits.libelle, produits.dateDebut, produits.dateFin, produits.image FROM rayons INNER JOIN typeProduits ON rayons.id = typeProduits.idRayons INNER JOIN produits ON typeProduits.id = produits.idTypeProduits WHERE produits.id like "+idProduitSelectionner+";");
    while(reqProduitEtat.next()){
        qDebug()<<"ici2";
        ui->libelleProduit->setText(reqProduitEtat.value(0).toString());
        ui->prixProduit->setText(reqProduitEtat.value(1).toString());
        ui->poidsProduit->setText(reqProduitEtat.value(2).toString());
        ui->rayonProduit->setText(reqProduitEtat.value(3).toString());
        ui->categorieProduit->setText(reqProduitEtat.value(4).toString());
        ui->datedebutProduit->setText(reqProduitEtat.value(5).toString());
        ui->datefinProduit->setText(reqProduitEtat.value(6).toString());
        imageProduit = reqProduitEtat.value(7).toString();
    }
}

void MainWindow::on_imageProduit_clicked()
{
    qDebug()<<"void MainWindow::on_imageProduit_clicked()";
    DialogAfficheImageProduit diagAfficheProduit(imageProduit, this);
    //si le dialogue à été exécuter
    diagAfficheProduit.exec()==QDialog::Accepted;
}

void MainWindow::on_pushButtonValiderProduit_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonValiderProduit_clicked()";
    //On récupère toutes les informations rentrées
    QString etat = ui->etatProduit->currentText();
    //On l'update dans la base de données
    QSqlQuery reqUpdateProduitAttente ("update propose set etat = '"+etat+"' where producteurProduits = "+idProduitSelectionner+";");
    qDebug()<<"update propose set etat = '"+etat+"' where producteurProduits = "+idProduitSelectionner+";";
    reqUpdateProduitAttente.exec();
    chargeLesProducteursAccepter();
    chargeLesRayons();
    ui->tableWidgetProduitsAttente->setRowCount(0);
}

void MainWindow::on_tableWidgetProducteursTous_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetProducteursTous_cellClicked(int row, int column)";
    ui->pushButtonProposerVisite->setEnabled(true);
    ui->dateVisite->setEnabled(true);
    ui->typeVisite->setEnabled(true);
    ui->producteur->setEnabled(true);
    ui->controleur->setEnabled(true);
    ui->etatProducteur->setEnabled(true);
    idProducteurVisite = ui->tableWidgetProducteursTous->item(row,0)->data(32).toString();
    QString nom = ui->tableWidgetProducteursTous->item(row, 1)->text();
    QString etat = ui->tableWidgetProducteursTous->item(row, 3)->text();
    ui->producteur->setText(nom);
    ui->etatProducteur->setText(etat);
}

void MainWindow::on_tableWidgetControleurs_cellClicked(int row, int column)
{
    idControleurVisite = ui->tableWidgetControleurs->item(row,0)->data(32).toString();
    QString nom = ui->tableWidgetControleurs->item(row, 1)->text();
    ui->controleur->setText(nom);
}

void MainWindow::on_pushButtonProposerVisite_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonProposerVisite_clicked()";
    qDebug()<<idUserConnected;
    qDebug()<<idProducteurVisite;
    qDebug()<<idControleurVisite;
    QString date = ui->dateVisite->date().toString("yyyy-MM-dd");
    QString typeVisite = ui->typeVisite->currentText();
    qDebug()<<date;
    qDebug()<<typeVisite;
    QSqlQuery reqProposerVisite ("INSERT INTO visitePrevue (dateVisite, etat, idGestionnaire, idControleur, idProducteur, typeVisite) values ('"+date+"', 'ATT', "+idUserConnected+", "+idControleurVisite+", "+idProducteurVisite+", '"+typeVisite+"');");
    qDebug()<<"INSERT INTO visitePrevue (dateVisite, etat, idGestionnaire, idControleur, idProducteur, typeVisite) values ('"+date+"', 'ATT', "+idUserConnected+", "+idControleurVisite+", "+idProducteurVisite+", '"+typeVisite+"');";
    //reqProposerVisite.exec();
    chargeLesVisites();
}
