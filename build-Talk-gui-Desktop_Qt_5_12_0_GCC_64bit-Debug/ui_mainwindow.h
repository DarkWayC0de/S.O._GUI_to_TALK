/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *chat;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *esritura;
    QPushButton *enviar_but;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *conectar_but;
    QPushButton *configurar_but;
    QPushButton *acerca_but;
    QPushButton *salir_but;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(855, 508);
        MainWindow->setMinimumSize(QSize(855, 508));
        QFont font;
        font.setFamily(QString::fromUtf8("Waree"));
        MainWindow->setFont(font);
        verticalLayoutWidget = new QWidget(MainWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 641, 481));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        chat = new QPlainTextEdit(verticalLayoutWidget);
        chat->setObjectName(QString::fromUtf8("chat"));
        chat->setReadOnly(true);

        verticalLayout_4->addWidget(chat);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        esritura = new QLineEdit(verticalLayoutWidget);
        esritura->setObjectName(QString::fromUtf8("esritura"));

        horizontalLayout_4->addWidget(esritura);

        enviar_but = new QPushButton(verticalLayoutWidget);
        enviar_but->setObjectName(QString::fromUtf8("enviar_but"));
        enviar_but->setAutoDefault(false);

        horizontalLayout_4->addWidget(enviar_but);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalLayoutWidget_2 = new QWidget(MainWindow);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(680, 10, 160, 491));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        conectar_but = new QPushButton(verticalLayoutWidget_2);
        conectar_but->setObjectName(QString::fromUtf8("conectar_but"));
        conectar_but->setAutoDefault(false);

        verticalLayout_5->addWidget(conectar_but);

        configurar_but = new QPushButton(verticalLayoutWidget_2);
        configurar_but->setObjectName(QString::fromUtf8("configurar_but"));
        configurar_but->setAutoDefault(false);

        verticalLayout_5->addWidget(configurar_but);

        acerca_but = new QPushButton(verticalLayoutWidget_2);
        acerca_but->setObjectName(QString::fromUtf8("acerca_but"));
        acerca_but->setAutoDefault(false);

        verticalLayout_5->addWidget(acerca_but);

        salir_but = new QPushButton(verticalLayoutWidget_2);
        salir_but->setObjectName(QString::fromUtf8("salir_but"));
        salir_but->setAutoDefault(false);

        verticalLayout_5->addWidget(salir_but);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TalK", nullptr));
        enviar_but->setText(QApplication::translate("MainWindow", "Enviar", nullptr));
        conectar_but->setText(QApplication::translate("MainWindow", "Conectar", nullptr));
        configurar_but->setText(QApplication::translate("MainWindow", "Configurar...", nullptr));
        acerca_but->setText(QApplication::translate("MainWindow", "Acerca de...", nullptr));
        salir_but->setText(QApplication::translate("MainWindow", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
