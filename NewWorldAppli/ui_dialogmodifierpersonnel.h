/********************************************************************************
** Form generated from reading UI file 'dialogmodifierpersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFIERPERSONNEL_H
#define UI_DIALOGMODIFIERPERSONNEL_H

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

class Ui_DialogModifierPersonnel
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

    void setupUi(QDialog *DialogModifierPersonnel)
    {
        if (DialogModifierPersonnel->objectName().isEmpty())
            DialogModifierPersonnel->setObjectName(QStringLiteral("DialogModifierPersonnel"));
        DialogModifierPersonnel->resize(355, 561);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogModifierPersonnel->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogModifierPersonnel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(DialogModifierPersonnel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        lineEditNom = new QLineEdit(DialogModifierPersonnel);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        verticalLayout->addWidget(lineEditNom);

        label_6 = new QLabel(DialogModifierPersonnel);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        lineEditPrenom = new QLineEdit(DialogModifierPersonnel);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        verticalLayout->addWidget(lineEditPrenom);

        label_8 = new QLabel(DialogModifierPersonnel);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        lineEditMail = new QLineEdit(DialogModifierPersonnel);
        lineEditMail->setObjectName(QStringLiteral("lineEditMail"));

        verticalLayout->addWidget(lineEditMail);

        label_7 = new QLabel(DialogModifierPersonnel);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        lineEditTel = new QLineEdit(DialogModifierPersonnel);
        lineEditTel->setObjectName(QStringLiteral("lineEditTel"));

        verticalLayout->addWidget(lineEditTel);

        label_10 = new QLabel(DialogModifierPersonnel);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        lineEditRue = new QLineEdit(DialogModifierPersonnel);
        lineEditRue->setObjectName(QStringLiteral("lineEditRue"));

        verticalLayout->addWidget(lineEditRue);

        label_9 = new QLabel(DialogModifierPersonnel);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        lineEditVille = new QLineEdit(DialogModifierPersonnel);
        lineEditVille->setObjectName(QStringLiteral("lineEditVille"));

        verticalLayout->addWidget(lineEditVille);

        label_11 = new QLabel(DialogModifierPersonnel);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        lineEditCp = new QLineEdit(DialogModifierPersonnel);
        lineEditCp->setObjectName(QStringLiteral("lineEditCp"));

        verticalLayout->addWidget(lineEditCp);

        comboBox = new QComboBox(DialogModifierPersonnel);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        buttonBox = new QDialogButtonBox(DialogModifierPersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        lineEditNom->raise();
        lineEditPrenom->raise();
        lineEditMail->raise();
        lineEditTel->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        lineEditCp->raise();
        lineEditVille->raise();
        lineEditRue->raise();
        comboBox->raise();

        retranslateUi(DialogModifierPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogModifierPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogModifierPersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogModifierPersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogModifierPersonnel)
    {
        DialogModifierPersonnel->setWindowTitle(QApplication::translate("DialogModifierPersonnel", "Modifier Personnel", 0));
        label_4->setText(QApplication::translate("DialogModifierPersonnel", "Nom :", 0));
        label_6->setText(QApplication::translate("DialogModifierPersonnel", "Prenom :", 0));
        label_8->setText(QApplication::translate("DialogModifierPersonnel", "Mail :", 0));
        label_7->setText(QApplication::translate("DialogModifierPersonnel", "Tel :", 0));
        label_10->setText(QApplication::translate("DialogModifierPersonnel", "Rue :", 0));
        label_9->setText(QApplication::translate("DialogModifierPersonnel", "Ville :", 0));
        label_11->setText(QApplication::translate("DialogModifierPersonnel", "Cp :", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DialogModifierPersonnel", "Gestionnaire", 0)
         << QApplication::translate("DialogModifierPersonnel", "Controleur", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class DialogModifierPersonnel: public Ui_DialogModifierPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFIERPERSONNEL_H
