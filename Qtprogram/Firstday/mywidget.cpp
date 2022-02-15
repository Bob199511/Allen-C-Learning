#include "mywidget.h"
#include <QPushButton>//按键特征的文件
#include<mypushbutton.h>
#include<QDebug>
//命名规范：
//类名 首字母大写，单词和单词之间首字母大写
//函数名 变量名称 首字母小写，单词和单词之间首字母大写

//快捷键
//注释 ctrl + /
//运行 ctrl + r
//编译 ctrl + b
//字体的缩放 ctrl + 鼠标滚轮
//查找 ctrl + F
//整行移动 ctrl + shift +上或下
//帮助文档 第一种方式：F1，第二种方式：左侧的按钮，第三种
//自动对齐 ctrl + i
//同名之间的.h和.cpp切换 F4



myWidget::myWidget(QWidget *parent)
    : QWidget(parent)//初始化列表
{
    //创建一个按键
    QPushButton *btn = new QPushButton;
    //btn->show();//show以底层方式弹出窗口控件
    //让btn对象依附在 mywidget窗口中
    btn->setParent(this);

    //显示文本
    btn->setText("第一个按钮");
    //创建第二个按钮,按照控件大小创建了窗口
    QPushButton * btn2 = new QPushButton("第二个按钮",this);

    //移动btn2按钮
    btn2->move(100, 100);

    //按钮重新指定大小
    btn2->resize(50,50);

    //重置窗口大小
    resize(600, 400);
    //设置规定的窗口大小
    setFixedSize(600, 400);

    //设置窗口标题
    setWindowTitle("第一个窗口");


    //创建一个自己的按钮对象
    MyPushButton * MyBtn = new MyPushButton;
    MyBtn->setText("我自己的按钮");

    MyBtn->move(200, 0);
    MyBtn->setParent(this);//设置到对象树


    //点下我自己的按钮-关闭窗口
    //参数1：信号的发送者 参数2：发送的信号（函数的地址）参数3：信号的接受者参数4：信号槽
    connect(MyBtn, QPushButton::clicked, this, QWidget::close );
    //connect(MyBtn, &MyPushButton::clicked, this, &myWidget::close );
}

myWidget::~myWidget()
{
    qDebug() << "myWidget的析构调用";
}
