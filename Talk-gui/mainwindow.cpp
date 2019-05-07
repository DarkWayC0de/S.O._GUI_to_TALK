#include <iostream>
#include <iterator>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "acerca.h"
#include "QMessageBox"
#include "configurar.h"
#include <QSettings>


MainWindow::MainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWindow),
    Connect_(false),
    process_(this)
{
    ui->setupUi(this);

    connect(&process_,SIGNAL(readyReadStandardOutput()),SLOT(processReadyRead()));
    connect(&process_, SIGNAL(error(QProcess::ProcessError)),SLOT(processerror(QProcess::ProcessError)));
    connect(&process_,SIGNAL(finished(int,QProcess::ExitStatus)),SLOT(processFinished(int,QProcess::ExitStatus)));

}

MainWindow::~MainWindow()
{
    process_.disconnect();
    delete ui;
}

void MainWindow::on_salir_but_clicked()
{
   qApp->quit();
}

void MainWindow::on_conectar_but_clicked()
{
    if(Connect_){
        process_.terminate();
    }else{
        QSettings settings;
        QString ruta_talk =settings.value("ruta_talk").toString();
        bool activar_servidor =settings.value("activar_servidor",false).toBool();
        QString direc_server =settings.value("direc_server","127.0.0.1").toString();
        QString puerto =settings.value("puerto",8000).toString();
        QString username =settings.value("username", "").toString();
       QStringList argumentos;
       argumentos.append("-p " + puerto);
//       argumentos.append(puerto);
       if(!username.isEmpty()){
           argumentos.append("-u " + username);
//           argumentos.append(username);  la forma de los comentarios da error apesar de añadirlo en las anotaciones del video
       }
       if(activar_servidor){
            argumentos.append("-s");
       }else{
            argumentos.append("-c "+ direc_server);
//          argumentos.append(direc_server);
       }
        process_.start(ruta_talk,argumentos);
        ui->conectar_but->setText("Desconectar");
        Connect_=true;
    }
}

void MainWindow::on_acerca_but_clicked()
{
    Acerca dialog;
    dialog.exec();

}

void MainWindow::on_enviar_but_clicked()
{
    QString line =ui->esritura->text();
    ui->chat->appendPlainText(line);
    line += '\n';
    process_.write(line.toLocal8Bit());
    ui->esritura->clear();
}

void MainWindow::on_esritura_returnPressed()
{
    QString line =ui->esritura->text();
    ui->chat->appendPlainText(line);
    line += '\n';
    process_.write(line.toLocal8Bit());
    ui->esritura->clear();
}

void MainWindow::processFinished(int exitCode, QProcess::ExitStatus exitStatus)
{
    ui->conectar_but->setText("Conectar");
    Connect_=false;
    ui->chat->clear();
}

void MainWindow::processReadyRead()
{
    while(process_.canReadLine()){
        QString line= process_.readLine();
        line.truncate(line.length()-1);
        ui->chat->appendPlainText(line);
    }
}

void MainWindow::processerror(QProcess::ProcessError error)
{
    QMessageBox::critical(this,"Talk GUI","Error con tals.\n"+process_.errorString());
}

void MainWindow::on_configurar_but_clicked()
{
  Configurar dialog;
  dialog.exec();

}
