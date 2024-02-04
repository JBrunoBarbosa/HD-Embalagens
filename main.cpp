#include "MainWindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.setWindowIcon(QIcon(":/res/assets/image.png"));
    mainWindow.show();
    return app.exec();
}
