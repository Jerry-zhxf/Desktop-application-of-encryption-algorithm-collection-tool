#include "myfirstwidget.h"
#include "ui_myfirstwidget.h"
#include <QDebug>
#include <QDesktopServices>
#include <QTextCodec>
#include <QFileDialog>
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <fsfun.h>
#include <rc4fun.h>
#include <rsafun.h>
#include <lfsr_jkfun.h>
#include <dh_md5fun.h>
#include <desfun.h>
typedef long long lint;
using namespace std;
#define SINGLE_MAX 10000
#define EXPONENT_MAX 50
int an,ae,ad;
QString ip;
int localport,objectport;
QPushButton *sendBtn;

lint s_i(string s){
    int len=s.length()-1;
    int i=0;
    lint ans=0;
    while(s[i]!='\0'){
        ans+=int(s[i]-48)*pow(10,len);
        len--;
        i++;
    }
    return ans;
}

MyFirstWidget::MyFirstWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyFirstWidget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(pushButton_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(pushButton1_clicked()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(pushButton2_clicked()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(pushButton3_clicked()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(pushButton4_clicked()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(pushButton5_1_clicked()));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(pushButton5_clicked()));
    connect(ui->toolButton,SIGNAL(clicked(bool)),this,SLOT(open1()));
    connect(ui->toolButton_2,SIGNAL(clicked(bool)),this,SLOT(open2()));
    connect(ui->toolButton_3,SIGNAL(clicked(bool)),this,SLOT(open3()));
    connect(ui->toolButton_4,SIGNAL(clicked(bool)),this,SLOT(open4()));
    connect(ui->toolButton_5,SIGNAL(clicked(bool)),this,SLOT(open5()));
    connect(ui->toolButton_6,SIGNAL(clicked(bool)),this,SLOT(open6()));
    connect(ui->toolButton_7,SIGNAL(clicked(bool)),this,SLOT(open7()));
    connect(ui->toolButton_8,SIGNAL(clicked(bool)),this,SLOT(open8()));
    connect(ui->toolButton_9,SIGNAL(clicked(bool)),this,SLOT(open9()));
    connect(ui->toolButton_10,SIGNAL(clicked(bool)),this,SLOT(open10()));
    sendBtn = ui->pushButton_7;
    _text = ui->textBrowser_2;
    _udp = new QUdpSocket;
    //并连接槽函数，用来接收数据
    connect(_udp, SIGNAL(readyRead()),this, SLOT(MyRecive()));
    //连接发送信息的槽函数
    connect(sendBtn,SIGNAL(clicked()),this,SLOT(MySend()));
    ui->label_6->setText("<a style='color: black;'href=\"http://www.zhxlive.online\">线上平台:www.xxx.com</a>");
    connect(ui->label_6, SIGNAL(linkActivated(QString)), this, SLOT(openUrl(QString)));
}

MyFirstWidget::~MyFirstWidget()
{
    delete ui;
}

void MyFirstWidget::open1(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit->setText(fileName);
}
void MyFirstWidget::open2(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_18->setText(fileName);
}
void MyFirstWidget::open3(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_4->setText(fileName);
}
void MyFirstWidget::open4(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_17->setText(fileName);
}
void MyFirstWidget::open5(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_5->setText(fileName);
}
void MyFirstWidget::open6(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_19->setText(fileName);
}
void MyFirstWidget::open7(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_8->setText(fileName);
}
void MyFirstWidget::open8(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_20->setText(fileName);
}
void MyFirstWidget::open9(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_12->setText(fileName);
}
void MyFirstWidget::open10(){
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), ".",
                                                    tr("txt files (*.txt)"));
    if (!fileName.isEmpty())
        ui->lineEdit_21->setText(fileName);
}
void MyFirstWidget::openUrl(QString url)
{
QDesktopServices::openUrl(QUrl(url));
// //若是文件路径，则需使用下面的打开方式，具体可参见QUrl帮助文档
// QDesktopServices::openUrl(QUrl("file:///" + url, QUrl::TolerantMode));
}

//仿射加密
void MyFirstWidget::pushButton_clicked(){
    FSFUN fs;
    string str = ui->lineEdit->text().toStdString();
    string str1 = ui->lineEdit_18->text().toStdString();
    int k = ui->lineEdit_2->text().toInt();
    int b = ui->lineEdit_3->text().toInt();
    while(!fs.canshu(k)){
        ui->textEdit->setText("输入错误，请重新输入");
    }
    QString choice = ui->comboBox_6->currentText();
    QString result1;
    QString result2;
    string tem;
    string line;
    string mmw;
    string mmw1;

    if(choice == "加密"){
        ifstream in(str);

        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<str<<endl;
        cout<<mmw<<endl;
        fs.jiami(mmw, k, b, &tem);
        cout<<tem<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result1 = QString::fromLocal8Bit(tem.data());
        ui->textEdit->setText(choice+"结果为:"+result1);
    }else if(choice == "解密"){
        ifstream out(str1);

        if(out) // 有该文件
        {
            while (getline (out, line)) // line中不包括每行的换行符
            {
                mmw1+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<str1<<endl;
        cout<<mmw1<<endl;
        fs.jiemi(mmw1, k, b, &tem);
        ofstream in(str);

        if(in) // 有该文件
        {
            in<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result2 = QString::fromLocal8Bit(tem.data());
        ui->textEdit->setText(choice+"结果为:"+result2);
    }else{
        ifstream in(str);

        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<str<<endl;
        cout<<mmw<<endl;
        fs.jiami(mmw, k, b, &tem);
        cout<<tem<<endl;
        result1 = QString::fromLocal8Bit(tem.data());
        fs.jiemi(tem, k, b, &tem);
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result2 = QString::fromLocal8Bit(tem.data());
        ui->textEdit->setText("加密结果为:"+result1);
        ui->textEdit->append("解密结果为:"+result2);
    }


}

//RC4
void MyFirstWidget::pushButton1_clicked(){
    RC4FUN rc;
    string str = ui->lineEdit_4->text().toStdString();
    string str1 = ui->lineEdit_17->text().toStdString();
    string strkey = ui->lineEdit_6->text().toStdString();
    QString choice = ui->comboBox_2->currentText();
    QString result1;
    QString result2;
    string tem;
    string line;
    string mmw;
    string mmw1;
    if(choice == "加密"){
        ifstream in(str);

        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<str<<endl;
        cout<<mmw<<endl;
        rc.DataEncrypt(strkey, mmw, &tem);
        cout<<tem<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result1 = QString::fromLocal8Bit(tem.data());
        qDebug()<<result1;
        ui->textEdit_2->setText(choice+"结果为:"+result1);
    }else if(choice == "解密"){
        ifstream out(str1);

        if(out) // 有该文件
        {
            while (getline (out, line)) // line中不包括每行的换行符
            {
                mmw1+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<str1<<endl;
        cout<<mmw1<<endl;
        cout<<strkey<<endl;
        rc.DataDecrypt(strkey, mmw1, &tem);
        ofstream in(str);
        if(in) // 有该文件
        {
            in<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result2 = QString::fromLocal8Bit(tem.data());
        qDebug()<<result2;
        ui->textEdit_2->setText(choice+"结果为:"+result2);
    }else{
        ifstream in(str);

        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        rc.DataEncrypt(strkey, mmw, &tem);
        cout<<tem<<endl;
        result1 = QString::fromLocal8Bit(tem.data());
        qDebug()<<result1;
        rc.DataDecrypt(strkey, tem, &tem);
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<tem;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result2 = QString::fromLocal8Bit(tem.data());
        qDebug()<<result2;
        ui->textEdit_2->setText("加密结果为:"+result1);
        ui->textEdit_2->append("解密结果为:"+result2);
    }

}
//LFSR+J-K
void MyFirstWidget::pushButton2_clicked(){
    string str = ui->lineEdit_5->text().toStdString();
    string str1 = ui->lineEdit_19->text().toStdString();
    string strkey = ui->lineEdit_7->text().toStdString();
    string strkey1 = ui->lineEdit_22->text().toStdString();
    QString choice = ui->comboBox_3->currentText();
    QString result1,result2, result3, result4;
    LFSR_JKFUN lj;
    string tem1 = strkey;
    string tem2 = strkey1;
    string rt;
    string ton;
    char Q='0';
    do{
        char t1 = lj._2xor(tem1[7],tem1[0]);
        for(int i=7;i>0;i--){
            tem1[i]=tem1[i-1];
        }
        tem1[0]=t1;
        //cout<<tem1<<endl;
        char t2 = lj._2xor(tem2[7],tem2[0]);
        for(int i=7;i>0;i--){
            tem2[i]=tem2[i-1];
        }
        tem2[0]=t2;
        //cout<<tem2<<endl;
        char ch = lj._2xor(t1,t2);
        char ch1 = lj.nor(ch);
        char ch2 = lj.cx(ch1,Q);
        Q = lj._2xor(ch2, t1);
        rt+=Q;
    }while(strkey!=tem1&&strkey1!=tem2);
    rt+='$';
    lj._2to16(rt, &ton);
    //cout<<"LSFR+J-K:"<<ton<<endl;

    if(choice == "加密"){
        ifstream in(str);
        string line;
        string mmw;
        string answer;
        string answer1;
        string mw1;
        string ch;
        string result;
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        //cout<<mmw<<endl;
        char enre[2]={0};
        int len=mmw.length();
        for(int i=0;i<len;i++){
            lj.dc_16(mmw[i],enre);
            for(int j=0;j<2;j++){
                result+=enre[j];
            }
        }

        //cout<<"明文转16进制:"<<result<<endl;
        lj._16todc(result, &answer);
        //cout<<"16进程转明文"<<answer<<endl;
        int len1=result.length();
        int len2=ton.length();
        while(len2<len1){
            ton+=ton;
            len2=ton.length();
        }
        ch=ton.substr(0,len1);
        //a，b进行16进制异或
        lj.hexstrxor(result, ch, &answer1);
        //输出16进制密文
        //cout<<"异或结果1:"<<answer1<<endl;
        lj._16todc(answer1, &mw1);
        //cout<<"16->字符(密文):"<<mw1<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<answer1;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result1 = QString::fromLocal8Bit(answer1.data());
        result2 = QString::fromLocal8Bit(mw1.data());
        ui->textEdit_5->setText("异或结果:"+result1);
        ui->textEdit_5->append("加密出来的密文:"+result2);
    }else if(choice == "解密"){
        ifstream out(str1);
        string line;
        string mmw;
        string answer1;
        string mw1;
        string ch;
        if(out) // 有该文件
        {
            while (getline (out, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        //cout<<mmw<<endl;
        int len1=mmw.length();
        int len2=ton.length();

        while(len2<len1){
            ton+=ton;
            len2=ton.length();
        }
        ch=ton.substr(0,len1);
        lj.hexstrxor(mmw, ch, &answer1);
        //cout<<"异或结果1:"<<answer1<<endl;
        lj._16todc(answer1, &mw1);
        //cout<<"16->字符(明文):"<<mw1<<endl;
        ofstream in(str);
        if(in) // 有该文件
        {
            in<<mw1;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        result1 = QString::fromLocal8Bit(answer1.data());
        result2 = QString::fromLocal8Bit(mw1.data());
        ui->textEdit_5->setText("异或结果:"+result1);
        ui->textEdit_5->append("解密出来的明文:"+result2);
    }else{
        ifstream in(str);
        string line;
        string mmw;
        string result;
        string answer;
        string answer1,answer2;
        string mw1,mw2;
        string ch;
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        //cout<<mmw<<endl;
        char enre[2]={0};
        int len=mmw.length();
        for(int i=0;i<len;i++){
            lj.dc_16(mmw[i],enre);
            for(int j=0;j<2;j++){
                result+=enre[j];
            }
        }

        //cout<<"明文转16进制:"<<result<<endl;
        lj._16todc(result, &answer);
        //cout<<"16进程转明文"<<answer<<endl;
        int len1=result.length();
        int len2=ton.length();

        while(len2<len1){
            ton+=ton;
            len2=ton.length();
        }
        ch=ton.substr(0,len1);
        //a，b进行16进制异或
        lj.hexstrxor(result, ch, &answer1);
        //输出16进制密文
        //cout<<"异或结果1:"<<answer1<<endl;
        lj._16todc(answer1, &mw1);
        //cout<<"16->字符(密文):"<<mw1<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<mw1;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        //与a异或，16进制转字符
        lj.hexstrxor(answer1, ch, &answer2);
        //cout<<"异或结果2:"<<answer1<<endl;
        lj._16todc(answer2, &mw2);
        //cout<<"16->字符(明文):"<<mw2<<endl;
        result1 = QString::fromLocal8Bit(answer1.data());
        result2 = QString::fromLocal8Bit(mw1.data());
        result3 = QString::fromLocal8Bit(answer2.data());
        result4 = QString::fromLocal8Bit(mw2.data());
        ui->textEdit_5->setText("明文异或结果:"+result1);
        ui->textEdit_5->append("加密出来的密文:"+result2);
        ui->textEdit_5->append("密文异或结果:"+result3);
        ui->textEdit_5->append("加密出来的密文:"+result4);
    }


}

//DES
void MyFirstWidget::pushButton3_clicked(){
    string str = ui->lineEdit_8->text().toStdString();
    string str1 = ui->lineEdit_20->text().toStdString();
    string strkey = ui->lineEdit_9->text().toStdString();
    QString choice = ui->comboBox_4->currentText();
    QString result1,result2;
    string answer1,answer2;
    string line;
    string mmw;
    const char *key = strkey.c_str();
    cout<<key<<endl;
    enum    {ENCRYPT,DECRYPT};
    char encrypt_text[255];                       // 密文
    char decrypt_text[255];                       // 解密文
    memset(encrypt_text,0,sizeof(encrypt_text));//memset(a,b,c)函数,在a的地址开始到c的长度的字节都初始化为b
    memset(decrypt_text,0,sizeof(decrypt_text));
    DESFUN des;
    if(choice == "加密"){
        ifstream in(str);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<mmw<<endl;
        const char *plain = mmw.c_str();
        char* plain_text=new char[100];
        strcpy(plain_text,plain);
        cout<<plain_text<<"##"<<endl;
        des.DES_Act(encrypt_text, plain_text, sizeof(plain_text), key, sizeof(key), ENCRYPT);
        answer1=encrypt_text;
        result1 = QString::fromLocal8Bit(answer1.data());
        cout<<encrypt_text<<"EN"<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<answer1;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        ui->textEdit_7->setText("加密结果:"+result1);
    }else if(choice == "解密"){
        ifstream in(str1);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<mmw<<endl;
        const char *plain = mmw.c_str();
        char* plain_text=new char[100];
        strcpy(plain_text,plain);
        cout<<plain_text<<"##"<<endl;
        des.DES_Act(decrypt_text, plain_text, sizeof(plain_text), key, sizeof(key), DECRYPT);
        answer2=decrypt_text;
        result2 = QString::fromLocal8Bit(answer2.data());
        cout<<decrypt_text<<"DE"<<endl;
        ofstream out(str);
        if(out) // 有该文件
        {
            out<<answer2;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        ui->textEdit_7->setText("解密结果:"+result2);
    }else{
        ifstream in(str);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<mmw<<endl;
        const char *plain = mmw.c_str();
        char* plain_text=new char[100];
        strcpy(plain_text,plain);
        cout<<plain_text<<"##"<<endl;
        des.DES_Act(encrypt_text, plain_text, sizeof(plain_text), key, sizeof(key), ENCRYPT);
        answer1=encrypt_text;
        result1 = QString::fromLocal8Bit(answer1.data());
        cout<<encrypt_text<<"EN"<<endl;
        const char *plain1 = answer1.c_str();
        char* plain_text1=new char[100];
        strcpy(plain_text1,plain1);
        des.DES_Act(decrypt_text, plain_text1, sizeof(plain_text1), key, sizeof(key), DECRYPT);
        answer2=decrypt_text;
        result2 = QString::fromLocal8Bit(answer2.data());
        cout<<decrypt_text<<"DE"<<endl;
        ofstream out(str1);
        if(out) // 有该文件
        {
            out<<answer2;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        ui->textEdit_7->append("加密结果:"+result1);
        ui->textEdit_7->append("解密结果:"+result2);
    }

}

//RSA
void MyFirstWidget::pushButton4_clicked(){
    string str = ui->lineEdit_12->text().toStdString();
    string str1 = ui->lineEdit_21->text().toStdString();
    QString choice = ui->comboBox_5->currentText();
    QString result1,result2;
    RSAFUN rsa;
    string line;
    string mmw,mmw1,mmw2;
    int n, e, d;
    QString nt, et, dt;
    if(choice == "加密"){
    rsa.RSA_Initialize(n, e, d);
    nt = QString::number(n);
    et = QString::number(e);
    dt = QString::number(d);
    printf("Public  Key (e, n) : (%d, %d).\n",e, n);
    printf("Private Key (d, n) : (%d, %d).\n\n",d, n);
    ifstream in(str);
    if(in) // 有该文件
    {
        while (getline (in, line)) // line中不包括每行的换行符
        {
            mmw+=line;
        }
    }
    else // 没有该文件
    {
        cout <<"no such file" << endl;
    }
    cout<<mmw<<endl;
    rsa.RSA_Encrypt(e, n, mmw, str1);
    ifstream in1(str1);
    if(in1) // 有该文件
    {
        while (getline (in1, line)) // line中不包括每行的换行符
        {
            mmw1+=line;
        }
        cout<<mmw1<<endl;
    }else // 没有该文件
    {
        cout <<"no such file" << endl;
    }
    ui->textEdit_11->setText("public Key(e, n)=("+et+","+nt+")");
    ui->textEdit_11->append("Private Key(d, n)=("+dt+","+nt+")");
    result1 = QString::fromLocal8Bit(mmw1.data());
    ui->textEdit_11->append("加密结果:"+result1);
    an=n;
    ae=e;
    ad=d;
    }else if(choice == "解密"){
    ifstream in(str1);
    if(in) // 有该文件
    {
        while (getline (in, line)) // line中不包括每行的换行符
        {
            mmw+=line;
        }
    }
    else // 没有该文件
    {
        cout <<"no such file" << endl;
    }
    cout<<mmw<<endl;
    rsa.RSA_Decrypt(ad, an, mmw, str);
    ifstream in1(str);
    if(in1) // 有该文件
    {
        while (getline (in1, line)) // line中不包括每行的换行符
        {
            mmw1+=line;
        }
        cout<<mmw1<<endl;
    }else // 没有该文件
    {
        cout <<"no such file" << endl;
    }
    nt = QString::number(an);
    et = QString::number(ae);
    dt = QString::number(ad);
    ui->textEdit_11->setText("public Key(e, n)=("+et+","+nt+")");
    ui->textEdit_11->append("Private Key(d, n)=("+dt+","+nt+")");
    result1 = QString::fromLocal8Bit(mmw1.data());
    ui->textEdit_11->append("解密结果:"+result1);
    }else{
        rsa.RSA_Initialize(n, e, d);
        nt = QString::number(n);
        et = QString::number(e);
        dt = QString::number(d);
        printf("Public  Key (e, n) : (%d, %d).\n",e, n);
        printf("Private Key (d, n) : (%d, %d).\n\n",d, n);
        ifstream in(str);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        cout<<mmw<<endl;
        rsa.RSA_Encrypt(e, n, mmw, str1);
        ifstream in1(str1);
        if(in1) // 有该文件
        {
            while (getline (in1, line)) // line中不包括每行的换行符
            {
                mmw1+=line;
            }
            cout<<mmw1<<endl;
        }else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        rsa.RSA_Decrypt(d, n, mmw1, str);
        ifstream in2(str);
        if(in2) // 有该文件
        {
            while (getline (in2, line)) // line中不包括每行的换行符
            {
                mmw2+=line;
            }
            cout<<mmw2;
        }
        else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        ui->textEdit_11->setText("public Key(e, n)=("+et+","+nt+")");
        ui->textEdit_11->append("Private Key(d, n)=("+dt+","+nt+")");
        result1 = QString::fromLocal8Bit(mmw1.data());
        ui->textEdit_11->append("加密结果:"+result1);
        result2 = QString::fromLocal8Bit(mmw2.data());
        ui->textEdit_11->append("解密结果:"+result2);
    }

}
//D-H
bool flag=0;
bool flag1=0;
lint key1;
void MyFirstWidget::pushButton5_1_clicked(){
    flag=1;
    _text->append("协商完毕，可以开始通信");
    disconnect(sendBtn,SIGNAL(clicked()),this,SLOT(MySend()));
    sendBtn = ui->pushButton_8;
    _lineEdit = ui->lineEdit_15;
    _text = ui->textBrowser;
    //并连接槽函数，用来接收数据
    connect(_udp, SIGNAL(readyRead()),this, SLOT(MyRecive()));
    //连接发送信息的槽函数
    connect(sendBtn,SIGNAL(clicked()),this,SLOT(MySend()));
}


void MyFirstWidget::pushButton5_clicked(){
    ip = ui->lineEdit_10->text();
    localport = ui->lineEdit_13->text().toInt();
    objectport = ui->lineEdit_16->text().toInt();
    //绑定端口
    _udp->bind(localport);
    qDebug()<<ip;
    qDebug()<<localport;
    qDebug()<<objectport;
}

void MyFirstWidget::MyRecive(){
    enum    {ENCRYPT,DECRYPT};
    char encrypt_text1[255];                       // 密文
    char decrypt_text1[255];                       // 解密文
    memset(encrypt_text1,0,sizeof(encrypt_text1));//memset(a,b,c)函数,在a的地址开始到c的长度的字节都初始化为b
    memset(decrypt_text1,0,sizeof(decrypt_text1));
    LFSR_JKFUN lj;
    while(_udp->hasPendingDatagrams())
    {
        if(flag1==1){
        if(flag==0){
        quint32 datagramSize = _udp->pendingDatagramSize();
        //用来存储接收到的信息
        QByteArray buf(datagramSize, 0);
        qDebug()<<buf;
        //发送方IP
        QHostAddress addres;
        //发送方端口
        quint16 port;
        //接收信息并存放到buf中
        _udp->readDatagram(buf.data(), buf.size(),&addres,&port);
        //QString Qtem;
        //QTextCodec *tc = QTextCodec::codecForName("GBK");
        string tem;
        string tem1;
        tem=buf.data();
        cout<<"测试"<<tem<<endl;
        lj._16todc(tem,&tem1);
        cout<<"测试"<<tem1<<endl;
        int d=ui->lineEdit_27->text().toInt();
        int n=ui->lineEdit_29->text().toInt();
        RSAFUN rsa;
        string str=".\\result.txt";
        string mmw;
        string line;
        rsa.RSA_Decrypt(d, n, tem1, str);
        ifstream in(str);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
            cout<<mmw<<endl;
        }else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        string tem3, tem4;
        DH_MD5FUN dm;
        dm.devideDH_MD5(mmw, &tem3, &tem4);
        cout<<tem3<<endl;
        cout<<tem4<<endl;
        unsigned char *id = (unsigned char *)ui->lineEdit_26->text().toLatin1().data();
        cout<<id<<endl;
        string tem2;
        MD5_CTX md5;
        dm.MD5Init(&md5);
        dm.MD5Update(&md5,id,strlen((char *)id));
        dm.MD5Final(&md5,&tem2);
        cout<<tem2<<endl;
        if(tem4==tem2){
            _text->append("提示信息:id验证正确，可以通信");
        }else{
            _text->append("提示信息:id验证错误，请谨慎做出决定！");
        }
        //将收到的信息追加展示
        int x_y = ui->lineEdit_11->text().toInt();
        cout<<x_y<<endl;
        int p = ui->lineEdit_25->text().toInt();
        lint a = s_i(tem3);
        key1 = dm.qs(a, x_y, p);

        cout<<"KEY:"<<key1<<endl;
        }else{
        //获取收到的信息大小
        quint32 datagramSize = _udp->pendingDatagramSize();
        //用来存储接收到的信息
        QByteArray buf(datagramSize, 0);
        qDebug()<<buf;
        //发送方IP
        QHostAddress addres;
        //发送方端口
        quint16 port;
        //接收信息并存放到buf中
        _udp->readDatagram(buf.data(), buf.size(),&addres,&port);
        string mmw,mmw1;
        mmw=buf.data();
        cout<<mmw<<endl;
        //lj._16todc(mmw,&mmw1);
        //cout<<mmw1<<endl;
        QString temp=QString::fromLocal8Bit(mmw.data());
        ui->textEdit_10->append("接收的密文:"+temp);
        string answer2;
        ostringstream stream;
        stream<<key1;
        string strkey = stream.str();
        cout<<strkey<<endl;
//        const char *key = strkey.c_str();
//        const char *plain = mmw1.c_str();
//        char* plain_text=new char[100];
//        strcpy(plain_text,plain);
//        cout<<plain_text<<"##"<<endl;
//        DESFUN des;
//        des.DES_Act(decrypt_text1, plain_text, sizeof(plain_text), key, sizeof(key), DECRYPT);
//        answer2=decrypt_text1;
//        QByteArray bytes = QByteArray::fromStdString(answer2);
//        cout<<decrypt_text1<<"DE"<<endl;
        RC4FUN rc;
        rc.DataDecrypt(strkey,mmw,&answer2);
        cout<<answer2<<endl;
//      QByteArray bytes = QByteArray::fromStdString(answer2);
        QString bytes = QString::fromLocal8Bit(answer2.data());
        //将收到的信息追加展示
        _text->append("["+addres.toString()+":"+QString::number(port)+"]"+bytes);
        }
     }
     else{
        flag1=1;
        quint32 datagramSize = _udp->pendingDatagramSize();
        //用来存储接收到的信息
        QByteArray buf(datagramSize, 0);
        qDebug()<<buf;
        //发送方IP
        QHostAddress addres;
        //发送方端口
        quint16 port;
        //接收信息并存放到buf中
        _udp->readDatagram(buf.data(), buf.size(),&addres,&port);
        _text->append("已建立连接");
    }
    }
}

void MyFirstWidget::MySend(){
    enum    {ENCRYPT,DECRYPT};
    char encrypt_text2[255];                       // 密文
    char decrypt_text2[255];                       // 解密文
    memset(encrypt_text2,0,sizeof(encrypt_text2));//memset(a,b,c)函数,在a的地址开始到c的长度的字节都初始化为b
    memset(decrypt_text2,0,sizeof(decrypt_text2));
    LFSR_JKFUN lj;
    if(flag1==1){
    if(flag==0){
        int x_y = ui->lineEdit_11->text().toInt();
        cout<<x_y<<endl;
        unsigned char *id = (unsigned char *)ui->lineEdit_23->text().toLatin1().data();
        cout<<id<<endl;
        //a^x_y mod p || md5(id)
        int a = ui->lineEdit_24->text().toInt();
        int p = ui->lineEdit_25->text().toInt();
        //D-H_MD5(a,x,p,id)
        DH_MD5FUN dm;
        string result;
        string tem1,tem2;
        MD5_CTX md5;
        dm.MD5Init(&md5);
        dm.MD5Update(&md5,id,strlen((char *)id));
        dm.MD5Final(&md5,&tem2);
        lint head = dm.qs(a, x_y, p);
        ostringstream stream;
        stream<<head;
        tem1 = stream.str();
        dm.LinkDH_MD5(tem1, tem2, &result);
        cout<<result<<endl;
        int e=ui->lineEdit_28->text().toInt();
        int n=ui->lineEdit_30->text().toInt();
        RSAFUN rsa;
        string str=".\\result.txt";
        string mmw;
        string line;
        rsa.RSA_Encrypt(e, n, result, str);
        ifstream in(str);
        if(in) // 有该文件
        {
            while (getline (in, line)) // line中不包括每行的换行符
            {
                mmw+=line;
            }
            cout<<mmw<<endl;
        }else // 没有该文件
        {
            cout <<"no such file" << endl;
        }
        string mmw1;
        char enre[2]={0};
        int len=mmw.length();
        for(int i=0;i<len;i++){
            lj.dc_16(mmw[i],enre);
            for(int j=0;j<2;j++){
                mmw1+=enre[j];
            }
        }
        cout<<mmw1<<endl;
//        string mmw2;
//        lj._16todc(mmw1,&mmw2);
//        cout<<mmw2<<endl;
        QByteArray msg = QByteArray::fromStdString(mmw1);
        //QString msg = QString::fromLocal8Bit(mmw.data());
        _text->append("开始协商密钥...");
        qDebug()<<msg<<endl;
        if(!msg.isEmpty())
        {
            _udp->writeDatagram(msg, QHostAddress(ip), objectport);
        }
    }else{
    //获取要发送的信息
    QString msg = _lineEdit->text();
    qDebug()<<msg<<endl;
    string mmw = string(msg.toLocal8Bit());
    cout<<mmw<<endl;
     _text->append("[local:"+QString::number(localport)+"]"+msg);
    //以QByteArray格式将信息发送给主机IP为127.0.0.1的10002号端口
//     DESFUN des;
     ostringstream stream;
     stream<<key1;
     string strkey = stream.str();
     string answer1;
//     const char *key = strkey.c_str();
//     cout<<key<<endl;
//     const char *plain = mmw.c_str();
//     char* plain_text=new char[100];
//     strcpy(plain_text,plain);
//     cout<<plain_text<<"##"<<endl;
//     des.DES_Act(encrypt_text2, plain_text, sizeof(plain_text), key, sizeof(key), ENCRYPT);
//     answer1=encrypt_text2;
//     cout<<encrypt_text2<<"EN"<<endl;
//     string mmw1;
//     char enre[2]={0};
//     int len=answer1.length();
//     for(int i=0;i<len;i++){
//         lj.dc_16(answer1[i],enre);
//         for(int j=0;j<2;j++){
//             mmw1+=enre[j];
//         }
//     }
//     cout<<mmw1<<endl;
//     QByteArray msg1 = QByteArray::fromStdString(mmw1);
//     qDebug()<<msg1<<endl;
     RC4FUN rc;
     rc.DataEncrypt(strkey,mmw,&answer1);
     cout<<answer1<<endl;
//     string mmw1;
//     char enre[2]={0};
//     int len=answer1.length();
//     for(int i=0;i<len;i++){
//         lj.dc_16(answer1[i],enre);
//         for(int j=0;j<2;j++){
//             mmw1+=enre[j];
//         }
//     }
//     cout<<mmw1<<endl;
     QByteArray msg1 = QByteArray::fromStdString(answer1);
     QString result1 = QString::fromLocal8Bit(answer1.data());
     ui->textEdit_10->append("发送加密结果:"+result1);
     if(!msg1.isEmpty())
     {
         _udp->writeDatagram(msg1, QHostAddress(ip), objectport);
     }
    }
    }else{
        _text->append("开始建立连接...");
        QString msg = "1";
        qDebug()<<msg<<endl;
        //以QByteArray格式将信息发送给主机IP为127.0.0.1的10002号端口
        if(!msg.isEmpty()){
            _udp->writeDatagram(msg.toUtf8(), QHostAddress(ip), objectport);
        }
    }
}


