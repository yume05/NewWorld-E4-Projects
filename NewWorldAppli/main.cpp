#include "mainwindow.h"
#include "mainwindow2.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include "dialogConnexion.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    DialogConnexion dialogConnexion;

    while(dialogConnexion.exec()== QDialog::Accepted )
    {
        QSqlDatabase maBase=QSqlDatabase::addDatabase("QMYSQL");
        QString user = dialogConnexion.getLogin();
        QString mdp = dialogConnexion.getMdp();
        QString ip = dialogConnexion.getIp();
        maBase.setHostName(ip);//a changer

          maBase.setUserName("");
        maBase.setPassword("");
        maBase.setDatabaseName("");
        if(maBase.open())
        {
            QSqlQuery maReq;
            QString textReq = "select personnel.pers_id, type.type_libelle from personnel inner join type on personnel.pers_type = type.type_id where pers_login='"+user+"' and pers_mdp='"+mdp+"';";
            maReq.exec(textReq);
            maReq.next();
            QString idUser = maReq.value(0).toString();
            QString type = maReq.value(1).toString();
            qDebug()<<textReq;
            qDebug()<<type;
            if(type=="Gestionnaire")
            //Gestionnaire
            {
                MainWindow w(idUser);
                w.show();
                return a.exec();

            }
            if(type=="Controleur")
            //Controleur
            {
                MainWindow2 w2;
                w2.show();
                return a.exec();

           }
}
}
}
