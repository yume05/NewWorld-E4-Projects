#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

MainWindow2::MainWindow2(QString leUser, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    idUserConnected = leUser;
    chargerVisitesToutes();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::chargerVisitesToutes()
{
    qDebug()<<"void MainWindow2::chargerVisitesToutes()";
    ui->tableWidgetVisites->setRowCount(0);
    //je créée ma requete qui chargera les visites à l'ouverture de l'application
    QSqlQuery reqChargeVisites;
    QString textreq = "SELECT visitePrevue.dateVisite, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.motifRefus, visitePrevue.choixFinal, personnel.pers_nom, personnel.pers_prenom, user.user_nom, user.user_prenom, visitePrevue.id, user.user_id FROM visitePrevue INNER JOIN personnel ON personnel.pers_id = visitePrevue.idGestionnaire INNER JOIN user ON user.user_id = visitePrevue.idProducteur WHERE visitePrevue.idControleur = "+idUserConnected+";";
    //je fais une boucle 0, n
    qDebug()<<textreq;
    reqChargeVisites.exec(textreq);
    //le next agit en curseur, et va a la ligne suivante jusqu'a qu'ils n'en existent plus
    int nbLigne = ui->tableWidgetVisites->rowCount();

        while(reqChargeVisites.next())//pour chaque
        {
            nbLigne++;
            ui->tableWidgetVisites->setRowCount(nbLigne);
            //nbLigne recoit +1 pour initialiser la ligne qui sera ajouter
            //ajout d'une ligne en plus des lignes déjà présentes

            ui->tableWidgetVisites->setColumnCount(7);
            QString gestionnaire = reqChargeVisites.value("pers_nom").toString();
            gestionnaire += " "+reqChargeVisites.value("pers_prenom").toString();
            QString producteur = reqChargeVisites.value("user_nom").toString();
            producteur += " "+reqChargeVisites.value("user_prenom").toString();
            QString datePrevue = reqChargeVisites.value("dateVisite").toString();
            QString etat  = reqChargeVisites.value("etat").toString();
            QString typeVisite = reqChargeVisites.value("typeVisite").toString();
            QString motifRefus = reqChargeVisites.value("motifRefus").toString();
            QString choixFinal = reqChargeVisites.value("choixFinal").toString();
            ui->tableWidgetVisites->setItem(nbLigne-1,0, new QTableWidgetItem(datePrevue));
            ui->tableWidgetVisites->setItem(nbLigne-1,1, new QTableWidgetItem(producteur));
            ui->tableWidgetVisites->setItem(nbLigne-1,2, new QTableWidgetItem(gestionnaire));
            ui->tableWidgetVisites->setItem(nbLigne-1,3, new QTableWidgetItem(typeVisite));
            ui->tableWidgetVisites->setItem(nbLigne-1,4, new QTableWidgetItem(etat));
            ui->tableWidgetVisites->setItem(nbLigne-1,5, new QTableWidgetItem(motifRefus));
            ui->tableWidgetVisites->setItem(nbLigne-1,6, new QTableWidgetItem(choixFinal));
            ui->tableWidgetVisites->item(nbLigne-1,0)->setData(32,reqChargeVisites.value("id").toInt());
            //chargement de l'identifiant du client en data32 de la première colonne

        }//fin du pour chaque
}

void MainWindow2::on_tableWidgetVisites_cellClicked(int row, int column)
{
    qDebug()<<"void MainWindow2::on_tableWidgetVisites_cellClicked(int row, int column)";
    idVisiteCourante = ui->tableWidgetVisites->item(row,0)->data(32).toString();
    //On récupère les informations de la ligne selectionner
    QSqlQuery reqProdEtat ("SELECT user.etat, visitePrevue.dateVisite, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.motifRefus, visitePrevue.choixFinal, personnel.pers_nom, personnel.pers_prenom, user.user_nom, user.user_prenom, user.user_id FROM visitePrevue INNER JOIN personnel ON personnel.pers_id = visitePrevue.idGestionnaire INNER JOIN user ON user.user_id = visitePrevue.idProducteur WHERE visitePrevue.id = "+idVisiteCourante+" AND visitePrevue.idControleur = "+idUserConnected+";");
    reqProdEtat.exec();
    qDebug()<<"SELECT user.etat, visitePrevue.dateVisite, visitePrevue.etat, visitePrevue.typeVisite, visitePrevue.motifRefus, visitePrevue.choixFinal, personnel.pers_nom, personnel.pers_prenom, user.user_nom, user.user_prenom, user.user_id FROM visitePrevue INNER JOIN personnel ON personnel.pers_id = visitePrevue.idGestionnaire INNER JOIN user ON user.user_id = visitePrevue.idProducteur WHERE visitePrevue.id = "+idVisiteCourante+" AND visitePrevue.idControleur = "+idUserConnected+";";
    reqProdEtat.next();
    gestionnaire = reqProdEtat.value(6).toString();
    gestionnaire += " "+reqProdEtat.value(7).toString();
    producteur = reqProdEtat.value(8).toString();
    producteur += " "+reqProdEtat.value(9).toString();
    datePrevue = reqProdEtat.value(1).toString();
    etat  = reqProdEtat.value(2).toString();
    typeVisite = reqProdEtat.value(3).toString();
    motifRefus = reqProdEtat.value(4).toString();
    choixFinal = reqProdEtat.value(5).toString();
    idProducteurVisite = reqProdEtat.value(10).toString();
    prodEtat = reqProdEtat.value(0).toString();

    //A chaque fois que l'on change de ligne je remet tous à zero et vérrouille tout
    ui->labelGestionnaireAtt->clear();
    ui->labelProducteurAtt->clear();
    ui->labelDatePrevueAtt->clear();
    ui->labelTypeVisiteAtt->clear();
    ui->textEditMotifRefus->clear();
    ui->comboBoxEtatVisite->setCurrentText("ATT");

    ui->comboBoxEtatProducteur->setCurrentText("ATT");
    ui->labelGestionnaireAcc->clear();
    ui->labelProducteurAcc->clear();
    ui->labelDatePrevueAcc->clear();
    ui->labelTypeVisiteAcc->clear();
    ui->textEditChoixFinal->clear();

    ui->label_13->setEnabled(false);
    ui->label_14->setEnabled(false);
    ui->label_12->setEnabled(false);
    ui->comboBoxEtatVisite->setEnabled(false);
    ui->textEditChoixFinal->setEnabled(false);
    ui->textEditMotifRefus->setEnabled(false);
    ui->comboBoxEtatProducteur->setEnabled(false);

    //Si l'état de la visite est en attente donc rien à été valider on affiche les informations dans la tab 2
    if(etat == "ATT"){
        ui->labelGestionnaireAtt->setText(gestionnaire);
        ui->labelProducteurAtt->setText(producteur);
        ui->labelDatePrevueAtt->setText(datePrevue);
        ui->labelTypeVisiteAtt->setText(typeVisite);
        ui->comboBoxEtatVisite->setEnabled(true);
    }
    //Si l'état de la visite est accepter et que le choix finale à été envoyer on affiche juste les informations entrées dans le tab 3
    if(etat == "ACC"  &&  choixFinal != NULL && prodEtat != "ATT"){
        ui->textEditChoixFinal->setText(choixFinal);
        ui->comboBoxEtatProducteur->setCurrentText(prodEtat);
        ui->labelDatePrevueAcc->setText(datePrevue);
        ui->labelGestionnaireAcc->setText(gestionnaire);
        ui->labelProducteurAcc->setText(producteur);
        ui->labelTypeVisiteAcc->setText(typeVisite);
    }
    //Si l'état de la visite sélectionner est Accepter, mais que rien n'a été remplis
    if(etat == "ACC"  &&  choixFinal == NULL || prodEtat == "ATT"){
        ui->labelDatePrevueAcc->setText(datePrevue);
        ui->labelGestionnaireAcc->setText(gestionnaire);
        ui->labelProducteurAcc->setText(producteur);
        ui->labelTypeVisiteAcc->setText(typeVisite);
        ui->textEditChoixFinal->setEnabled(true);
        ui->comboBoxEtatProducteur->setEnabled(true);
        ui->label_13->setEnabled(true);
        ui->label_14->setEnabled(true);
    }
    //Si l'état de la visite est refusé et que le motif de refus à été renvoyé on affiche rien
    if(etat == "REF" && motifRefus != ""){
        ui->labelDatePrevueAtt->setText(datePrevue);
        ui->labelGestionnaireAtt->setText(gestionnaire);
        ui->labelProducteurAtt->setText(producteur);
        ui->labelTypeVisiteAtt->setText(typeVisite);
        ui->textEditMotifRefus->setText(motifRefus);
        ui->comboBoxEtatProducteur->setCurrentText("ATT");
        ui->labelGestionnaireAcc->clear();
        ui->labelProducteurAcc->clear();
        ui->labelDatePrevueAcc->clear();
        ui->labelTypeVisiteAcc->clear();
        ui->textEditChoixFinal->clear();
        ui->label_13->setEnabled(false);
        ui->label_14->setEnabled(false);
        ui->textEditChoixFinal->setEnabled(false);
        ui->comboBoxEtatProducteur->setEnabled(false);

    }

}

void MainWindow2::on_comboBoxEtatVisite_currentTextChanged(const QString &arg1)
{
    qDebug()<<"void MainWindow2::on_comboBoxEtatVisite_currentTextChanged(const QString &arg1)";
    etatVisiteCombo = ui->comboBoxEtatVisite->currentText();
    //Si le controleur veut refuser la visite, envoyer le motif du refus
    if(etatVisiteCombo == "REF"){
        ui->label_12->setEnabled(true);
        ui->textEditMotifRefus->setEnabled(true);
    }
    if(etatVisiteCombo == "ACC"){
        ui->label_12->setEnabled(false);
        ui->textEditMotifRefus->setEnabled(false);
    }
    if(etatVisiteCombo == "ATT"){
        ui->label_12->setEnabled(false);
        ui->textEditMotifRefus->setEnabled(false);
    }
}

void MainWindow2::clearVisite()
{

    ui->comboBoxEtatVisite->setCurrentText("ATT");
    ui->comboBoxEtatProducteur->setCurrentText("ATT");
    ui->textEditChoixFinal->clear();
    ui->textEditMotifRefus->clear();

    ui->label_13->setEnabled(false);
    ui->textEditChoixFinal->setEnabled(false);
    ui->label_14->setEnabled(false);
    ui->comboBoxEtatProducteur->setEnabled(false);
    ui->label_12->setEnabled(false);
    ui->textEditMotifRefus->setEnabled(false);
}

void MainWindow2::on_pushButtonValiderAcc_clicked()
{
    qDebug()<<"void MainWindow2::on_pushButtonValiderAcc_clicked()";
    //On récupère les informations
    QString choixFinalInsert = ui->textEditChoixFinal->toPlainText();
    QString etatProdInsert = ui->comboBoxEtatProducteur->currentText();
    //si le choix finale et l'état du producteur n'a pas changer afficher erreur
    if(etat == "ACC"){
        if(choixFinalInsert == "" || etatProdInsert == "ATT"){
             QMessageBox::critical(this, "Error", "Veuillez remplir le choix final et choisir un état pour le producteur");
        }
        //si le choix finale et l'état du producteur a bien été changer
        if(choixFinalInsert != "" && etatProdInsert != "ATT"){
            int rep = (QMessageBox::question(this, tr("Controleur"),  "Voulez vous vraiment valider ces informations ? ", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes));

            //Si la réponse à la question est positive, sortir de l'application
            if (rep == QMessageBox::Yes)
            {
                //update
                qDebug()<<"Accepter modif OK";
                QSqlQuery reqEtatAccModif ('UPDATE visitePrevue SET choixFinal = "'+choixFinalInsert+'" WHERE id = '+idVisiteCourante+';');
                QSqlQuery reqEtatAccModif2 ("UPDATE user SET etat = '"+etatProdInsert+"' WHERE user_id = "+idProducteurVisite+";");
                qDebug()<<"UPDATE visitePrevue SET choixFinal = '"+choixFinalInsert+"' WHERE id = "+idVisiteCourante+";";
                qDebug()<<"UPDATE user SET etat = '"+etatProdInsert+"' WHERE user_id = "+idProducteurVisite+";";
                reqEtatAccModif.exec();
                reqEtatAccModif2.exec();
                chargerVisitesToutes();
                QMessageBox::information(this, "Information", "Informations enregistrés avec succés");
            }
        }
    }else{
        QMessageBox::information(this, "Information", "Aucune visite 'Accepter'' séléctionnée !");
    }

}

void MainWindow2::on_pushButtonValiderAtt_clicked()
{
    qDebug()<<"void MainWindow2::on_pushButtonValider_clicked()";
    //Si l'état est toujours en ATT ne rien faire
    QString motifRefusInsert = ui->textEditMotifRefus->toPlainText();
    if(etatVisiteCombo == "ATT"){
        QMessageBox::critical(this, "Error", "Veuillez d'abord sélectionner un état pour la visite autre que en Attente");
    }
    //Si l'état est en Accepter, update la visite
    if(etatVisiteCombo == "ACC"){
        //Update visite en ACC
        QSqlQuery reqEtatACC ('UPDATE visitePrevue SET etat = "'+etatVisiteCombo+'" WHERE id = '+idVisiteCourante+';');
        reqEtatACC.exec();
        qDebug()<<"UPDATE visitePrevue SET etat = '"+etatVisiteCombo+"' WHERE id = "+idVisiteCourante+";";
        ui->statusbar->showMessage("Visite Accepter");
        chargerVisitesToutes();
    }

    //Si l'état à été refuser mais que le motif n'a pas été remplis afficher erreur
    if(etatVisiteCombo == "REF" && motifRefusInsert == ""){
       QMessageBox::critical(this, "Error", "Veuillez remplir le motif de votre refus");
    }

    //Si l'état à été refuser et que motif a bien été remplis
    if(etatVisiteCombo == "REF" && motifRefusInsert != ""){
        int rep = (QMessageBox::question(this, tr("Controleur"),  "Voulez vous vraiment refuser cette visite et valider ce motif ? ", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes));

        //Si la réponse à la question est positive, sortir de l'application
        if (rep == QMessageBox::Yes)
        {
            //update
            qDebug()<<"Refuser OK";
            QSqlQuery reqEtatRef('UPDATE visitePrevue SET etat = "REF", motifRefus = "'+motifRefusInsert+'" WHERE id = '+idVisiteCourante+';');
            qDebug()<<"UPDATE visitePrevue SET etat = '"+etatVisiteCombo+"', motifRefus = '"+motifRefusInsert+"' WHERE id = "+idVisiteCourante+";";
            reqEtatRef.exec();
            chargerVisitesToutes();
        }
    }

}
