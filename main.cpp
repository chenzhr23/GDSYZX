#include "qtWGCNA.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtWGCNA w;
    w.show();

    return a.exec();
}
