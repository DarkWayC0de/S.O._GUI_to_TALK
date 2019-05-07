/********************************************************************************
** Form generated from reading UI file 'acerca.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCA_H
#define UI_ACERCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Acerca
{
public:
    QDialogButtonBox *volver;
    QLabel *label;

    void setupUi(QDialog *Acerca)
    {
        if (Acerca->objectName().isEmpty())
            Acerca->setObjectName(QString::fromUtf8("Acerca"));
        Acerca->setWindowModality(Qt::NonModal);
        Acerca->resize(400, 300);
        Acerca->setMinimumSize(QSize(400, 300));
        Acerca->setMaximumSize(QSize(400, 300));
        Acerca->setSizeGripEnabled(false);
        Acerca->setModal(false);
        volver = new QDialogButtonBox(Acerca);
        volver->setObjectName(QString::fromUtf8("volver"));
        volver->setGeometry(QRect(30, 240, 351, 61));
        volver->setOrientation(Qt::Horizontal);
        volver->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(Acerca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 16, 371, 231));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        retranslateUi(Acerca);
        QObject::connect(volver, SIGNAL(accepted()), Acerca, SLOT(accept()));
        QObject::connect(volver, SIGNAL(rejected()), Acerca, SLOT(reject()));

        QMetaObject::connectSlotsByName(Acerca);
    } // setupUi

    void retranslateUi(QDialog *Acerca)
    {
        Acerca->setWindowTitle(QApplication::translate("Acerca", "Acerca de Talk  GUI", nullptr));
        label->setText(QApplication::translate("Acerca", "<html><head/><body><p><span style=\" font-weight:600;\">Talk GUI</span><br/>Interfaz Grafica</p><p><br/></p><p>Autor</p><p>Diego Cruz Rodu\303\255guez</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acerca: public Ui_Acerca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCA_H
