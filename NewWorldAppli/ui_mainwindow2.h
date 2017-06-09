/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabListeVisite;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *tableWidgetVisites;
    QWidget *tabGestionVisite;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *labelProducteurAtt;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *labelGestionnaireAtt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *labelDatePrevueAtt;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *labelTypeVisiteAtt;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *comboBoxEtatVisite;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QTextEdit *textEditMotifRefus;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonValiderAtt;
    QWidget *tabGestionVisiteAccepter;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QLabel *labelDatePrevueAcc;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLabel *labelTypeVisiteAcc;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_9;
    QLabel *labelProducteurAcc;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_8;
    QLabel *labelGestionnaireAcc;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_13;
    QTextEdit *textEditChoixFinal;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QComboBox *comboBoxEtatProducteur;
    QHBoxLayout *horizontalLayout_18;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonValiderAcc;
    QMenuBar *menubar;
    QMenu *menuControleur;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(741, 463);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow2->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabListeVisite = new QWidget();
        tabListeVisite->setObjectName(QStringLiteral("tabListeVisite"));
        gridLayout = new QGridLayout(tabListeVisite);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tabListeVisite);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableWidgetVisites = new QTableWidget(tabListeVisite);
        if (tableWidgetVisites->columnCount() < 7)
            tableWidgetVisites->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetVisites->setObjectName(QStringLiteral("tableWidgetVisites"));
        tableWidgetVisites->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetVisites->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetVisites->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        verticalLayout_2->addWidget(tableWidgetVisites);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tabListeVisite, QString());
        tabGestionVisite = new QWidget();
        tabGestionVisite->setObjectName(QStringLiteral("tabGestionVisite"));
        verticalLayout_7 = new QVBoxLayout(tabGestionVisite);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(tabGestionVisite);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(tabGestionVisite);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        labelProducteurAtt = new QLabel(tabGestionVisite);
        labelProducteurAtt->setObjectName(QStringLiteral("labelProducteurAtt"));

        horizontalLayout_4->addWidget(labelProducteurAtt);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(tabGestionVisite);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        labelGestionnaireAtt = new QLabel(tabGestionVisite);
        labelGestionnaireAtt->setObjectName(QStringLiteral("labelGestionnaireAtt"));

        horizontalLayout_5->addWidget(labelGestionnaireAtt);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(tabGestionVisite);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        labelDatePrevueAtt = new QLabel(tabGestionVisite);
        labelDatePrevueAtt->setObjectName(QStringLiteral("labelDatePrevueAtt"));

        horizontalLayout_6->addWidget(labelDatePrevueAtt);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(tabGestionVisite);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        labelTypeVisiteAtt = new QLabel(tabGestionVisite);
        labelTypeVisiteAtt->setObjectName(QStringLiteral("labelTypeVisiteAtt"));

        horizontalLayout_7->addWidget(labelTypeVisiteAtt);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_7 = new QLabel(tabGestionVisite);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        comboBoxEtatVisite = new QComboBox(tabGestionVisite);
        comboBoxEtatVisite->setObjectName(QStringLiteral("comboBoxEtatVisite"));
        comboBoxEtatVisite->setEnabled(false);

        horizontalLayout_8->addWidget(comboBoxEtatVisite);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_10->addLayout(verticalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        line = new QFrame(tabGestionVisite);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_12 = new QLabel(tabGestionVisite);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(false);

        verticalLayout_3->addWidget(label_12);

        textEditMotifRefus = new QTextEdit(tabGestionVisite);
        textEditMotifRefus->setObjectName(QStringLiteral("textEditMotifRefus"));
        textEditMotifRefus->setEnabled(false);

        verticalLayout_3->addWidget(textEditMotifRefus);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_10->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonValiderAtt = new QPushButton(tabGestionVisite);
        pushButtonValiderAtt->setObjectName(QStringLiteral("pushButtonValiderAtt"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/docs/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonValiderAtt->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButtonValiderAtt);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidget->addTab(tabGestionVisite, QString());
        tabGestionVisiteAccepter = new QWidget();
        tabGestionVisiteAccepter->setObjectName(QStringLiteral("tabGestionVisiteAccepter"));
        verticalLayout_13 = new QVBoxLayout(tabGestionVisiteAccepter);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_11 = new QLabel(tabGestionVisiteAccepter);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_16->addWidget(label_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);


        verticalLayout_11->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_16 = new QLabel(tabGestionVisiteAccepter);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_12->addWidget(label_16);

        labelDatePrevueAcc = new QLabel(tabGestionVisiteAccepter);
        labelDatePrevueAcc->setObjectName(QStringLiteral("labelDatePrevueAcc"));

        horizontalLayout_12->addWidget(labelDatePrevueAcc);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_15 = new QLabel(tabGestionVisiteAccepter);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_13->addWidget(label_15);

        labelTypeVisiteAcc = new QLabel(tabGestionVisiteAccepter);
        labelTypeVisiteAcc->setObjectName(QStringLiteral("labelTypeVisiteAcc"));

        horizontalLayout_13->addWidget(labelTypeVisiteAcc);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_9 = new QLabel(tabGestionVisiteAccepter);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_14->addWidget(label_9);

        labelProducteurAcc = new QLabel(tabGestionVisiteAccepter);
        labelProducteurAcc->setObjectName(QStringLiteral("labelProducteurAcc"));

        horizontalLayout_14->addWidget(labelProducteurAcc);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_8 = new QLabel(tabGestionVisiteAccepter);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_15->addWidget(label_8);

        labelGestionnaireAcc = new QLabel(tabGestionVisiteAccepter);
        labelGestionnaireAcc->setObjectName(QStringLiteral("labelGestionnaireAcc"));

        horizontalLayout_15->addWidget(labelGestionnaireAcc);


        verticalLayout_10->addLayout(horizontalLayout_15);


        horizontalLayout_17->addLayout(verticalLayout_10);

        line_2 = new QFrame(tabGestionVisiteAccepter);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_17->addWidget(line_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_13 = new QLabel(tabGestionVisiteAccepter);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);

        verticalLayout_8->addWidget(label_13);

        textEditChoixFinal = new QTextEdit(tabGestionVisiteAccepter);
        textEditChoixFinal->setObjectName(QStringLiteral("textEditChoixFinal"));
        textEditChoixFinal->setEnabled(false);

        verticalLayout_8->addWidget(textEditChoixFinal);


        verticalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_14 = new QLabel(tabGestionVisiteAccepter);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(false);

        horizontalLayout_11->addWidget(label_14);

        comboBoxEtatProducteur = new QComboBox(tabGestionVisiteAccepter);
        comboBoxEtatProducteur->setObjectName(QStringLiteral("comboBoxEtatProducteur"));
        comboBoxEtatProducteur->setEnabled(false);

        horizontalLayout_11->addWidget(comboBoxEtatProducteur);


        verticalLayout_9->addLayout(horizontalLayout_11);


        horizontalLayout_17->addLayout(verticalLayout_9);


        verticalLayout_11->addLayout(horizontalLayout_17);


        verticalLayout_12->addLayout(verticalLayout_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_4);

        pushButtonValiderAcc = new QPushButton(tabGestionVisiteAccepter);
        pushButtonValiderAcc->setObjectName(QStringLiteral("pushButtonValiderAcc"));
        pushButtonValiderAcc->setIcon(icon1);

        horizontalLayout_18->addWidget(pushButtonValiderAcc);


        verticalLayout_12->addLayout(horizontalLayout_18);


        verticalLayout_13->addLayout(verticalLayout_12);

        tabWidget->addTab(tabGestionVisiteAccepter, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 741, 27));
        menuControleur = new QMenu(menubar);
        menuControleur->setObjectName(QStringLiteral("menuControleur"));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        menubar->addAction(menuControleur->menuAction());

        retranslateUi(MainWindow2);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "Controller", 0));
        label->setText(QApplication::translate("MainWindow2", "<html><head/><body><p><span style=\" font-weight:600;\">All visits :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetVisites->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow2", "predicted date", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetVisites->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow2", "producer", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetVisites->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow2", "administrator", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetVisites->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow2", "type visit", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetVisites->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow2", "condition", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetVisites->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow2", "Ground refusal", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetVisites->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow2", "Final choice", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabListeVisite), QApplication::translate("MainWindow2", "All visits", 0));
        label_2->setText(QApplication::translate("MainWindow2", "<html><head/><body><p><span style=\" font-weight:600;\">Visit management :</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow2", "Producer :", 0));
        labelProducteurAtt->setText(QApplication::translate("MainWindow2", "...", 0));
        label_4->setText(QApplication::translate("MainWindow2", "Administrator :", 0));
        labelGestionnaireAtt->setText(QApplication::translate("MainWindow2", "...", 0));
        label_6->setText(QApplication::translate("MainWindow2", "predicted date :", 0));
        labelDatePrevueAtt->setText(QApplication::translate("MainWindow2", "...", 0));
        label_5->setText(QApplication::translate("MainWindow2", "Type visit :", 0));
        labelTypeVisiteAtt->setText(QApplication::translate("MainWindow2", "...", 0));
        label_7->setText(QApplication::translate("MainWindow2", "Condition :", 0));
        comboBoxEtatVisite->clear();
        comboBoxEtatVisite->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "ATT", 0)
         << QApplication::translate("MainWindow2", "ACC", 0)
         << QApplication::translate("MainWindow2", "REF", 0)
        );
        label_12->setText(QApplication::translate("MainWindow2", "Reason for refusal sent to manager :", 0));
        pushButtonValiderAtt->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabGestionVisite), QApplication::translate("MainWindow2", "Visit management", 0));
        label_11->setText(QApplication::translate("MainWindow2", "<html><head/><body><p><span style=\" font-weight:600;\">Management visit :</span></p></body></html>", 0));
        label_16->setText(QApplication::translate("MainWindow2", "Predicted date :", 0));
        labelDatePrevueAcc->setText(QApplication::translate("MainWindow2", "...", 0));
        label_15->setText(QApplication::translate("MainWindow2", "Type visit :", 0));
        labelTypeVisiteAcc->setText(QApplication::translate("MainWindow2", "...", 0));
        label_9->setText(QApplication::translate("MainWindow2", "Producer :", 0));
        labelProducteurAcc->setText(QApplication::translate("MainWindow2", "...", 0));
        label_8->setText(QApplication::translate("MainWindow2", "Administrator :", 0));
        labelGestionnaireAcc->setText(QApplication::translate("MainWindow2", "...", 0));
        label_13->setText(QApplication::translate("MainWindow2", "Final choice :", 0));
        label_14->setText(QApplication::translate("MainWindow2", "Condition of producer :", 0));
        comboBoxEtatProducteur->clear();
        comboBoxEtatProducteur->insertItems(0, QStringList()
         << QApplication::translate("MainWindow2", "ACC", 0)
         << QApplication::translate("MainWindow2", "REF", 0)
        );
        pushButtonValiderAcc->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabGestionVisiteAccepter), QApplication::translate("MainWindow2", "Management visits accept", 0));
        menuControleur->setTitle(QApplication::translate("MainWindow2", "Controller", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
