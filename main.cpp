#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Админ-панель ChatServer");
    w.resize(800, 500);
    w.show();
    return a.exec();
}


