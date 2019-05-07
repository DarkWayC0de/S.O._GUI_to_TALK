/********************************************************************************
** Form generated from reading UI file 'configurar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURAR_H
#define UI_CONFIGURAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configurar
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ruta_talk;
    QPushButton *examinar;
    QCheckBox *activar_servidor;
    QLabel *etiqueta_server;
    QLineEdit *direc_server;
    QLineEdit *usuario;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *puerto;

    void setupUi(QDialog *Configurar)
    {
        if (Configurar->objectName().isEmpty())
            Configurar->setObjectName(QString::fromUtf8("Configurar"));
        Configurar->resize(400, 300);
        buttonBox = new QDialogButtonBox(Configurar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(Configurar);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ruta_talk = new QLineEdit(formLayoutWidget);
        ruta_talk->setObjectName(QString::fromUtf8("ruta_talk"));

        horizontalLayout->addWidget(ruta_talk);

        examinar = new QPushButton(formLayoutWidget);
        examinar->setObjectName(QString::fromUtf8("examinar"));

        horizontalLayout->addWidget(examinar);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        activar_servidor = new QCheckBox(formLayoutWidget);
        activar_servidor->setObjectName(QString::fromUtf8("activar_servidor"));

        formLayout->setWidget(2, QFormLayout::FieldRole, activar_servidor);

        etiqueta_server = new QLabel(formLayoutWidget);
        etiqueta_server->setObjectName(QString::fromUtf8("etiqueta_server"));

        formLayout->setWidget(3, QFormLayout::LabelRole, etiqueta_server);

        direc_server = new QLineEdit(formLayoutWidget);
        direc_server->setObjectName(QString::fromUtf8("direc_server"));

        formLayout->setWidget(3, QFormLayout::FieldRole, direc_server);

        usuario = new QLineEdit(formLayoutWidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        formLayout->setWidget(5, QFormLayout::FieldRole, usuario);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        puerto = new QSpinBox(formLayoutWidget);
        puerto->setObjectName(QString::fromUtf8("puerto"));
        puerto->setMinimum(1025);
        puerto->setMaximum(65525);
        puerto->setValue(8000);

        formLayout->setWidget(4, QFormLayout::FieldRole, puerto);


        retranslateUi(Configurar);
        QObject::connect(buttonBox, SIGNAL(accepted()), Configurar, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Configurar, SLOT(reject()));

        QMetaObject::connectSlotsByName(Configurar);
    } // setupUi

    void retranslateUi(QDialog *Configurar)
    {
        Configurar->setWindowTitle(QApplication::translate("Configurar", "Dialog", nullptr));
        label->setText(QApplication::translate("Configurar", "Ruta Talk", nullptr));
        examinar->setText(QApplication::translate("Configurar", "Examinar...", nullptr));
        activar_servidor->setText(QApplication::translate("Configurar", " Modo Servidor", nullptr));
        etiqueta_server->setText(QApplication::translate("Configurar", "Direcci\303\263n del servidor", nullptr));
        direc_server->setText(QApplication::translate("Configurar", " 127.0.0.1", nullptr));
        label_3->setText(QApplication::translate("Configurar", "Puerto del servidor", nullptr));
        label_4->setText(QApplication::translate("Configurar", "Nombre de Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configurar: public Ui_Configurar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURAR_H
