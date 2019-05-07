#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QProcess>
namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_salir_but_clicked();

    void on_conectar_but_clicked();

    void on_acerca_but_clicked();

    void on_enviar_but_clicked();

    void on_esritura_returnPressed();
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);
    void processReadyRead();
    void processerror(QProcess::ProcessError  processerror);

    void on_configurar_but_clicked();

private:
    Ui::MainWindow *ui;
    bool Connect_;
    QProcess process_;
};

#endif // MAINWINDOW_H
