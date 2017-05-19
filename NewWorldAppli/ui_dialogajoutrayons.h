/********************************************************************************
** Form generated from reading UI file 'dialogajoutrayons.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGAJOUTRAYONS_H
#define UI_DIALOGAJOUTRAYONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogAjoutRayons
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAjoutRayons)
    {
        if (DialogAjoutRayons->objectName().isEmpty())
            DialogAjoutRayons->setObjectName(QStringLiteral("DialogAjoutRayons"));
        DialogAjoutRayons->resize(388, 166);
        buttonBox = new QDialogButtonBox(DialogAjoutRayons);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DialogAjoutRayons);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAjoutRayons, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAjoutRayons, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAjoutRayons);
    } // setupUi

    void retranslateUi(QDialog *DialogAjoutRayons)
    {
        DialogAjoutRayons->setWindowTitle(QApplication::translate("DialogAjoutRayons", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAjoutRayons: public Ui_DialogAjoutRayons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGAJOUTRAYONS_H
