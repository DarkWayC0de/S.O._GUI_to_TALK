#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setOrganizationDomain("DarkWayC0de");
    QApplication::setOrganizationDomain("laforjadelhacker.com");
    QApplication::setApplicationName("Talk Gui");
    MainWindow w;
    w.show();

    return a.exec();
}
