#include "romanceclub.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RomanceClub w;
    w.show();
    return a.exec();
}
