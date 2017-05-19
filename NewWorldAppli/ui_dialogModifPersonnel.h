/********************************************************************************
** Form generated from reading UI file 'dialogModifPersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFPERSONNEL_H
#define UI_DIALOGMODIFPERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogModifPersonnel
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *lineEditNomModifPersonnel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPrenomModifPersonnel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditAdresseModifPersonnel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditCPModifPersonnel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditVilleModifPersonnel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditMailModifPersonnel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEditTelephoneModifPersonnel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEditPortableModifPersonnel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QRadioButton *radioButtonControleurModifPersonnel;
    QRadioButton *radioButtonGestionnaireModifPersonnel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogModifPersonnel)
    {
        if (DialogModifPersonnel->objectName().isEmpty())
            DialogModifPersonnel->setObjectName(QStringLiteral("DialogModifPersonnel"));
        DialogModifPersonnel->resize(1048, 702);
        gridLayout_2 = new QGridLayout(DialogModifPersonnel);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(DialogModifPersonnel);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        lineEditNomModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditNomModifPersonnel->setObjectName(QStringLiteral("lineEditNomModifPersonnel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditNomModifPersonnel);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(DialogModifPersonnel);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditPrenomModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditPrenomModifPersonnel->setObjectName(QStringLiteral("lineEditPrenomModifPersonnel"));

        horizontalLayout_2->addWidget(lineEditPrenomModifPersonnel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DialogModifPersonnel);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditAdresseModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditAdresseModifPersonnel->setObjectName(QStringLiteral("lineEditAdresseModifPersonnel"));

        horizontalLayout_3->addWidget(lineEditAdresseModifPersonnel);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(DialogModifPersonnel);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditCPModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditCPModifPersonnel->setObjectName(QStringLiteral("lineEditCPModifPersonnel"));

        horizontalLayout_4->addWidget(lineEditCPModifPersonnel);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(DialogModifPersonnel);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditVilleModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditVilleModifPersonnel->setObjectName(QStringLiteral("lineEditVilleModifPersonnel"));

        horizontalLayout_5->addWidget(lineEditVilleModifPersonnel);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(DialogModifPersonnel);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditMailModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditMailModifPersonnel->setObjectName(QStringLiteral("lineEditMailModifPersonnel"));

        horizontalLayout_6->addWidget(lineEditMailModifPersonnel);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(DialogModifPersonnel);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEditTelephoneModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditTelephoneModifPersonnel->setObjectName(QStringLiteral("lineEditTelephoneModifPersonnel"));

        horizontalLayout_7->addWidget(lineEditTelephoneModifPersonnel);


        gridLayout->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(DialogModifPersonnel);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEditPortableModifPersonnel = new QLineEdit(DialogModifPersonnel);
        lineEditPortableModifPersonnel->setObjectName(QStringLiteral("lineEditPortableModifPersonnel"));

        horizontalLayout_8->addWidget(lineEditPortableModifPersonnel);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(DialogModifPersonnel);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        radioButtonControleurModifPersonnel = new QRadioButton(DialogModifPersonnel);
        radioButtonControleurModifPersonnel->setObjectName(QStringLiteral("radioButtonControleurModifPersonnel"));

        horizontalLayout_9->addWidget(radioButtonControleurModifPersonnel);

        radioButtonGestionnaireModifPersonnel = new QRadioButton(DialogModifPersonnel);
        radioButtonGestionnaireModifPersonnel->setObjectName(QStringLiteral("radioButtonGestionnaireModifPersonnel"));

        horizontalLayout_9->addWidget(radioButtonGestionnaireModifPersonnel);


        gridLayout->addLayout(horizontalLayout_9, 8, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogModifPersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogModifPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogModifPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogModifPersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogModifPersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogModifPersonnel)
    {
        DialogModifPersonnel->setWindowTitle(QApplication::translate("DialogModifPersonnel", "Dialog", 0));
        label->setText(QApplication::translate("DialogModifPersonnel", "Nom :", 0));
        label_2->setText(QApplication::translate("DialogModifPersonnel", "Prenom :", 0));
        label_3->setText(QApplication::translate("DialogModifPersonnel", "Adresse :", 0));
        label_4->setText(QApplication::translate("DialogModifPersonnel", "Code postal :", 0));
        label_5->setText(QApplication::translate("DialogModifPersonnel", "Ville :", 0));
        label_6->setText(QApplication::translate("DialogModifPersonnel", "Mail :", 0));
        label_7->setText(QApplication::translate("DialogModifPersonnel", "Telephone :", 0));
        label_8->setText(QApplication::translate("DialogModifPersonnel", "Portable :", 0));
        label_9->setText(QApplication::translate("DialogModifPersonnel", "Poste :", 0));
        radioButtonControleurModifPersonnel->setText(QApplication::translate("DialogModifPersonnel", "Controleur", 0));
        radioButtonGestionnaireModifPersonnel->setText(QApplication::translate("DialogModifPersonnel", "Gestionnaire", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogModifPersonnel: public Ui_DialogModifPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFPERSONNEL_H
