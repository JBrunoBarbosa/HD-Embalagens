#include "../headers/mainwindow.h"
#include <QApplication>
#include <QIcon>

#ifdef MAIN_APP
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.setWindowIcon(QIcon(":/res/assets/image.png"));
    mainWindow.show();
    return app.exec();
}
#endif
