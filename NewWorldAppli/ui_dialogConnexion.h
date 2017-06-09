/********************************************************************************
** Form generated from reading UI file 'dialogConnexion.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNEXION_H
#define UI_DIALOGCONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogConnexion
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QLineEdit *lineEditIp;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *lineEditLogin;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLineEdit *lineEditMdp;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *DialogConnexion)
    {
        if (DialogConnexion->objectName().isEmpty())
            DialogConnexion->setObjectName(QStringLiteral("DialogConnexion"));
        DialogConnexion->resize(405, 197);
        DialogConnexion->setMinimumSize(QSize(405, 197));
        DialogConnexion->setMaximumSize(QSize(405, 202));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogConnexion->setWindowIcon(icon);
        gridLayout = new QGridLayout(DialogConnexion);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(DialogConnexion);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label = new QLabel(DialogConnexion);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_4 = new QLabel(DialogConnexion);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditIp = new QLineEdit(DialogConnexion);
        lineEditIp->setObjectName(QStringLiteral("lineEditIp"));

        horizontalLayout_4->addWidget(lineEditIp);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(DialogConnexion);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditLogin = new QLineEdit(DialogConnexion);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        horizontalLayout_2->addWidget(lineEditLogin);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(DialogConnexion);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditMdp = new QLineEdit(DialogConnexion);
        lineEditMdp->setObjectName(QStringLiteral("lineEditMdp"));
        lineEditMdp->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEditMdp);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(DialogConnexion);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogConnexion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogConnexion, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogConnexion);
    } // setupUi

    void retranslateUi(QDialog *DialogConnexion)
    {
        DialogConnexion->setWindowTitle(QApplication::translate("DialogConnexion", "New World", 0));
        label->setText(QApplication::translate("DialogConnexion", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">NEW WORLD</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("DialogConnexion", "Server :", 0));
        label_2->setText(QApplication::translate("DialogConnexion", "Login :", 0));
        lineEditLogin->setText(QApplication::translate("DialogConnexion", "Controleur", 0));
        label_3->setText(QApplication::translate("DialogConnexion", "Password :", 0));
        lineEditMdp->setText(QApplication::translate("DialogConnexion", "ini01", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogConnexion: public Ui_DialogConnexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNEXION_H
