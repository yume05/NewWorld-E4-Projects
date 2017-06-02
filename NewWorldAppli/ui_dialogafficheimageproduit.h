/********************************************************************************
** Form generated from reading UI file 'dialogafficheimageproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAFFICHEIMAGEPRODUIT_H
#define UI_DIALOGAFFICHEIMAGEPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAfficheImageProduit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QLabel *labelImage;

    void setupUi(QDialog *DialogAfficheImageProduit)
    {
        if (DialogAfficheImageProduit->objectName().isEmpty())
            DialogAfficheImageProduit->setObjectName(QStringLiteral("DialogAfficheImageProduit"));
        DialogAfficheImageProduit->resize(232, 290);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAfficheImageProduit->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogAfficheImageProduit);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(DialogAfficheImageProduit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/docs/edit-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        labelImage = new QLabel(DialogAfficheImageProduit);
        labelImage->setObjectName(QStringLiteral("labelImage"));

        verticalLayout->addWidget(labelImage);


        retranslateUi(DialogAfficheImageProduit);

        QMetaObject::connectSlotsByName(DialogAfficheImageProduit);
    } // setupUi

    void retranslateUi(QDialog *DialogAfficheImageProduit)
    {
        DialogAfficheImageProduit->setWindowTitle(QApplication::translate("DialogAfficheImageProduit", "Affiche image", 0));
        pushButton->setText(QString());
        labelImage->setText(QApplication::translate("DialogAfficheImageProduit", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAfficheImageProduit: public Ui_DialogAfficheImageProduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAFFICHEIMAGEPRODUIT_H
