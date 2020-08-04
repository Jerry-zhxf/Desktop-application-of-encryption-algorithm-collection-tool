#include "myfirstwidget.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyFirstWidget w;

    w.setWindowTitle("Wakanda");//设置窗体标题
    w.show();
    QIcon *ico = new QIcon(":/logo/iconfinder_Inkcontober_Squeak_2730365.ico");
    a.setWindowIcon(*ico);
    return a.exec();
}
