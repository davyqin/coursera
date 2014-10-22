
#include <QApplication>
#include <QSplashScreen>

#include <gui/Controller.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Controller controller;
    controller.activate();

    QPixmap pixmap(":/splash.png");
    QSplashScreen splash(pixmap);
    splash.show();

    return a.exec();
}
