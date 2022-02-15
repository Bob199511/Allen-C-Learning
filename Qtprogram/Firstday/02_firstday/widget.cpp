#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QDebug>
//Teacher 类 老师类
//Student 类
//下课后，老师触发一个信号，饿了，学生响应信号，请客吃饭
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建一个老师的对象
    this->zt = new Teacher(this);
    //创建学生的对象
    this->st = new Student(this);

//    connect(zt, &Teacher::hungry, st, &Student::treat);

//    //代用下课函数
//    classIsOver();
    //连接参数的，信号和槽
    //指针指向地址；函数指针 指向函数地址

    void(Teacher::*teacherSignal)(QString) = &Teacher::hungry;
    void(Student:: *studentSlot)(QString) = &Student::treat;
    connect(zt, teacherSignal, st, studentSlot);
    //classIsOver();

    //点击一个下课的按钮，再下课
    QPushButton * btn = new QPushButton("下课", this);
    this->resize(600, 400);

    //点击按钮出发下课
    //connect(btn, &QPushButton::clicked, this, &Widget::classIsOver);

    //无参的信号和槽连接
    void(Teacher::*teacherSignal2)(void) = &Teacher::hungry;
    void(Student::*studentSlot2)(void) = &Student::treat;
    connect(zt, teacherSignal2, st, studentSlot2);
    //信号连接信号
    connect(btn, &QPushButton::clicked, zt, teacherSignal2);

    //断开信号
    //disconnect(btn, &QPushButton::clicked, zt, teacherSignal2);

    //拓展：信号可以连接信号；  一个信号可以连接多个槽函数  多个信号可以链接同一个槽函数
    //信号和槽函数的参数必须一一对应  信号和槽的参数个数是否要一致？信号个数可以躲雨槽
    //函数个数，接收方he发送方的类型要一一对应

    //Qt4版本以前的信号和槽连接方式
    connect(zt,SIGNAL(hungry()), st , SLOT(treat()));
    //Qt4版本的优点：参数直观，缺点：类型不做检测
    //Qt5以上 支持 Qt4的版本写法，反之不支持

//    QPushButton * btn2 = new QPushButton;

//    [btn](){
//        btn->setText("aaa");
//        btn2->setText("bbb");//btn2看不到，出错
//    }();

//    QPushButton * myBtn = new QPushButton(this);
//    QPushButton * myBtn2 = new QPushButton(this);
//    myBtn2->move(100, 100);
//    int m = 10;

    //mutable关键字 用于修饰值传递的变量(不加为只读)， 修改的是拷贝，而不是本体
//    connect(myBtn, &QPushButton::clicked, this, [m]()mutable{m = 100 + 10;
//    qDebug()<< m;});//此处{}是m的拷贝。要修改m的拷贝得加mutable

//    connect(myBtn2, &QPushButton::clicked, this, [=](){qDebug() << m;});

//    qDebug() << m;

    int ret = []()->int{return 1000;}();
    qDebug() << "ret = " << ret;


    //利用lambda表达式 实现点击按钮 关闭窗口
    QPushButton * btn2 = new QPushButton;
    btn2->setText("关闭");
    btn2->move(100, 0);
    btn2->setParent(this);
    connect(btn2, &QPushButton::clicked, this, [&](){//this可省略
//        this->close();
//        emit zt->hungry("宫保鸡丁");

        btn2->setText("aaaa");
    });


}

void Widget::classIsOver(){
    //侠客函数，调用后，出发老师饿了
    //emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}
