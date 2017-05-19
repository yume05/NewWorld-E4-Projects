/********************************************************************************
** Form generated from reading UI file 'dialogMenuPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMENUPRINCIPAL_H
#define UI_DIALOGMENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogMenuPrincipal
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelLogin;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButtonPaie;
    QPushButton *pushButtonGestionPersonnel;
    QPushButton *pushButtonRayon;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *DialogMenuPrincipal)
    {
        if (DialogMenuPrincipal->objectName().isEmpty())
            DialogMenuPrincipal->setObjectName(QStringLiteral("DialogMenuPrincipal"));
        DialogMenuPrincipal->resize(830, 566);
        buttonBox = new QDialogButtonBox(DialogMenuPrincipal);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(460, 510, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        labelLogin = new QLabel(DialogMenuPrincipal);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));
        labelLogin->setGeometry(QRect(690, 20, 67, 21));
        label_2 = new QLabel(DialogMenuPrincipal);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(520, 20, 151, 21));
        widget = new QWidget(DialogMenuPrincipal);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(290, 110, 187, 272));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButtonPaie = new QPushButton(widget);
        pushButtonPaie->setObjectName(QStringLiteral("pushButtonPaie"));

        verticalLayout->addWidget(pushButtonPaie);

        pushButtonGestionPersonnel = new QPushButton(widget);
        pushButtonGestionPersonnel->setObjectName(QStringLiteral("pushButtonGestionPersonnel"));

        verticalLayout->addWidget(pushButtonGestionPersonnel);

        pushButtonRayon = new QPushButton(widget);
        pushButtonRayon->setObjectName(QStringLiteral("pushButtonRayon"));

        verticalLayout->addWidget(pushButtonRayon);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);


        retranslateUi(DialogMenuPrincipal);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMenuPrincipal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMenuPrincipal, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMenuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *DialogMenuPrincipal)
    {
        DialogMenuPrincipal->setWindowTitle(QApplication::translate("DialogMenuPrincipal", "Dialog", 0));
        labelLogin->setText(QString());
        label_2->setText(QApplication::translate("DialogMenuPrincipal", "Connect\303\251 en tant que :", 0));
        label->setText(QApplication::translate("DialogMenuPrincipal", "--------Gestionnaire---------", 0));
        pushButtonPaie->setText(QApplication::translate("DialogMenuPrincipal", "Paie", 0));
        pushButtonGestionPersonnel->setText(QApplication::translate("DialogMenuPrincipal", "Gestion du personnel", 0));
        pushButtonRayon->setText(QApplication::translate("DialogMenuPrincipal", "Rentrer un rayon", 0));
        label_3->setText(QApplication::translate("DialogMenuPrincipal", "--------Controleur---------", 0));
        pushButton_4->setText(QApplication::translate("DialogMenuPrincipal", "PushButton", 0));
        pushButton_5->setText(QApplication::translate("DialogMenuPrincipal", "PushButton", 0));
        pushButton_6->setText(QApplication::translate("DialogMenuPrincipal", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogMenuPrincipal: public Ui_DialogMenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMENUPRINCIPAL_H
