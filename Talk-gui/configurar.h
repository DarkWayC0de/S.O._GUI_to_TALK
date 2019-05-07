#ifndef CONFIGURAR_H
#define CONFIGURAR_H

#include <QDialog>

namespace Ui {
class Configurar;
}

class Configurar : public QDialog
{
    Q_OBJECT

public:
    explicit Configurar(QWidget *parent = nullptr);
    ~Configurar();
public slots:
    void done(int r);

private slots:
    void on_examinar_clicked();

    void on_activar_servidor_toggled(bool checked);


private:
    Ui::Configurar *ui;
};

#endif // CONFIGURAR_H
