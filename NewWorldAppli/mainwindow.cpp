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

MainWindow::MainWindow(QString leUserConnected, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    idUserConnected = leUserConnected;
    ui->setupUi(this);
    chargeLePersonnel();
    chargeLesRayons();
    chargeLesRayonsCombo();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::chargeLePersonnel()
{
    qDebug()<<"void MainWindow::chargeLePersonnel()";

    ui->tableWidgetPersonnel->clear();
    ui->tableWidgetPersonnel->setRowCount(0);
    ui->tableWidgetPersonnel->setColumnCount(0);
    //je créée ma requete qui chargera les evaluations à l'ouverture de l'application
    QSqlQuery reqChargePersonnel;
    QString textreq = "SELECT pers_nom, pers_prenom, pers_mail, pers_tel, pers_cp, pers_rue, pers_ville, type_libelle, pers_id FROM personnel INNER JOIN type ON personnel.pers_type = type.type_id;";
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

            ui->tableWidgetPersonnel->setColumnCount(8);
             //pour chaque champ à afficher
              for(int noCol=0;noCol<7;noCol++)
              {
                    QString colomn = reqChargePersonnel.value(noCol).toString();
                    ui->tableWidgetPersonnel->setItem(nbLigne-1,noCol,new QTableWidgetItem(colomn));
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
                            QString colomn = reqRayons.value(noCol).toString();
                            ui->tableWidgetRayons->setItem(nbLigne-1,noCol,new QTableWidgetItem(colomn));
                      }
                      //chargement de l'identifiant du client en data32 de la première colonne
                      ui->tableWidgetRayons->item(nbLigne-1,0)->setData(32,reqRayons.value("id").toInt());

                }//fin du pour chaque

}

void MainWindow::on_tableWidgetRayons_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow::on_tableWidgetRayons_clicked(const QModelIndex &index)";
        //ui->tableWidgetTypeProduits->setRowCount(0);
        //Récupère le numéro de la ligne sélectionner
        QString idRayons=ui->tableWidgetRayons->item(row,0)->data(32).toString();
        qDebug()<<idRayons;
        QSqlQuery reqTypeProduits ("select typeProduits.libelle, typeProduits.id from typeProduits inner join rayons on typeProduits.idRayons = rayons.id where idRayons = "+idRayons+";");
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
        //Récupère le numéro de la ligne sélectionner
        QString idTypeProduits=ui->tableWidgetTypeProduits->item(row,0)->data(32).toString();
        qDebug()<<idTypeProduits;
        QSqlQuery reqProduits ("select produits.libelle, produits.prix, produits.poids, produits.dateDebut, produits.dateFin, produits.id from produits inner join typeProduits on produits.idTypeProduits = typeProduits.id where idTypeProduits = "+idTypeProduits+";");
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
        QString nom = diagAjoutPersonnel.getNom();
        QString prenom = diagAjoutPersonnel.getPrenom();
        QString mail = diagAjoutPersonnel.getMail();
        QString portable = diagAjoutPersonnel.getTel();
        QString cp = diagAjoutPersonnel.getCp();
        QString ville = diagAjoutPersonnel.getVille();
        QString rue = diagAjoutPersonnel.getRue();
        //si champs vides
        if(prenom.isEmpty() || nom.isEmpty() || mail.isEmpty() || portable.isEmpty() || cp.isEmpty() || ville.isEmpty() || rue.isEmpty()){
            //Message d'erreur
            QMessageBox::critical(this, "Error", "You have to complete all fields !!");
             return;
        }else{
            //nbLigne recoit le nombre de ligne du tableWidgetStudent
            int nbLigne = ui->tableWidgetPersonnel->rowCount();
            //nbLigne recoit +1 pour initialiser la ligne qui sera AjoutPersonneler
            nbLigne++;
            //AjoutPersonnel d'une ligne en plus des lignes déjà présentes
            ui->tableWidgetPersonnel->setRowCount(nbLigne);
            //remplissage de la ligne AjoutPersonneler, avec les données correspondantes
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 0, new QTableWidgetItem(nom));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 1, new QTableWidgetItem(prenom));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 2, new QTableWidgetItem(mail));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 3, new QTableWidgetItem(portable));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 4, new QTableWidgetItem(cp));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 5, new QTableWidgetItem(rue));
            ui->tableWidgetPersonnel->setItem(nbLigne-1, 6, new QTableWidgetItem(ville));



            //Création d'une requete qui inserera les données saisies dans la table Personnel
            QSqlQuery reqPersonnel;
            QString texteRequete = "insert into personnel (pers_nom, pers_prenom, pers_mail, pers_tel, pers_ville, pers_rue, pers_cp) values ('";
            texteRequete += nom;
            texteRequete +="','";
            texteRequete +=prenom;
            texteRequete +="','";
            texteRequete +=mail;
            texteRequete +="','";
            texteRequete +=portable;
            texteRequete +="','";
            texteRequete +=ville;
            texteRequete +="','";
            texteRequete +=rue;
            texteRequete +="','";
            texteRequete+=cp;
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
                    QSqlQuery reqAjoutPasRanges ("insert into typeProduits (libelle, idRayons) values ('Pas rangés', "+idNouveauRayon+");");
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
    }else{
        //On récupère l'id du rayon "pas rangés"
        QSqlQuery reqRayonPasRanges ("select distinct rayons.id from rayons where libelle = 'Pas rangés';");
        while(reqRayonPasRanges.next()){
            QString idRayonPasRanges = reqRayonPasRanges.value(0).toString();
            qDebug()<<idRayonPasRanges;
            QSqlQuery reqUpdateRayon("update typeProduits set idRayons = "+idRayonPasRanges+" where idRayons = "+idRayons+";");
            reqUpdateRayon.exec();
        }

        //Si un type de rayons existe, on déplace les types de rayons vers le rayon "Pas rangés"
        QSqlQuery reqDeleteRayon ("delete from rayons where id = "+idRayons+";");
        qDebug()<<"delete from rayons where id = "+idRayons+";";
        reqDeleteRayon.exec();
        chargeLesRayonsCombo();
    }
}
