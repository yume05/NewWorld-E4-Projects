/********************************************************************************
** Form generated from reading UI file 'dialogmodifiertypeproduits.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFIERTYPEPRODUITS_H
#define UI_DIALOGMODIFIERTYPEPRODUITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogModifierTypeProduits
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxDeplacerTypeProduit;
    QLabel *label_3;
    QLineEdit *lineEditModifTextTypeProduit;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogModifierTypeProduits)
    {
        if (DialogModifierTypeProduits->objectName().isEmpty())
            DialogModifierTypeProduits->setObjectName(QStringLiteral("DialogModifierTypeProduits"));
        DialogModifierTypeProduits->resize(409, 253);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/docs/emblem-web.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogModifierTypeProduits->setWindowIcon(icon);
        gridLayout = new QGridLayout(DialogModifierTypeProduits);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogModifierTypeProduits);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(DialogModifierTypeProduits);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBoxDeplacerTypeProduit = new QComboBox(DialogModifierTypeProduits);
        comboBoxDeplacerTypeProduit->setObjectName(QStringLiteral("comboBoxDeplacerTypeProduit"));

        gridLayout->addWidget(comboBoxDeplacerTypeProduit, 1, 1, 1, 1);

        label_3 = new QLabel(DialogModifierTypeProduits);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditModifTextTypeProduit = new QLineEdit(DialogModifierTypeProduits);
        lineEditModifTextTypeProduit->setObjectName(QStringLiteral("lineEditModifTextTypeProduit"));

        gridLayout->addWidget(lineEditModifTextTypeProduit, 2, 1, 1, 1);

        label_4 = new QLabel(DialogModifierTypeProduits);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DialogModifierTypeProduits);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);


        retranslateUi(DialogModifierTypeProduits);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogModifierTypeProduits, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogModifierTypeProduits, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogModifierTypeProduits);
    } // setupUi

    void retranslateUi(QDialog *DialogModifierTypeProduits)
    {
        DialogModifierTypeProduits->setWindowTitle(QApplication::translate("DialogModifierTypeProduits", "Modifier Type Produit", 0));
        label->setText(QApplication::translate("DialogModifierTypeProduits", "<html><head/><body><p><span style=\" font-weight:600;\">Change Product Type :</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("DialogModifierTypeProduits", "Rays :", 0));
        label_3->setText(QApplication::translate("DialogModifierTypeProduits", "Product Type", 0));
        label_4->setText(QApplication::translate("DialogModifierTypeProduits", "<html><head/><body><p><span style=\" font-style:italic; color:#d00606;\">The products will move with if you decide to </span></p><p><span style=\" font-style:italic; color:#d00606;\">move the product type elsewhere.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogModifierTypeProduits: public Ui_DialogModifierTypeProduits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFIERTYPEPRODUITS_H
