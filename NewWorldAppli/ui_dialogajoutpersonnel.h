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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutPersonnel
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *lineEditRue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *lineEditVille;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLineEdit *lineEditCp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEditMail;
    QComboBox *comboBoxType;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEditTel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutPersonnel)
    {
        if (DialogAjoutPersonnel->objectName().isEmpty())
            DialogAjoutPersonnel->setObjectName(QStringLiteral("DialogAjoutPersonnel"));
        DialogAjoutPersonnel->resize(417, 315);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAjoutPersonnel->setWindowIcon(icon);
        gridLayout = new QGridLayout(DialogAjoutPersonnel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(DialogAjoutPersonnel);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogAjoutPersonnel);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditLogin = new QLineEdit(DialogAjoutPersonnel);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        horizontalLayout->addWidget(lineEditLogin);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_10 = new QLabel(DialogAjoutPersonnel);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        lineEditRue = new QLineEdit(DialogAjoutPersonnel);
        lineEditRue->setObjectName(QStringLiteral("lineEditRue"));

        horizontalLayout_6->addWidget(lineEditRue);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(DialogAjoutPersonnel);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEditNom = new QLineEdit(DialogAjoutPersonnel);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayout_2->addWidget(lineEditNom);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(DialogAjoutPersonnel);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        lineEditVille = new QLineEdit(DialogAjoutPersonnel);
        lineEditVille->setObjectName(QStringLiteral("lineEditVille"));

        horizontalLayout_7->addWidget(lineEditVille);


        gridLayout->addLayout(horizontalLayout_7, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(DialogAjoutPersonnel);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEditPrenom = new QLineEdit(DialogAjoutPersonnel);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayout_3->addWidget(lineEditPrenom);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_11 = new QLabel(DialogAjoutPersonnel);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_8->addWidget(label_11);

        lineEditCp = new QLineEdit(DialogAjoutPersonnel);
        lineEditCp->setObjectName(QStringLiteral("lineEditCp"));

        horizontalLayout_8->addWidget(lineEditCp);


        gridLayout->addLayout(horizontalLayout_8, 3, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(DialogAjoutPersonnel);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEditMail = new QLineEdit(DialogAjoutPersonnel);
        lineEditMail->setObjectName(QStringLiteral("lineEditMail"));

        horizontalLayout_4->addWidget(lineEditMail);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        comboBoxType = new QComboBox(DialogAjoutPersonnel);
        comboBoxType->setObjectName(QStringLiteral("comboBoxType"));

        gridLayout->addWidget(comboBoxType, 4, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(DialogAjoutPersonnel);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEditTel = new QLineEdit(DialogAjoutPersonnel);
        lineEditTel->setObjectName(QStringLiteral("lineEditTel"));

        horizontalLayout_5->addWidget(lineEditTel);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogAjoutPersonnel);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);


        retranslateUi(DialogAjoutPersonnel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutPersonnel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutPersonnel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutPersonnel);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutPersonnel)
    {
        DialogAjoutPersonnel->setWindowTitle(QApplication::translate("DialogAjoutPersonnel", "Ajout Personnel", 0));
        label_2->setText(QApplication::translate("DialogAjoutPersonnel", "<html><head/><body><p><span style=\" font-weight:600;\">Adding staff :</span></p></body></html>", 0));
        label->setText(QApplication::translate("DialogAjoutPersonnel", "Login :", 0));
        label_10->setText(QApplication::translate("DialogAjoutPersonnel", "Address :", 0));
        label_4->setText(QApplication::translate("DialogAjoutPersonnel", "Last name :", 0));
        label_9->setText(QApplication::translate("DialogAjoutPersonnel", "City", 0));
        label_6->setText(QApplication::translate("DialogAjoutPersonnel", "First name :", 0));
        label_11->setText(QApplication::translate("DialogAjoutPersonnel", "Zip Code", 0));
        label_8->setText(QApplication::translate("DialogAjoutPersonnel", "Mail :", 0));
        comboBoxType->clear();
        comboBoxType->insertItems(0, QStringList()
         << QApplication::translate("DialogAjoutPersonnel", "Gestionnaire", 0)
         << QApplication::translate("DialogAjoutPersonnel", "Controleur", 0)
        );
        label_7->setText(QApplication::translate("DialogAjoutPersonnel", "Phone :", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutPersonnel: public Ui_DialogAjoutPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTPERSONNEL_H
