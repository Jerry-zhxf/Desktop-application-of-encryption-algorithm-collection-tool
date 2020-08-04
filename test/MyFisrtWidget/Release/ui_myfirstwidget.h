/********************************************************************************
** Form generated from reading UI file 'myfirstwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTWIDGET_H
#define UI_MYFIRSTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_3;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_18;
    QLabel *label_36;
    QComboBox *comboBox_6;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit_4;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QTextEdit *textEdit_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_17;
    QLabel *label_40;
    QLabel *label_12;
    QComboBox *comboBox_2;
    QWidget *tab;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QTextEdit *textEdit_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_19;
    QLabel *label_37;
    QLabel *label_17;
    QLineEdit *lineEdit_22;
    QLabel *label_35;
    QGroupBox *groupBox_7;
    QTextEdit *textEdit_6;
    QComboBox *comboBox_3;
    QWidget *tab_3;
    QGroupBox *groupBox_8;
    QLineEdit *lineEdit_8;
    QLabel *label_18;
    QTextEdit *textEdit_7;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_20;
    QLabel *label_38;
    QLabel *label_22;
    QGroupBox *groupBox_9;
    QTextEdit *textEdit_8;
    QComboBox *comboBox_4;
    QWidget *tab_4;
    QGroupBox *groupBox_12;
    QLineEdit *lineEdit_12;
    QLabel *label_28;
    QTextEdit *textEdit_11;
    QLabel *label_29;
    QLabel *label_31;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_21;
    QLabel *label_39;
    QLabel *label_32;
    QGroupBox *groupBox_13;
    QTextEdit *textEdit_12;
    QComboBox *comboBox_5;
    QWidget *tab_5;
    QGroupBox *groupBox_10;
    QLineEdit *lineEdit_10;
    QLabel *label_23;
    QTextEdit *textEdit_9;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_11;
    QLabel *label_27;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_16;
    QGroupBox *groupBox_11;
    QLineEdit *lineEdit_15;
    QLabel *label_26;
    QPushButton *pushButton_8;
    QTextEdit *textEdit_10;
    QLabel *label_33;
    QLabel *label_34;
    QTextEdit *textEdit_13;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *MyFirstWidget)
    {
        if (MyFirstWidget->objectName().isEmpty())
            MyFirstWidget->setObjectName(QStringLiteral("MyFirstWidget"));
        MyFirstWidget->resize(1032, 767);
        MyFirstWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(MyFirstWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-5, 77, 1041, 691));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tab_1->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(tab_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 0, 471, 651));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        textEdit_3 = new QTextEdit(groupBox_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 30, 451, 601));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        textEdit_3->setPalette(palette);
        textEdit_3->setStyleSheet(QStringLiteral(""));
        textEdit_3->setOverwriteMode(false);
        groupBox_3 = new QGroupBox(tab_1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 0, 551, 651));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 60, 251, 41));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 350, 111, 21));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 170, 231, 41));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 370, 301, 171));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 180, 61, 21));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 240, 61, 20));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 290, 161, 31));
        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 230, 231, 41));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 231, 31));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 570, 141, 31));
        lineEdit_18 = new QLineEdit(groupBox_3);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(250, 120, 251, 41));
        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 120, 231, 31));
        label_36->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox_6 = new QComboBox(tab_1);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        comboBox_6->setGeometry(QRect(250, 290, 111, 41));
        comboBox_6->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(560, 0, 491, 631));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        textEdit_4 = new QTextEdit(groupBox_4);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(10, 30, 461, 601));
        textEdit_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 0, 551, 641));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_4 = new QLineEdit(groupBox_5);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(260, 60, 231, 41));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 350, 111, 21));
        textEdit_2 = new QTextEdit(groupBox_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(200, 360, 301, 171));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 160, 471, 61));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 220, 151, 31));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 290, 161, 20));
        lineEdit_6 = new QLineEdit(groupBox_5);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(260, 220, 221, 41));
        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 560, 141, 31));
        lineEdit_17 = new QLineEdit(groupBox_5);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(260, 120, 231, 41));
        label_40 = new QLabel(groupBox_5);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 120, 231, 31));
        label_40->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 60, 231, 31));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(260, 280, 111, 41));
        comboBox_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 561, 641));
        groupBox_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_5 = new QLineEdit(groupBox_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 60, 231, 41));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 380, 111, 21));
        textEdit_5 = new QTextEdit(groupBox_6);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(210, 390, 301, 171));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 150, 161, 61));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 200, 221, 41));
        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(80, 320, 161, 20));
        lineEdit_7 = new QLineEdit(groupBox_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(260, 200, 221, 41));
        pushButton_3 = new QPushButton(groupBox_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 580, 141, 31));
        lineEdit_19 = new QLineEdit(groupBox_6);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(260, 120, 231, 41));
        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(10, 120, 231, 31));
        label_37->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 60, 231, 31));
        label_17->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_22 = new QLineEdit(groupBox_6);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(260, 250, 221, 41));
        label_35 = new QLabel(groupBox_6);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 250, 221, 41));
        groupBox_7 = new QGroupBox(tab);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(560, 0, 491, 641));
        groupBox_7->setStyleSheet(QStringLiteral(""));
        textEdit_6 = new QTextEdit(groupBox_7);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(10, 30, 461, 601));
        textEdit_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(260, 310, 111, 41));
        comboBox_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_8 = new QGroupBox(tab_3);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(0, 0, 571, 651));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_8 = new QLineEdit(groupBox_8);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(260, 60, 231, 41));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 360, 111, 21));
        textEdit_7 = new QTextEdit(groupBox_8);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(210, 370, 301, 171));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 170, 471, 61));
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(80, 240, 151, 31));
        label_21 = new QLabel(groupBox_8);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(80, 310, 161, 20));
        lineEdit_9 = new QLineEdit(groupBox_8);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(260, 240, 221, 41));
        pushButton_4 = new QPushButton(groupBox_8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 580, 141, 31));
        lineEdit_20 = new QLineEdit(groupBox_8);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(260, 120, 231, 41));
        label_38 = new QLabel(groupBox_8);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(10, 120, 231, 31));
        label_38->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 60, 231, 31));
        label_22->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_9 = new QGroupBox(tab_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(580, 0, 451, 641));
        groupBox_9->setStyleSheet(QStringLiteral(""));
        textEdit_8 = new QTextEdit(groupBox_9);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(10, 40, 431, 591));
        comboBox_4 = new QComboBox(tab_3);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(260, 300, 111, 41));
        comboBox_4->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_12 = new QGroupBox(tab_4);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(0, 0, 571, 651));
        groupBox_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_12 = new QLineEdit(groupBox_12);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(260, 60, 231, 41));
        label_28 = new QLabel(groupBox_12);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(70, 350, 111, 21));
        textEdit_11 = new QTextEdit(groupBox_12);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setGeometry(QRect(200, 360, 301, 201));
        label_29 = new QLabel(groupBox_12);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 190, 551, 61));
        label_31 = new QLabel(groupBox_12);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(80, 280, 161, 20));
        pushButton_6 = new QPushButton(groupBox_12);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 590, 141, 31));
        lineEdit_21 = new QLineEdit(groupBox_12);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(260, 120, 231, 41));
        label_39 = new QLabel(groupBox_12);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, 120, 231, 31));
        label_39->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_32 = new QLabel(groupBox_12);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 60, 231, 31));
        label_32->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_13 = new QGroupBox(tab_4);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(570, 0, 471, 651));
        groupBox_13->setStyleSheet(QStringLiteral(""));
        textEdit_12 = new QTextEdit(groupBox_13);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setGeometry(QRect(10, 40, 451, 601));
        textEdit_12->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        comboBox_5 = new QComboBox(tab_4);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(260, 270, 111, 41));
        comboBox_5->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_10 = new QGroupBox(tab_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(0, 0, 551, 651));
        groupBox_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 237);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_10 = new QLineEdit(groupBox_10);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(200, 70, 231, 41));
        label_23 = new QLabel(groupBox_10);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(70, 360, 91, 21));
        textEdit_9 = new QTextEdit(groupBox_10);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(190, 360, 301, 171));
        label_24 = new QLabel(groupBox_10);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(40, 140, 231, 51));
        label_25 = new QLabel(groupBox_10);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(70, 220, 81, 31));
        lineEdit_11 = new QLineEdit(groupBox_10);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(190, 220, 221, 41));
        label_27 = new QLabel(groupBox_10);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(40, 70, 151, 31));
        pushButton_5 = new QPushButton(groupBox_10);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(190, 570, 141, 31));
        pushButton_7 = new QPushButton(groupBox_10);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(180, 290, 141, 31));
        lineEdit_14 = new QLineEdit(groupBox_10);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(340, 550, 201, 51));
        lineEdit_16 = new QLineEdit(groupBox_10);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(450, 70, 81, 41));
        groupBox_11 = new QGroupBox(tab_5);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(560, 0, 491, 651));
        groupBox_11->setStyleSheet(QStringLiteral("background-color: rgb(255, 245, 237);"));
        lineEdit_15 = new QLineEdit(groupBox_11);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(50, 90, 381, 51));
        label_26 = new QLabel(groupBox_11);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 50, 151, 21));
        pushButton_8 = new QPushButton(groupBox_11);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(160, 170, 131, 40));
        textEdit_10 = new QTextEdit(groupBox_11);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(50, 270, 381, 71));
        label_33 = new QLabel(groupBox_11);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 230, 131, 21));
        label_34 = new QLabel(groupBox_11);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(20, 370, 99, 21));
        textEdit_13 = new QTextEdit(groupBox_11);
        textEdit_13->setObjectName(QStringLiteral("textEdit_13"));
        textEdit_13->setGeometry(QRect(50, 400, 381, 191));
        tabWidget->addTab(tab_5, QString());
        groupBox = new QGroupBox(MyFirstWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(2, -4, 1031, 81));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 150, 115);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 20, 211, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(680, 20, 271, 31));

        retranslateUi(MyFirstWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MyFirstWidget);
    } // setupUi

    void retranslateUi(QWidget *MyFirstWidget)
    {
        MyFirstWidget->setWindowTitle(QApplication::translate("MyFirstWidget", "Test", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MyFirstWidget", "\347\233\270\345\205\263\347\237\245\350\257\206", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MyFirstWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">\344\273\277\345\260\204\345\257\206\347\240\201\347\232\204\345\212\240\345\257\206\345\207\275\346\225\260\346\230\257 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font"
                        "-weight:600; background-color:#ffffff;\">	E(x)=(kx+b)(modm)\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">\345\205\266\344\270\255</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">    x\350\241\250\347\244\272\346\230\216\346\226\207\346\214\211\347\205\247\346\237\220\347\247\215\347\274\226\347\240\201\345\276\227\345\210\260\347\232\204\346\225\260\345\255\227</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">    k\345\222\214m\344\272\222\350\264\250</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">    m\346\230\257\347\274\226\347\240\201\347\263\273\347\273\237\344\270\255\345\255\227\346\257\215\347\232\204\346\225\260\347\233\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">\350\247\243\345\257\206\345\207\275\346\225\260\346\230\257 </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">	D(x)=k^(\342\210\2221)(x\342\210\222b)(modm)\357"
                        "\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; background-color:#ffffff;\">\345\205\266\344\270\255 k^(\342\210\2221) \346\230\257 k \345\234\250 Zm\347\276\244\347\232\204\344\271\230\346\263\225\351\200\206\345\205\203\343\200\202</span></p></body></html>", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\225\214\351\235\242", Q_NULLPTR));
        label_7->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyFirstWidget", "\345\257\206\351\222\245k", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyFirstWidget", "\345\257\206\351\222\245b", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyFirstWidget", "\351\200\211\346\213\251\345\212\240\350\247\243\345\257\206\346\226\271\345\274\217", Q_NULLPTR));
        label->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244-\345\274\200\345\247\213", Q_NULLPTR));
        label_36->setText(QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MyFirstWidget", "\344\273\277\345\260\204\345\212\240\345\257\206", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MyFirstWidget", "\347\233\270\345\205\263\347\237\245\350\257\206", Q_NULLPTR));
        textEdit_4->setHtml(QApplication::translate("MyFirstWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">RC4\347\232\204\345\216\237\347\220\206\345\210\206\344\270\272\345\233\233\346\255\245\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">1\343\200\201\345\210\235\345\247\213\345\214\226S\345\222\214T</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weigh"
                        "t:600;\">for i=0 to 255 do</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   S[i]=i;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   T[i]=K[ imodkeylen ];</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">2\343\200\201\345\210\235\345\247\213\346\216\222\345\210\227S</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">j=0;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">for i=0 to 255 do</span></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   j= ( j+S[i]+T[i])mod256;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   swap(S[i],S[j]);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">3\343\200\201\344\272\247\347\224\237\345\257\206\351\222\245\346\265\201</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">i,j=0;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">for r=0 to len do  //r\344\270\272\346\230\216\346\226\207\351\225\277\345"
                        "\272\246\357\274\214r\345\255\227\350\212\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   i=(i+1) mod 256;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   j=(j+S[i])mod 256;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   swap(S[i],S[j]);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   t=(S[i]+S[j])mod 256;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   k[r]=S[t];</span></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">4\343\200\201\345\212\240\350\247\243\345\257\206     </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">   bits[i]^k[i]</span></p></body></html>", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\225\214\351\235\242", Q_NULLPTR));
        label_8->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        label_9->setText(QApplication::translate("MyFirstWidget", "\346\217\220\347\244\272\357\274\232\345\257\206\351\222\245\344\275\215\346\225\260\344\273\273\346\204\217\357\274\214\344\274\232\350\241\245\345\205\250\346\210\226\350\200\205\345\210\240\351\231\244\345\210\260256\345\255\227\350\212\202", Q_NULLPTR));
        label_10->setText(QApplication::translate("MyFirstWidget", "RC4\345\212\240\350\247\243\345\257\206\345\257\206\351\222\245", Q_NULLPTR));
        label_11->setText(QApplication::translate("MyFirstWidget", "\351\200\211\346\213\251\345\212\240\350\247\243\345\257\206\346\226\271\345\274\217", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244-\345\274\200\345\247\213", Q_NULLPTR));
        label_40->setText(QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_12->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MyFirstWidget", "\346\265\201\345\212\240\345\257\206RC4", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\225\214\351\235\242", Q_NULLPTR));
        label_13->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        label_14->setText(QApplication::translate("MyFirstWidget", "\346\217\220\347\244\272\357\274\232\345\257\206\351\222\2458\344\275\215", Q_NULLPTR));
        label_15->setText(QApplication::translate("MyFirstWidget", "LSFR+J-K\345\212\240\350\247\243\345\257\206\345\257\206\351\222\245k1", Q_NULLPTR));
        label_16->setText(QApplication::translate("MyFirstWidget", "\351\200\211\346\213\251\345\212\240\350\247\243\345\257\206\346\226\271\345\274\217", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244-\345\274\200\345\247\213", Q_NULLPTR));
        label_37->setText(QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_17->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_35->setText(QApplication::translate("MyFirstWidget", "LSFR+J-K\345\212\240\350\247\243\345\257\206\345\257\206\351\222\245k2", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MyFirstWidget", "\347\233\270\345\205\263\347\237\245\350\257\206", Q_NULLPTR));
        textEdit_6->setHtml(QApplication::translate("MyFirstWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">J-K\350\247\246\345\217\221\345\231\250\357\274\2322\344\270\252LFSR\344\275\234\344\270\272\350\276\223\345\205\245\357\274\233</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'-"
                        "apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\351\202\243\345\260\261\350\260\210\350\260\210\347\272\277\346\200\247\345\217\215\351\246\210\347\247\273\344\275\215\345\257\204\345\255\230\345\231\250\357\274\210LFSR\357\274\211\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-s"
                        "ize:10pt; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\344\270\200\344\270\252n\351\230\266\345\217\215\351\246\210\345\257\204\345\255\230\345\231\250\357\274\214\347\224\261n\344\270\252\344\272\214\345\205\203\345\257\204\345\255\230\345\231\250\345\222\214\344\270\200\344\270\252\345\217\215\351\246\210\345\207\275\346\225\260\347\273\204\346\210\220\343\200\202\350\277\231n\344\270\252\345\257\204\345\255\230\345\231\250\347\232\204\345\206\205\345\256\271\346\211\200\345\275\242\346\210\220\347\232\204\345\220\221\351\207\217\345\215\263\344\270\272\346\255\244\346\227\266\347\212\266\346\200\201\343\200\202\346\211\200\344\273\245\345\205\266\346\234\2112n\344\270\252\347\212\266\346\200\201\343\200\202T\346\227\266\345\210\273LFSR\347\212\266\346\200\201\344\270\272st=\357\274\210at,at+1,\342\200\246at+n-1\357\274\211\357\274\214t+1\346\227\266\345\210\273\357\274\232st+1=\357\274\210at+1,at+2,\342\200\246,at+n\357\274\211\357\274\214\344\270\244\350\200\205\344\270\200\346\257\224\357\274"
                        "\214\345\217\221\347\216\260\344\270\244\347\202\271\344\270\215\345\220\214\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">1.\302\240\302\240\302\240 at\350\276\223\345\207\272\344\272\206\343\200\202\345\260\261\350\277\231\346\240\267\357\274\214\347\212\266\346\200\201\346\224\271\345\217\230\345\260\261\350\276\223\345\207\272\344\270\200\344\270"
                        "\252\357\274\214\346\210\220\344\272\206\350\276\223\345\207\272\345\272\217\345\210\227\343\200\202S0\346\230\257\345\217\212\345\257\204\345\255\230\345\231\250\347\232\204\345\210\235\345\247\213\347\212\266\346\200\201\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-size:10pt; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">2.\302\240\302\240\302\240 \345\244\232\344\272\206\344\270\252at+n\357\274\214\345"
                        "\205\266\346\261\202\346\263\225\357\274\232at+n=f\357\274\210at,at+1,\342\200\246at+n-1\357\274\211\343\200\202f\345\260\261\346\230\257\345\217\215\351\246\210\345\207\275\346\225\260\343\200\202\345\275\223f\347\232\204\350\277\220\347\256\227\344\270\272\346\250\2412\345\212\240\346\263\225\346\227\266\357\274\214\347\247\260\344\270\272\347\272\277\346\200\247\347\247\273\344\275\215\345\217\215\351\246\210\345\257\204\345\255\230\345\231\250\357\274\210LFSR\357\274\211\343\200\202</span></p></body></html>", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MyFirstWidget", "\346\265\201\345\212\240\345\257\206LFSR+J-K", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\225\214\351\235\242", Q_NULLPTR));
        label_18->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        label_19->setText(QApplication::translate("MyFirstWidget", "\346\217\220\347\244\272\357\274\232\345\257\271\347\247\260\345\257\206\351\222\245\344\270\2728\344\270\252\345\255\227\350\212\202(64\344\275\215)\357\274\214\346\230\216\345\257\206\346\226\20764\344\275\2151\347\273\204", Q_NULLPTR));
        label_20->setText(QApplication::translate("MyFirstWidget", "DES\345\212\240\350\247\243\345\257\206\345\257\206\351\222\245", Q_NULLPTR));
        label_21->setText(QApplication::translate("MyFirstWidget", "\351\200\211\346\213\251\345\212\240\350\247\243\345\257\206\346\226\271\345\274\217", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244-\345\274\200\345\247\213", Q_NULLPTR));
        label_38->setText(QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_22->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("MyFirstWidget", "\347\233\270\345\205\263\347\237\245\350\257\206", Q_NULLPTR));
        textEdit_8->setHtml(QApplication::translate("MyFirstWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f;\">DES\347\256\227\346\263\225\346\217\217\350\277\260</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang"
                        " SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">1)\343\200\201\350\276\223\345\205\24564\344\275\215\346\230\216\346\226\207\346\225\260\346\215\256\357\274\214\345\271\266\350\277\233\350\241\214\345\210\235\345\247\213\347\275\256\346\215\242IP\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">2)\343\200\201\345\234\250\345\210\235\345\247\213\347\275\256\346\215\242IP\345\220\216\357\274\214\346\230\216\346\226\207\346\225\260\346\215\256\345\206\215\350\242\253\345\210\206\344\270\272\345\267\246\345\217\263\344\270\244\351\203\250\345\210\206\357\274\214\346\257\217"
                        "\351\203\250\345\210\20632\344\275\215\357\274\214\344\273\245L0\357\274\214R0\350\241\250\347\244\272\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">3)\343\200\201\345\234\250\347\247\230\351\222\245\347\232\204\346\216\247\345\210\266\344\270\213\357\274\214\347\273\217\350\277\20716\350\275\256\350\277\220\347\256\227(f)\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'"
                        "; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">4)\343\200\20116\350\275\256\345\220\216\357\274\214\345\267\246\343\200\201\345\217\263\344\270\244\351\203\250\345\210\206\344\272\244\346\215\242\357\274\214\345\271\266\350\277\236\346\216\245\345\206\215\344\270\200\350\265\267\357\274\214\345\206\215\350\277\233\350\241\214\351\200\206\347\275\256\346\215\242\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">5)\343\200\201\350\276\223\345\207\27264\344\275\215\345\257\206\346\226\207\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; "
                        "background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f;\">DES\350\247\243\345\257\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\345\212\240\345\257\206\345\222\214\350\247\243\345\257\206\345\217\257\344\273\245\344\275\277\347\224\250\347\233\270\345\220\214\347\232\204\347\256\227\346\263\225\343\200\202\345\212\240\345\257\206\345\222\214\350\247\243\345\257\206\345\224\257\344\270\200\344\270\215\345\220\214\347\232\204\346\230\257\347\247\230\351\222\245\347\232\204\346\254\241\345\272\217\346\230\257\347\233"
                        "\270\345\217\215\347\232\204\343\200\202\345\260\261\346\230\257\350\257\264\345\246\202\346\236\234\346\257\217\344\270\200\350\275\256\347\232\204\345\212\240\345\257\206\347\247\230\351\222\245\345\210\206\345\210\253\346\230\257K1\343\200\201K2\343\200\201K3...K16\357\274\214\351\202\243\344\271\210\350\247\243\345\257\206\347\247\230\351\222\245\345\260\261\346\230\257K16\343\200\201K15\343\200\201K14...K1\343\200\202\344\270\272\346\257\217\344\270\200\350\275\256\344\272\247\347\224\237\347\247\230\351\222\245\347\232\204\347\256\227\346\263\225\344\271\237\346\230\257\345\276\252\347\216\257\347\232\204\343\200\202\345\212\240\345\257\206\346\230\257\347\247\230\351\222\245\345\276\252\347\216\257\345\267\246\347\247\273\357\274\214\350\247\243\345\257\206\346\230\257\347\247\230\351\222\245\345\276\252\347\216\257\345\217\263\347\247\273\343\200\202</span></p></body></html>", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MyFirstWidget", "\345\257\271\347\247\260\345\212\240\345\257\206DES", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\225\214\351\235\242", Q_NULLPTR));
        label_28->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        label_29->setText(QApplication::translate("MyFirstWidget", "\345\206\205\351\203\250\350\256\276\345\256\232\357\274\232\346\250\241\346\225\260\345\274\272\345\210\266\345\260\217\344\272\21616bits\357\274\214\346\230\216\345\257\206\346\226\207\351\225\277\345\272\246\345\217\257\345\244\247\344\272\21616bits", Q_NULLPTR));
        label_31->setText(QApplication::translate("MyFirstWidget", "\351\200\211\346\213\251\345\212\240\350\247\243\345\257\206\346\226\271\345\274\217", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244-\345\274\200\345\247\213", Q_NULLPTR));
        label_39->setText(QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_32->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\346\226\207\344\273\266\345\212\240\350\275\275/\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("MyFirstWidget", "\347\233\270\345\205\263\347\237\245\350\257\206", Q_NULLPTR));
        textEdit_12->setHtml(QApplication::translate("MyFirstWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">RSA\347\232\204\347\256\227\346\263\225\346\266\211\345\217\212\344\270\211\344\270\252\345\217\202\346\225\260\357\274\214n\343\200\201e1\343\200\201e2\343\200\202\345\205\266\344\270\255\357\274\214n\346\230\257\344\270\244\344\270\252\345\244\247\350\264\250\346\225\260"
                        "p\343\200\201q\347\232\204\347\247\257\357\274\214n\347\232\204\344\272\214\350\277\233\345\210\266\350\241\250\347\244\272\346\227\266\346\211\200\345\215\240\347\224\250\347\232\204\344\275\215\346\225\260\357\274\214\345\260\261\346\230\257\346\211\200\350\260\223\347\232\204\345\257\206\351\222\245\351\225\277\345\272\246\343\200\202e1\345\222\214e2\346\230\257\344\270\200\345\257\271\347\233\270\345\205\263\347\232\204\345\200\274\357\274\214e1\345\217\257\344\273\245\344\273\273\346\204\217\345\217\226\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\350\246\201\346\261\202e\344\270\216(p-1\357\274\211*(q-1\357\274\211\344\272\222\350\264\250</span><span "
                        "style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f;\">\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\345\206\215\351\200\211\346\213\251d\357\274\214\350\246\201\346\261\202\357\274\210d*e\357\274\211mod((p-1\357\274\211*(q-1\357\274\211\357\274\211=1\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsof"
                        "t YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\302\240\302\240\302\240\302\240\357\274\210n\357\274\214e\357\274\211,(n\357\274\214d\357\274\211\345\260\261\346\230\257\345\257\206\351\222\245\345\257\271\343\200\202\345\205\266\344\270\255(n\357\274\214e\357\274\211\344\270\272</span><a href=\"http://baike.baidu.com/view/355291.htm\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; text-decoration: underline; color:#6795b5;\">\345\205\254\351\222\245</span></a><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f;\">\357\274\214(n\357\274\214d\357\274\211\344\270\272\347\247\201\351\222\245\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\302\240\302\240\302\240\302\240RSA\345\212\240\350\247\243\345\257\206\347\232\204\347\256\227\346\263\225\345\256\214\345\205\250\347\233\270\345\220\214\357\274\214\350\256\276A\344\270\272\346\230\216\346\226\207\357\274\214B\344\270\272\345\257\206\346\226\207\357\274\214\345\210\231\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\302\240\302\240\302\240\302\240B=A^e"
                        "\302\240mod\302\240n\357\274\233   \302\240A=B^d\302\240mod\302\240n\357\274\233</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\345\205\254\351\222\245\345\212\240\345\257\206\344\275\223\345\210\266\344\270\255\357\274\214\344\270\200\350\210\254\347\224\250\345\205\254\351\222\245\345\212\240\345\257\206\357\274\214\347\247\201\351\222\245\350\247\243\345\257\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-s"
                        "erif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">e\345\222\214d\345\217\257\344\273\245\344\272\222\346\215\242\344\275\277\347\224\250\357\274\214\345\215\263\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:16px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:26px; background-color:#ffffff;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif,SimHei,SimSun'; font-weight:600; color:#4f4f4f; background-color:#ffffff;\">\302\240\302\240\302\240\302\240B=A^d\302\240mod\302\240n\357\274\233   \302\240A=B^e\302\240mod\302\240n;</span></p></body></html>", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206", Q_NULLPTR)
         << QApplication::translate("MyFirstWidget", "\350\247\243\345\257\206", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MyFirstWidget", "\351\235\236\345\257\271\347\247\260\345\212\240\345\257\206RSA", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MyFirstWidget", "\351\200\232\344\277\241\347\225\214\351\235\242", Q_NULLPTR));
        label_23->setText(QApplication::translate("MyFirstWidget", "\351\200\232\344\277\241\350\277\207\347\250\213", Q_NULLPTR));
        label_24->setText(QApplication::translate("MyFirstWidget", "\346\217\220\347\244\272\357\274\232\350\276\223\345\205\245\344\275\240\347\232\204x\346\210\226\350\200\205y", Q_NULLPTR));
        label_25->setText(QApplication::translate("MyFirstWidget", "\345\257\206\351\222\245x/y", Q_NULLPTR));
        label_27->setText(QApplication::translate("MyFirstWidget", "\347\233\256\346\240\207IP+\347\253\257\345\217\243", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MyFirstWidget", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MyFirstWidget", "\345\217\221\351\200\201", Q_NULLPTR));
        lineEdit_14->setText(QApplication::translate("MyFirstWidget", "\344\275\277\347\224\250\350\257\245\345\257\206\351\222\245\350\277\233\350\241\214\351\200\232\344\277\241", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("MyFirstWidget", "\346\225\260\346\215\256\345\212\240\350\247\243\345\257\206\344\274\240\351\200\201\345\217\243", Q_NULLPTR));
        label_26->setText(QApplication::translate("MyFirstWidget", "\351\234\200\345\212\240\345\257\206\344\274\240\350\276\223\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MyFirstWidget", "\345\217\221\351\200\201", Q_NULLPTR));
        label_33->setText(QApplication::translate("MyFirstWidget", "\345\212\240\345\257\206\350\277\207\347\250\213", Q_NULLPTR));
        label_34->setText(QApplication::translate("MyFirstWidget", "\350\201\212\345\244\251\345\206\205\345\256\271", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MyFirstWidget", "D-H\345\257\206\351\222\245\345\215\217\345\225\206\346\234\272\345\210\266", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("MyFirstWidget", "\345\212\240\350\247\243\345\257\206\344\270\207\350\203\275\345\267\245\345\205\267 v1.0", Q_NULLPTR));
        label_6->setText(QApplication::translate("MyFirstWidget", "\347\272\277\344\270\212\345\271\263\345\217\260\357\274\232www.xxx.com", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyFirstWidget: public Ui_MyFirstWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTWIDGET_H
