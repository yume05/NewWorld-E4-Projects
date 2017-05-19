/********************************************************************************
** Form generated from reading UI file 'dialogajoutpersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTPERSONNEL_H
#define UI_DIALOGAJOUTPERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutPersonnel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEditNom;
    QLabel *label_6;
    QLineEdit *lineEditPrenom;
    QLabel *label_8;
    QLineEdit *lineEditMail;
    QLabel *label_7;
    QLineEdit *lineEditTel;
    QLabel *label_10;
    QLineEdit *lineEditRue;
    QLabel *label_9;
    QLineEdit *lineEditVille;
    QLabel *label_11;
    QLineEdit *lineEditCp;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutPersonnel)
    {
        if (DialogAjoutPersonnel->objectName().isEmpty())
            DialogAjoutPersonnel->setObjectName(QStringLiteral("DialogAjoutPersonnel"));
        DialogAjoutPersonnel->resize(367, 534);
        verticalLayout = new QVBoxLayout(DialogAjoutPersonnel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(DialogAjoutPersonnel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        lineEditNom = new QLineEdit(DialogAjoutPersonnel);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        verticalLayout->addWidget(lineEditNom);

        label_6 = new QLabel(DialogAjoutPersonnel);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        lineEditPrenom = new QLineEdit(DialogAjoutPersonnel);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        verticalLayout->addWidget(lineEditPrenom);

        label_8 = new QLabel(DialogAjoutPersonnel);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        lineEditMail = new QLineEdit(DialogAjoutPersonnel);
        lineEditMail->setObjectName(QStringLiteral("lineEditMail"));

        verticalLayout->addWidget(lineEditMail);

        label_7 = new QLabel(DialogAjoutPersonnel);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        lineEditTel = new QLineEdit(DialogAjoutPersonnel);
        lineEditTel->setObjectName(QStringLiteral("lineEditTel"));

        verticalLayout->addWidget(lineEditTel);

        label_10 = new QLabel(DialogAjoutPersonnel);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        lineEditRue = new QLineEdit(DialogAjoutPersonnel);
        lineEditRue->setObjectName(QStringLiteral("lineEditRue"));

        verticalLayout->addWidget(lineEditRue);

        label_9 = new QLabel(DialogAjoutPersonnel);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        lineEditVille = new QLineEdit(DialogAjoutPersonnel);
        lineEditVille->setObjectName(QStringLiteral("lineEditVille"));

        verticalLayout->addWidget(lineEditVille);

        label_11 = new QLabel(DialogAjoutPersonnel);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        lineEditCp = new QLineEdit(DialogAjoutPersonnel);
        lineEditCp->setObjectName(QStringLiteral("lineEditCp"));

        verticalLayout->addWidget(lineEditCp);

        comboBox = new QComboBox(DialogAjoutPersonnel);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        buttonBox = new QDialogButtonBox(DialogAjoutPersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogAjoutPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutPersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutPersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutPersonnel)
    {
        DialogAjoutPersonnel->setWindowTitle(QApplication::translate("DialogAjoutPersonnel", "Dialog", 0));
        label_4->setText(QApplication::translate("DialogAjoutPersonnel", "Nom :", 0));
        label_6->setText(QApplication::translate("DialogAjoutPersonnel", "Prenom :", 0));
        label_8->setText(QApplication::translate("DialogAjoutPersonnel", "Mail :", 0));
        label_7->setText(QApplication::translate("DialogAjoutPersonnel", "Tel :", 0));
        label_10->setText(QApplication::translate("DialogAjoutPersonnel", "Rue :", 0));
        label_9->setText(QApplication::translate("DialogAjoutPersonnel", "Ville :", 0));
        label_11->setText(QApplication::translate("DialogAjoutPersonnel", "Cp :", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DialogAjoutPersonnel", "Gestionnaire", 0)
         << QApplication::translate("DialogAjoutPersonnel", "Controleur", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutPersonnel: public Ui_DialogAjoutPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTPERSONNEL_H
