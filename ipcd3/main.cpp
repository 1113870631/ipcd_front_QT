#include "widget.h"

#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QFile file(QString(":/Ubuntu.qss"));
    file.open(QFile::ReadOnly);
    QString css = QLatin1String(file.readAll());
    w.setStyleSheet(css);
    w.show();
    return a.exec();
}
