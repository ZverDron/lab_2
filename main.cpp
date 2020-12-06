#include "mainwindow.h"
#include <QApplication> //подключили заголовочные файлы с определениямиклассов QApplication (приложение)
#include <QPushButton> // QPushButton (кнопка)
#include <QLabel> // QLabel (надпись)
#include <QFile> // QFile (класс для проведения операций с файлами)
#include <QBuffer> // QBuffer (позволяет записывать и считывать данные вмассив QByteArray, как будто бы это устройство или файл)
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
//    MainWindow w;
//    w.show();
    QByteArray arr;
    QBuffer buffer(&arr);
    buffer.open(QIODevice::WriteOnly);
    QDataStream out(&buffer);
    out << QString("1111");
    qDebug()<<arr;

    return app.exec();
}
