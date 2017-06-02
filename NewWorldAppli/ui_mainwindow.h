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
#include <QtWidgets/QDateEdit>
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
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_4;
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
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tableWidgetProducteurs;
    QFrame *line_4;
    QLabel *label_3;
    QTableWidget *tableWidgetProduitsAttente;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_59;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_4;
    QLabel *libelleProduit;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QLabel *prixProduit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_6;
    QLabel *poidsProduit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLabel *rayonProduit;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QLabel *categorieProduit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_18;
    QLabel *datedebutProduit;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLabel *datefinProduit;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    QPushButton *imageProduit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_27;
    QComboBox *etatProduit;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonValiderProduit;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QTableWidget *tableWidgetProducteursTous;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_21;
    QTableWidget *tableWidgetControleurs;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_22;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QLabel *etatProducteur;
    QLabel *label_22;
    QLabel *controleur;
    QLabel *label_62;
    QDateEdit *dateVisite;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_60;
    QComboBox *typeVisite;
    QLabel *label_25;
    QLabel *label_63;
    QLabel *label_23;
    QLabel *producteur;
    QPushButton *pushButtonProposerVisite;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_24;
    QTableWidget *tableWidgetVisites;
    QWidget *tab_4;
    QWidget *tab_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(948, 510);
        MainWindow->setMinimumSize(QSize(903, 510));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
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
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/docs/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelAjouter->setIcon(icon1);

        gridLayout->addWidget(pushButtonGestionPersonnelAjouter, 0, 0, 1, 1);

        pushButtonGestionPersonnelModifier = new QPushButton(tab);
        pushButtonGestionPersonnelModifier->setObjectName(QStringLiteral("pushButtonGestionPersonnelModifier"));
        pushButtonGestionPersonnelModifier->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/docs/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelModifier->setIcon(icon2);

        gridLayout->addWidget(pushButtonGestionPersonnelModifier, 0, 1, 1, 1);

        pushButtonGestionPersonnelSupprimer = new QPushButton(tab);
        pushButtonGestionPersonnelSupprimer->setObjectName(QStringLiteral("pushButtonGestionPersonnelSupprimer"));
        pushButtonGestionPersonnelSupprimer->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/docs/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGestionPersonnelSupprimer->setIcon(icon3);

        gridLayout->addWidget(pushButtonGestionPersonnelSupprimer, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableWidgetRayons = new QTableWidget(tab_3);
        if (tableWidgetRayons->columnCount() < 1)
            tableWidgetRayons->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetRayons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidgetRayons->setObjectName(QStringLiteral("tableWidgetRayons"));
        tableWidgetRayons->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetRayons->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetRayons->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetRayons);

        tableWidgetTypeProduits = new QTableWidget(tab_3);
        if (tableWidgetTypeProduits->columnCount() < 1)
            tableWidgetTypeProduits->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetTypeProduits->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableWidgetTypeProduits->setObjectName(QStringLiteral("tableWidgetTypeProduits"));
        tableWidgetTypeProduits->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetTypeProduits->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetTypeProduits->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_2->addWidget(tableWidgetTypeProduits);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tableWidgetProduits = new QTableWidget(tab_3);
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
        tableWidgetProduits->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduits->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_3->addWidget(tableWidgetProduits);


        horizontalLayout_4->addLayout(verticalLayout_3);

        line = new QFrame(tab_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButtonSupprimerProduits = new QPushButton(tab_3);
        pushButtonSupprimerProduits->setObjectName(QStringLiteral("pushButtonSupprimerProduits"));
        pushButtonSupprimerProduits->setEnabled(false);
        pushButtonSupprimerProduits->setIcon(icon3);

        gridLayout_5->addWidget(pushButtonSupprimerProduits, 7, 3, 1, 1);

        dateTimeEditDebut = new QDateTimeEdit(tab_3);
        dateTimeEditDebut->setObjectName(QStringLiteral("dateTimeEditDebut"));
        dateTimeEditDebut->setEnabled(false);

        gridLayout_5->addWidget(dateTimeEditDebut, 5, 1, 1, 3);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        comboBoxRayons = new QComboBox(tab_3);
        comboBoxRayons->setObjectName(QStringLiteral("comboBoxRayons"));

        gridLayout_5->addWidget(comboBoxRayons, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonAjoutRayons = new QPushButton(tab_3);
        pushButtonAjoutRayons->setObjectName(QStringLiteral("pushButtonAjoutRayons"));
        pushButtonAjoutRayons->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButtonAjoutRayons);

        pushButtonSupprimerRayons = new QPushButton(tab_3);
        pushButtonSupprimerRayons->setObjectName(QStringLiteral("pushButtonSupprimerRayons"));
        pushButtonSupprimerRayons->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/docs/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimerRayons->setIcon(icon4);

        horizontalLayout_3->addWidget(pushButtonSupprimerRayons);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 3, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 2);

        comboBoxTypeProduits = new QComboBox(tab_3);
        comboBoxTypeProduits->setObjectName(QStringLiteral("comboBoxTypeProduits"));

        gridLayout_5->addWidget(comboBoxTypeProduits, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonAjoutTypeProduits = new QPushButton(tab_3);
        pushButtonAjoutTypeProduits->setObjectName(QStringLiteral("pushButtonAjoutTypeProduits"));
        pushButtonAjoutTypeProduits->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonAjoutTypeProduits);

        pushButtonSupprimerTypeProduits = new QPushButton(tab_3);
        pushButtonSupprimerTypeProduits->setObjectName(QStringLiteral("pushButtonSupprimerTypeProduits"));
        pushButtonSupprimerTypeProduits->setEnabled(false);
        pushButtonSupprimerTypeProduits->setIcon(icon4);

        horizontalLayout->addWidget(pushButtonSupprimerTypeProduits);

        pushButtonModifierTypeProduits = new QPushButton(tab_3);
        pushButtonModifierTypeProduits->setObjectName(QStringLiteral("pushButtonModifierTypeProduits"));
        pushButtonModifierTypeProduits->setEnabled(false);
        pushButtonModifierTypeProduits->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonModifierTypeProduits);


        gridLayout_5->addLayout(horizontalLayout, 1, 3, 1, 1);

        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 2);

        lineEditLibelleProduit = new QLineEdit(tab_3);
        lineEditLibelleProduit->setObjectName(QStringLiteral("lineEditLibelleProduit"));
        lineEditLibelleProduit->setEnabled(false);

        gridLayout_5->addWidget(lineEditLibelleProduit, 2, 2, 1, 2);

        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 5, 0, 1, 1);

        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 6, 0, 1, 1);

        dateTimeEditFin = new QDateTimeEdit(tab_3);
        dateTimeEditFin->setObjectName(QStringLiteral("dateTimeEditFin"));
        dateTimeEditFin->setEnabled(false);

        gridLayout_5->addWidget(dateTimeEditFin, 6, 1, 1, 3);

        pushButtonModifierProduits = new QPushButton(tab_3);
        pushButtonModifierProduits->setObjectName(QStringLiteral("pushButtonModifierProduits"));
        pushButtonModifierProduits->setEnabled(false);
        pushButtonModifierProduits->setIcon(icon2);

        gridLayout_5->addWidget(pushButtonModifierProduits, 7, 2, 1, 1);

        doubleSpinBoxPrix = new QDoubleSpinBox(tab_3);
        doubleSpinBoxPrix->setObjectName(QStringLiteral("doubleSpinBoxPrix"));
        doubleSpinBoxPrix->setEnabled(false);
        doubleSpinBoxPrix->setSingleStep(0.25);
        doubleSpinBoxPrix->setValue(0);

        gridLayout_5->addWidget(doubleSpinBoxPrix, 3, 2, 1, 1);

        doubleSpinBoxPoids = new QDoubleSpinBox(tab_3);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setEnabled(false);
        doubleSpinBoxPoids->setSingleStep(0.25);

        gridLayout_5->addWidget(doubleSpinBoxPoids, 4, 2, 1, 1);

        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 4, 3, 1, 1);

        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_5->addWidget(label_15, 3, 3, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_5);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_20 = new QHBoxLayout(tab_6);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        tableWidgetProducteurs = new QTableWidget(tab_6);
        if (tableWidgetProducteurs->columnCount() < 3)
            tableWidgetProducteurs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetProducteurs->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        tableWidgetProducteurs->setObjectName(QStringLiteral("tableWidgetProducteurs"));
        tableWidgetProducteurs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProducteurs->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidgetProducteurs);

        line_4 = new QFrame(tab_6);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        label_3 = new QLabel(tab_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tableWidgetProduitsAttente = new QTableWidget(tab_6);
        if (tableWidgetProduitsAttente->columnCount() < 7)
            tableWidgetProduitsAttente->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetProduitsAttente->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        tableWidgetProduitsAttente->setObjectName(QStringLiteral("tableWidgetProduitsAttente"));
        tableWidgetProduitsAttente->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduitsAttente->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidgetProduitsAttente);


        horizontalLayout_9->addLayout(verticalLayout);

        line_3 = new QFrame(tab_6);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_3);


        horizontalLayout_19->addLayout(horizontalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_59 = new QLabel(tab_6);
        label_59->setObjectName(QStringLiteral("label_59"));

        verticalLayout_7->addWidget(label_59);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_4 = new QLabel(tab_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_18->addWidget(label_4);

        libelleProduit = new QLabel(tab_6);
        libelleProduit->setObjectName(QStringLiteral("libelleProduit"));
        libelleProduit->setEnabled(false);

        horizontalLayout_18->addWidget(libelleProduit);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_17->addWidget(label_5);

        prixProduit = new QLabel(tab_6);
        prixProduit->setObjectName(QStringLiteral("prixProduit"));
        prixProduit->setEnabled(false);

        horizontalLayout_17->addWidget(prixProduit);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_16->addWidget(label_6);

        poidsProduit = new QLabel(tab_6);
        poidsProduit->setObjectName(QStringLiteral("poidsProduit"));
        poidsProduit->setEnabled(false);

        horizontalLayout_16->addWidget(poidsProduit);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_16 = new QLabel(tab_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_15->addWidget(label_16);

        rayonProduit = new QLabel(tab_6);
        rayonProduit->setObjectName(QStringLiteral("rayonProduit"));
        rayonProduit->setEnabled(false);

        horizontalLayout_15->addWidget(rayonProduit);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_17 = new QLabel(tab_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_14->addWidget(label_17);

        categorieProduit = new QLabel(tab_6);
        categorieProduit->setObjectName(QStringLiteral("categorieProduit"));
        categorieProduit->setEnabled(false);

        horizontalLayout_14->addWidget(categorieProduit);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_18 = new QLabel(tab_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_13->addWidget(label_18);

        datedebutProduit = new QLabel(tab_6);
        datedebutProduit->setObjectName(QStringLiteral("datedebutProduit"));
        datedebutProduit->setEnabled(false);

        horizontalLayout_13->addWidget(datedebutProduit);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_19 = new QLabel(tab_6);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_12->addWidget(label_19);

        datefinProduit = new QLabel(tab_6);
        datefinProduit->setObjectName(QStringLiteral("datefinProduit"));
        datefinProduit->setEnabled(false);

        horizontalLayout_12->addWidget(datefinProduit);


        verticalLayout_7->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_29 = new QLabel(tab_6);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_11->addWidget(label_29);

        imageProduit = new QPushButton(tab_6);
        imageProduit->setObjectName(QStringLiteral("imageProduit"));
        imageProduit->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/docs/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        imageProduit->setIcon(icon5);

        horizontalLayout_11->addWidget(imageProduit);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_27 = new QLabel(tab_6);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_10->addWidget(label_27);

        etatProduit = new QComboBox(tab_6);
        etatProduit->setObjectName(QStringLiteral("etatProduit"));
        etatProduit->setEnabled(false);

        horizontalLayout_10->addWidget(etatProduit);

        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_10->addWidget(label_28);


        verticalLayout_7->addLayout(horizontalLayout_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer);

        pushButtonValiderProduit = new QPushButton(tab_6);
        pushButtonValiderProduit->setObjectName(QStringLiteral("pushButtonValiderProduit"));
        pushButtonValiderProduit->setEnabled(false);
        pushButtonValiderProduit->setIcon(icon1);

        verticalLayout_6->addWidget(pushButtonValiderProduit);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout_19->addLayout(verticalLayout_7);


        horizontalLayout_20->addLayout(horizontalLayout_19);

        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_8->addWidget(label_20);

        tableWidgetProducteursTous = new QTableWidget(tab_2);
        if (tableWidgetProducteursTous->columnCount() < 4)
            tableWidgetProducteursTous->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetProducteursTous->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetProducteursTous->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetProducteursTous->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetProducteursTous->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        tableWidgetProducteursTous->setObjectName(QStringLiteral("tableWidgetProducteursTous"));
        tableWidgetProducteursTous->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProducteursTous->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_8->addWidget(tableWidgetProducteursTous);


        horizontalLayout_21->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_9->addWidget(label_21);

        tableWidgetControleurs = new QTableWidget(tab_2);
        if (tableWidgetControleurs->columnCount() < 3)
            tableWidgetControleurs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetControleurs->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetControleurs->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetControleurs->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        tableWidgetControleurs->setObjectName(QStringLiteral("tableWidgetControleurs"));
        tableWidgetControleurs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetControleurs->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_9->addWidget(tableWidgetControleurs);


        horizontalLayout_21->addLayout(verticalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_21->addItem(verticalSpacer);


        verticalLayout_11->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        frame = new QFrame(tab_2);
        frame->setObjectName(QStringLiteral("frame"));
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        etatProducteur = new QLabel(frame);
        etatProducteur->setObjectName(QStringLiteral("etatProducteur"));
        etatProducteur->setEnabled(false);

        gridLayout_3->addWidget(etatProducteur, 2, 1, 1, 3);

        label_22 = new QLabel(frame);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 0, 0, 1, 3);

        controleur = new QLabel(frame);
        controleur->setObjectName(QStringLiteral("controleur"));
        controleur->setEnabled(false);

        gridLayout_3->addWidget(controleur, 4, 1, 1, 3);

        label_62 = new QLabel(frame);
        label_62->setObjectName(QStringLiteral("label_62"));

        gridLayout_3->addWidget(label_62, 5, 0, 1, 3);

        dateVisite = new QDateEdit(frame);
        dateVisite->setObjectName(QStringLiteral("dateVisite"));
        dateVisite->setEnabled(false);

        gridLayout_3->addWidget(dateVisite, 6, 2, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 7, 0, 1, 2);

        label_60 = new QLabel(frame);
        label_60->setObjectName(QStringLiteral("label_60"));

        gridLayout_3->addWidget(label_60, 4, 0, 1, 1);

        typeVisite = new QComboBox(frame);
        typeVisite->setObjectName(QStringLiteral("typeVisite"));
        typeVisite->setEnabled(false);

        gridLayout_3->addWidget(typeVisite, 5, 3, 1, 2);

        label_25 = new QLabel(frame);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 2, 0, 1, 1);

        label_63 = new QLabel(frame);
        label_63->setObjectName(QStringLiteral("label_63"));

        gridLayout_3->addWidget(label_63, 6, 0, 1, 2);

        label_23 = new QLabel(frame);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        producteur = new QLabel(frame);
        producteur->setObjectName(QStringLiteral("producteur"));
        producteur->setEnabled(false);

        gridLayout_3->addWidget(producteur, 1, 1, 1, 3);

        pushButtonProposerVisite = new QPushButton(frame);
        pushButtonProposerVisite->setObjectName(QStringLiteral("pushButtonProposerVisite"));
        pushButtonProposerVisite->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/docs/go-previous-rtl.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonProposerVisite->setIcon(icon6);

        gridLayout_3->addWidget(pushButtonProposerVisite, 7, 3, 1, 2);


        horizontalLayout_22->addWidget(frame);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_10->addWidget(label_24);

        tableWidgetVisites = new QTableWidget(tab_2);
        if (tableWidgetVisites->columnCount() < 6)
            tableWidgetVisites->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidgetVisites->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        tableWidgetVisites->setObjectName(QStringLiteral("tableWidgetVisites"));

        verticalLayout_10->addWidget(tableWidgetVisites);


        horizontalLayout_22->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout_22);

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

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestionnaire", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Liste du personnel :</span></p></body></html>", 0));
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
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Producteurs :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProducteurs->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "login", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProducteurs->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "nom", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetProducteurs->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "prenom", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Produits en attente :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetProduitsAttente->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "libelle", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetProduitsAttente->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "prix", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetProduitsAttente->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "poids", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetProduitsAttente->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "rayon", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetProduitsAttente->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "cat\303\251gorie", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetProduitsAttente->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "dateDebut", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetProduitsAttente->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "dateFin", 0));
        label_59->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Accepter ou Refuser produit :</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "Produit :", 0));
        libelleProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_5->setText(QApplication::translate("MainWindow", "Prix :", 0));
        prixProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_6->setText(QApplication::translate("MainWindow", "Poids :", 0));
        poidsProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_16->setText(QApplication::translate("MainWindow", "Rayon :", 0));
        rayonProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_17->setText(QApplication::translate("MainWindow", "Cat\303\251gorie :", 0));
        categorieProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_18->setText(QApplication::translate("MainWindow", "Date fabrication/r\303\251colte :", 0));
        datedebutProduit->setText(QApplication::translate("MainWindow", "..", 0));
        label_19->setText(QApplication::translate("MainWindow", "Date p\303\251remption/fin de r\303\251colte  :", 0));
        datefinProduit->setText(QApplication::translate("MainWindow", "...", 0));
        label_29->setText(QApplication::translate("MainWindow", "Image :", 0));
        imageProduit->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "Etat :", 0));
        etatProduit->clear();
        etatProduit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ATT", 0)
         << QApplication::translate("MainWindow", "ACC", 0)
         << QApplication::translate("MainWindow", "REF", 0)
        );
        label_28->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-style:italic;\">Accepter/Attente/Refuser</span></p></body></html>", 0));
        pushButtonValiderProduit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Producteurs", 0));
        label_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Tous les producteurs :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetProducteursTous->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "login", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetProducteursTous->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "nom pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetProducteursTous->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "adresse", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetProducteursTous->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "etat", 0));
        label_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Controleurs :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetControleurs->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "login", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetControleurs->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "nom pr\303\251nom", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetControleurs->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "adresse", 0));
        etatProducteur->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">...</span></p></body></html>", 0));
        label_22->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Proposer visite :</span></p></body></html>", 0));
        controleur->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">...</span></p></body></html>", 0));
        label_62->setText(QApplication::translate("MainWindow", "Th\303\250me de la visite :", 0));
        label_60->setText(QApplication::translate("MainWindow", "Controleur :", 0));
        typeVisite->clear();
        typeVisite->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1\303\250re Visite", 0)
         << QApplication::translate("MainWindow", "P\303\251riodique", 0)
        );
        label_25->setText(QApplication::translate("MainWindow", "Etat  :", 0));
        label_63->setText(QApplication::translate("MainWindow", "Date propos\303\251 :", 0));
        label_23->setText(QApplication::translate("MainWindow", "Producteur :", 0));
        producteur->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">...</span></p></body></html>", 0));
        pushButtonProposerVisite->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Visites :</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidgetVisites->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "date", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidgetVisites->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "etat", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidgetVisites->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "gestionnaire", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetVisites->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "controleur", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetVisites->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "producteur", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidgetVisites->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "typeVisite", 0));
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
