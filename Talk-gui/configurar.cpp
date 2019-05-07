#include <QFileDialog>
#include <QtGlobal>
#include<QMessageBox>
#include<QSettings>

#include "configurar.h"
#include "ui_configurar.h"

Configurar::Configurar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configurar)
{
    ui->setupUi(this);

    QSettings settings;
    ui->ruta_talk->setText(settings.value("ruta_talk","").toString());
    ui->activar_servidor->setChecked(settings.value("activar_servidor",false).toBool());
    ui->direc_server->setText(settings.value("direc_server","127.0.0.1").toString());
    ui->puerto->setValue(settings.value("puerto",8000).toInt());
    QByteArray username= qgetenv("USER");
    if(!username.isNull()){
        ui->usuario ->setText(settings.value("username",username).toString());
    }else{
        ui->usuario ->setText(settings.value("username","").toString());
    }
}

Configurar::~Configurar()
{
    delete ui;
}

void Configurar::done(int r)
{
    if(r== QDialog::Accepted){
        if(ui->ruta_talk->text().isEmpty()){
            QMessageBox::critical(this,"Talk", "Se necesita una ruta al programa talk." );
            return;
        }else{
            if(! ui->activar_servidor->isChecked() && ui->direc_server->text().isEmpty()){
                QMessageBox::critical(this,"Talk", "Se necesita la direcion del servidor." );
                return;
            }else{
                QSettings configuracion;
                configuracion.setValue("ruta_talk",ui->ruta_talk->text());
                configuracion.setValue("activar_servidor",ui->activar_servidor->isChecked());
                configuracion.setValue("direc_server", ui->direc_server->text());
                configuracion.setValue("puerto",ui->puerto->value());
                QString user(ui->usuario->text());
                if(user.isEmpty()){
                   configuracion.remove("username");
                }else{
                    configuracion.setValue("username",user);
                }
                QDialog::done(r);
                return;
            }
        }
    } else{
        QDialog::done(r);
    }
}

void Configurar::on_examinar_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this);
    if(!filename.isNull()){
        ui->ruta_talk->setText(filename);
    }
}

void Configurar::on_activar_servidor_toggled(bool checked)
{
   ui->direc_server ->setDisabled(checked);
   ui->etiqueta_server->setDisabled(checked);
}
