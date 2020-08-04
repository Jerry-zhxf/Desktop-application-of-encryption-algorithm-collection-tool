#ifndef MYFIRSTWIDGET_H
#define MYFIRSTWIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QLineEdit>
#include <QTextBrowser>

namespace Ui {
class MyFirstWidget;
}

class MyFirstWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyFirstWidget(QWidget *parent = 0);
    ~MyFirstWidget();

private slots:
    void pushButton_clicked();
    void pushButton1_clicked();
    void pushButton2_clicked();
    void pushButton3_clicked();
    void pushButton4_clicked();
    void pushButton5_clicked();
    void pushButton5_1_clicked();
    void MyRecive();//接收信息
    void MySend();//发送信息
    void openUrl(QString url);
    void open1();
    void open2();
    void open3();
    void open4();
    void open5();
    void open6();
    void open7();
    void open8();
    void open9();
    void open10();

private:
    Ui::MyFirstWidget *ui;
    QUdpSocket* _udp;//通信socket
    QLineEdit* _lineEdit;//行文本编辑框，编写要发送的信息
    QTextBrowser* _text;//展示接收到的信息
};

#endif // MYFIRSTWIDGET_H

