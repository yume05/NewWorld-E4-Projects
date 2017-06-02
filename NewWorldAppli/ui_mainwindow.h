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
#include <QtWidgets/QDoubleSpinBox>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidgetRayons;
    QTableWidget *tableWidgetTypeProduits;
    QTableWidget *tableWidgetProduits;
    QFrame *line;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonSupprimerProduits;
    QDateTimeEdit *dateTimeEditDebut;
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
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QDateTimeEdit *dateTimeEditFin;
    QPushButton *pushButtonModifierProduits;
    QDoubleSpinBox *doubleSpinBoxPrix;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QLabel *label_14;
    QLabel *label_15;
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
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 12, 845, 396));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
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
        tableWidgetRayons = new QTableWidget(layoutWidget);
        if (tableWidgetRayons->columnCount() < 1)
            tableWidgetRayons->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayons->setObjectName(QStringLiteral("tableWidgetRayons"));
        tableWidgetRayons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetRayons->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetRayons);

        tableWidgetTypeProduits = new QTableWidget(layoutWidget);
        if (tableWidgetTypeProduits->columnCount() < 1)
            tableWidgetTypeProduits->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypeProduits->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableWidgetTypeProduits->setObjectName(QStringLiteral("tableWidgetTypeProduits"));
        tableWidgetTypeProduits->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetTypeProduits->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetTypeProduits);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableWidgetProduits = new QTableWidget(layoutWidget);
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
        tableWidgetProduits->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tableWidgetProduits);


        horizontalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(layoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButtonSupprimerProduits = new QPushButton(layoutWidget);
        pushButtonSupprimerProduits->setObjectName(QStringLiteral("pushButtonSupprimerProduits"));
        pushButtonSupprimerProduits->setEnabled(false);
        pushButtonSupprimerProduits->setIcon(icon2);

        gridLayout_5->addWidget(pushButtonSupprimerProduits, 7, 3, 1, 1);

        dateTimeEditDebut = new QDateTimeEdit(layoutWidget);
        dateTimeEditDebut->setObjectName(QStringLiteral("dateTimeEditDebut"));
        dateTimeEditDebut->setEnabled(false);

        gridLayout_5->addWidget(dateTimeEditDebut, 5, 1, 1, 3);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        comboBoxRayons = new QComboBox(layoutWidget);
        comboBoxRayons->setObjectName(QStringLiteral("comboBoxRayons"));

        gridLayout_5->addWidget(comboBoxRayons, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonAjoutRayons = new QPushButton(layoutWidget);
        pushButtonAjoutRayons->setObjectName(QStringLiteral("pushButtonAjoutRayons"));
        pushButtonAjoutRayons->setIcon(icon);

        horizontalLayout_3->addWidget(pushButtonAjoutRayons);

        pushButtonSupprimerRayons = new QPushButton(layoutWidget);
        pushButtonSupprimerRayons->setObjectName(QStringLiteral("pushButtonSupprimerRayons"));
        pushButtonSupprimerRayons->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/docs/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimerRayons->setIcon(icon3);

        horizontalLayout_3->addWidget(pushButtonSupprimerRayons);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 3, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 2);

        comboBoxTypeProduits = new QComboBox(layoutWidget);
        comboBoxTypeProduits->setObjectName(QStringLiteral("comboBoxTypeProduits"));

        gridLayout_5->addWidget(comboBoxTypeProduits, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAjoutTypeProduits = new QPushButton(layoutWidget);
        pushButtonAjoutTypeProduits->setObjectName(QStringLiteral("pushButtonAjoutTypeProduits"));
        pushButtonAjoutTypeProduits->setIcon(icon);

        horizontalLayout->addWidget(pushButtonAjoutTypeProduits);

        pushButtonSupprimerTypeProduits = new QPushButton(layoutWidget);
        pushButtonSupprimerTypeProduits->setObjectName(QStringLiteral("pushButtonSupprimerTypeProduits"));
        pushButtonSupprimerTypeProduits->setEnabled(false);
        pushButtonSupprimerTypeProduits->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonSupprimerTypeProduits);

        pushButtonModifierTypeProduits = new QPushButton(layoutWidget);
        pushButtonModifierTypeProduits->setObjectName(QStringLiteral("pushButtonModifierTypeProduits"));
        pushButtonModifierTypeProduits->setEnabled(false);
        pushButtonModifierTypeProduits->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonModifierTypeProduits);


        gridLayout_5->addLayout(horizontalLayout, 1, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 2);

        lineEditLibelleProduit = new QLineEdit(layoutWidget);
        lineEditLibelleProduit->setObjectName(QStringLiteral("lineEditLibelleProduit"));
        lineEditLibelleProduit->setEnabled(false);

        gridLayout_5->addWidget(lineEditLibelleProduit, 2, 2, 1, 2);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 5, 0, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 6, 0, 1, 1);

        dateTimeEditFin = new QDateTimeEdit(layoutWidget);
        dateTimeEditFin->setObjectName(QStringLiteral("dateTimeEditFin"));
        dateTimeEditFin->setEnabled(false);

        gridLayout_5->addWidget(dateTimeEditFin, 6, 1, 1, 3);

        pushButtonModifierProduits = new QPushButton(layoutWidget);
        pushButtonModifierProduits->setObjectName(QStringLiteral("pushButtonModifierProduits"));
        pushButtonModifierProduits->setEnabled(false);
        pushButtonModifierProduits->setIcon(icon1);

        gridLayout_5->addWidget(pushButtonModifierProduits, 7, 2, 1, 1);

        doubleSpinBoxPrix = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxPrix->setObjectName(QStringLiteral("doubleSpinBoxPrix"));
        doubleSpinBoxPrix->setEnabled(false);
        doubleSpinBoxPrix->setSingleStep(0.25);
        doubleSpinBoxPrix->setValue(0);

        gridLayout_5->addWidget(doubleSpinBoxPrix, 3, 2, 1, 1);

        doubleSpinBoxPoids = new QDoubleSpinBox(layoutWidget);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setEnabled(false);
        doubleSpinBoxPoids->setSingleStep(0.25);

        gridLayout_5->addWidget(doubleSpinBoxPoids, 4, 2, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 4, 3, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_5->addWidget(label_15, 3, 3, 1, 1);


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
        pushButtonSupprimerProduits->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Rayons :", 0));
        pushButtonAjoutRayons->setText(QString());
        pushButtonSupprimerRayons->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "Type produits :", 0));
        pushButtonAjoutTypeProduits->setText(QString());
        pushButtonSupprimerTypeProduits->setText(QString());
        pushButtonModifierTypeProduits->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Libelle produit :", 0));
        label_10->setText(QApplication::translate("MainWindow", "Prix : (au kilo)", 0));
        label_11->setText(QApplication::translate("MainWindow", "Poids : ", 0));
        label_12->setText(QApplication::translate("MainWindow", "Date Fabrication:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Date Peremption :", 0));
        pushButtonModifierProduits->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">kilo(s)</span></p></body></html>", 0));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">\342\202\254/kilo</span></p></body></html>", 0));
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
