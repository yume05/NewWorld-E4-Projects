/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *tableWidgetPersonnel;
    QGridLayout *gridLayout;
    QPushButton *pushButtonGestionPersonnelAjouter;
    QPushButton *pushButtonGestionPersonnelModifier;
    QPushButton *pushButtonGestionPersonnelSupprimer;
    QWidget *tab_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidgetRayons;
    QTableWidget *tableWidgetTypeProduits;
    QTableWidget *tableWidgetProduits;
    QFrame *line;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QComboBox *comboBoxRayons;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonAjoutRayons;
    QPushButton *pushButtonSupprimerRayons;
    QLabel *label_8;
    QComboBox *comboBoxTypeProduits;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAjoutTypeProduits;
    QPushButton *pushButtonSupprimerTypeProduits;
    QPushButton *pushButtonModifierTypeProduits;
    QLabel *label_9;
    QLineEdit *lineEditLibelleProduit;
    QLabel *label_10;
    QLineEdit *lineEditPrix;
    QLabel *label_11;
    QLineEdit *lineEditPoids;
    QLabel *label_12;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_13;
    QDateTimeEdit *dateTimeEdit_2;
    QPushButton *pushButtonGestionPersonnelAjouter_2;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QTableWidget *tableWidgetProducteurs;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QTableWidget *tableWidgetPointDeVentes;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelNom;
    QLabel *labelEtat;
    QLabel *labelAdresse;
    QPushButton *pushButton_3;
    QWidget *tab_2;
    QWidget *tab_4;
    QWidget *tab_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(903, 510);
        MainWindow->setMinimumSize(QSize(903, 510));
        MainWindow->setMaximumSize(QSize(903, 510));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        tableWidgetPersonnel = new QTableWidget(tab);
        tableWidgetPersonnel->setObjectName(QStringLiteral("tableWidgetPersonnel"));
        tableWidgetPersonnel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetPersonnel->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetPersonnel->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_2->addWidget(tableWidgetPersonnel);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonGestionPersonnelAjouter = new QPushButton(tab);
        pushButtonGestionPersonnelAjouter->setObjectName(QStringLiteral("pushButtonGestionPersonnelAjouter"));
        pushButtonGestionPersonnelAjouter->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelAjouter->setIcon(icon);

        gridLayout->addWidget(pushButtonGestionPersonnelAjouter, 0, 0, 1, 1);

        pushButtonGestionPersonnelModifier = new QPushButton(tab);
        pushButtonGestionPersonnelModifier->setObjectName(QStringLiteral("pushButtonGestionPersonnelModifier"));
        pushButtonGestionPersonnelModifier->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/docs/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelModifier->setIcon(icon1);

        gridLayout->addWidget(pushButtonGestionPersonnelModifier, 0, 1, 1, 1);

        pushButtonGestionPersonnelSupprimer = new QPushButton(tab);
        pushButtonGestionPersonnelSupprimer->setObjectName(QStringLiteral("pushButtonGestionPersonnelSupprimer"));
        pushButtonGestionPersonnelSupprimer->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/docs/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelSupprimer->setIcon(icon2);

        gridLayout->addWidget(pushButtonGestionPersonnelSupprimer, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget = new QWidget(tab_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 12, 845, 396));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableWidgetRayons = new QTableWidget(widget);
        if (tableWidgetRayons->columnCount() < 1)
            tableWidgetRayons->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayons->setObjectName(QStringLiteral("tableWidgetRayons"));
        tableWidgetRayons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetRayons->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetRayons);

        tableWidgetTypeProduits = new QTableWidget(widget);
        if (tableWidgetTypeProduits->columnCount() < 1)
            tableWidgetTypeProduits->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypeProduits->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableWidgetTypeProduits->setObjectName(QStringLiteral("tableWidgetTypeProduits"));
        tableWidgetTypeProduits->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetTypeProduits->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetTypeProduits);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableWidgetProduits = new QTableWidget(widget);
        if (tableWidgetProduits->columnCount() < 5)
            tableWidgetProduits->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetProduits->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        tableWidgetProduits->setObjectName(QStringLiteral("tableWidgetProduits"));

        verticalLayout_3->addWidget(tableWidgetProduits);


        horizontalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        comboBoxRayons = new QComboBox(widget);
        comboBoxRayons->setObjectName(QStringLiteral("comboBoxRayons"));

        gridLayout_5->addWidget(comboBoxRayons, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonAjoutRayons = new QPushButton(widget);
        pushButtonAjoutRayons->setObjectName(QStringLiteral("pushButtonAjoutRayons"));
        pushButtonAjoutRayons->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonAjoutRayons);

        pushButtonSupprimerRayons = new QPushButton(widget);
        pushButtonSupprimerRayons->setObjectName(QStringLiteral("pushButtonSupprimerRayons"));
        pushButtonSupprimerRayons->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/docs/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimerRayons->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButtonSupprimerRayons);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 3, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 2);

        comboBoxTypeProduits = new QComboBox(widget);
        comboBoxTypeProduits->setObjectName(QStringLiteral("comboBoxTypeProduits"));

        gridLayout_5->addWidget(comboBoxTypeProduits, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAjoutTypeProduits = new QPushButton(widget);
        pushButtonAjoutTypeProduits->setObjectName(QStringLiteral("pushButtonAjoutTypeProduits"));
        pushButtonAjoutTypeProduits->setIcon(icon);

        horizontalLayout->addWidget(pushButtonAjoutTypeProduits);

        pushButtonSupprimerTypeProduits = new QPushButton(widget);
        pushButtonSupprimerTypeProduits->setObjectName(QStringLiteral("pushButtonSupprimerTypeProduits"));
        pushButtonSupprimerTypeProduits->setEnabled(false);
        pushButtonSupprimerTypeProduits->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonSupprimerTypeProduits);

        pushButtonModifierTypeProduits = new QPushButton(widget);
        pushButtonModifierTypeProduits->setObjectName(QStringLiteral("pushButtonModifierTypeProduits"));
        pushButtonModifierTypeProduits->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonModifierTypeProduits);


        gridLayout_5->addLayout(horizontalLayout, 1, 3, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 2);

        lineEditLibelleProduit = new QLineEdit(widget);
        lineEditLibelleProduit->setObjectName(QStringLiteral("lineEditLibelleProduit"));

        gridLayout_5->addWidget(lineEditLibelleProduit, 2, 2, 1, 2);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        lineEditPrix = new QLineEdit(widget);
        lineEditPrix->setObjectName(QStringLiteral("lineEditPrix"));

        gridLayout_5->addWidget(lineEditPrix, 3, 1, 1, 3);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        lineEditPoids = new QLineEdit(widget);
        lineEditPoids->setObjectName(QStringLiteral("lineEditPoids"));

        gridLayout_5->addWidget(lineEditPoids, 4, 1, 1, 3);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 5, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(widget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        gridLayout_5->addWidget(dateTimeEdit, 5, 1, 1, 3);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 6, 0, 1, 1);

        dateTimeEdit_2 = new QDateTimeEdit(widget);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));

        gridLayout_5->addWidget(dateTimeEdit_2, 6, 1, 1, 3);

        pushButtonGestionPersonnelAjouter_2 = new QPushButton(widget);
        pushButtonGestionPersonnelAjouter_2->setObjectName(QStringLiteral("pushButtonGestionPersonnelAjouter_2"));
        pushButtonGestionPersonnelAjouter_2->setEnabled(true);
        pushButtonGestionPersonnelAjouter_2->setIcon(icon);

        gridLayout_5->addWidget(pushButtonGestionPersonnelAjouter_2, 7, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_5);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        tableWidgetProducteurs = new QTableWidget(tab_6);
        if (tableWidgetProducteurs->columnCount() < 5)
            tableWidgetProducteurs->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        tableWidgetProducteurs->setObjectName(QStringLiteral("tableWidgetProducteurs"));

        gridLayout_3->addWidget(tableWidgetProducteurs, 1, 0, 1, 2);

        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(tab_6);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        tableWidgetPointDeVentes = new QTableWidget(tab_6);
        if (tableWidgetPointDeVentes->columnCount() < 3)
            tableWidgetPointDeVentes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetPointDeVentes->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetPointDeVentes->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetPointDeVentes->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        tableWidgetPointDeVentes->setObjectName(QStringLiteral("tableWidgetPointDeVentes"));

        gridLayout_2->addWidget(tableWidgetPointDeVentes, 1, 0, 1, 2);

        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(tab_6);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 3, 1, 1);

        line_2 = new QFrame(tab_6);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 1, 0, 1, 4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);


        gridLayout_4->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelNom = new QLabel(tab_6);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        verticalLayout_6->addWidget(labelNom);

        labelEtat = new QLabel(tab_6);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));

        verticalLayout_6->addWidget(labelEtat);

        labelAdresse = new QLabel(tab_6);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        verticalLayout_6->addWidget(labelAdresse);


        gridLayout_4->addLayout(verticalLayout_6, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 2, 2, 1, 2);


        verticalLayout_4->addLayout(gridLayout_4);

        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());

        gridLayout_6->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestionnaire", 0));
        label->setText(QApplication::translate("MainWindow", "Liste du personnel :", 0));
        pushButtonGestionPersonnelAjouter->setText(QString());
        pushButtonGestionPersonnelModifier->setText(QString());
        pushButtonGestionPersonnelSupprimer->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Gestion du personnel", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetRayons->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Rayons", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetTypeProduits->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Type Produits", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduits->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "produits", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduits->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "prix", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduits->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "kilos", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProduits->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "date d\303\251but", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetProduits->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "date fin", 0));
        label_7->setText(QApplication::translate("MainWindow", "Rayons :", 0));
        pushButtonAjoutRayons->setText(QString());
        pushButtonSupprimerRayons->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Type produits :", 0));
        pushButtonAjoutTypeProduits->setText(QString());
        pushButtonSupprimerTypeProduits->setText(QString());
        pushButtonModifierTypeProduits->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Libelle produit :", 0));
        label_10->setText(QApplication::translate("MainWindow", "Prix :", 0));
        label_11->setText(QApplication::translate("MainWindow", "Poids :", 0));
        label_12->setText(QApplication::translate("MainWindow", "Date Debut :", 0));
        label_13->setText(QApplication::translate("MainWindow", "Date Fin :", 0));
        pushButtonGestionPersonnelAjouter_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Gestion catalogue", 0));
        label_2->setText(QApplication::translate("MainWindow", "Producteurs :", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProducteurs->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProducteurs->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Prenom", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetProducteurs->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Mail", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetProducteurs->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Tel", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetProducteurs->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Adresse", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "ACCEPTER", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "REFUSER", 0));
        label_3->setText(QApplication::translate("MainWindow", "Points de Ventes :", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetPointDeVentes->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Nom", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetPointDeVentes->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Prenom", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetPointDeVentes->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Adresse", 0));
        pushButton->setText(QApplication::translate("MainWindow", "ACCEPTER", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "REFUSER", 0));
        label_4->setText(QApplication::translate("MainWindow", "Nom :", 0));
        label_5->setText(QApplication::translate("MainWindow", "Etat :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Adresse :", 0));
        labelNom->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelEtat->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelAdresse->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "GESTION VISITE", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Producteur et Point de Vente", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Planifications visites", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Gestion paie", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Statistiques", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
