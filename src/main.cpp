#include "eestudio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EEStudio w;
    w.show();

    return a.exec();
}
