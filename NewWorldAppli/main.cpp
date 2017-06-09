#include "mainwindow.h"
#include "mainwindow2.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include "dialogConnexion.h"
#include <QTranslator>
#include <QLibraryInfo>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTranslator qtTranslator;
    qtTranslator.load("qt_" + QLocale::system().name(),
            QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    a.installTranslator(&qtTranslator);
    QTranslator myappTranslator;
    QString nomFichier="newWorld_" + QLocale::system().name()+".qm";
    QString baseName;
    #ifdef Q_OS_LINUX
            baseName="/usr/share/applications/newWorld/translations/";
    #endif
    #ifdef Q_OS_DARWIN
            baseName=QApplication::applicationDirPath()+QLatin1String("/translations/"); // path defaults to app dir.
    #endif
    #ifdef Q_OS_WIN
            baseName=QApplication::applicationDirPath();
    #endif
    //myappTranslator.load(baseName+nomFichier);
    //myappTranslator.load("/usr/share/applications/gapmea/translations/gapMea_" + QLocale::system().name()+".qm");
    //a.installTranslator(&myappTranslator);

    DialogConnexion dialogConnexion;

    while(dialogConnexion.exec()== QDialog::Accepted )
    {
        QSqlDatabase maBase=QSqlDatabase::addDatabase("QMYSQL");
        QString user = dialogConnexion.getLogin();
        QString mdp = dialogConnexion.getMdp();
        QString ip = dialogConnexion.getIp();
        maBase.setHostName(ip);//a changer

          maBase.setUserName("clapprand");
        maBase.setPassword("lsoSzKpLierMyuRyz");
        maBase.setDatabaseName("clapprand_NW");
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
                MainWindow2 w2(idUser);
                w2.show();
                return a.exec();

           }
}
}
}
