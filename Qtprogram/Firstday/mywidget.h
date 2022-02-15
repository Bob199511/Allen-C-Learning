#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget> //包含一个头文件 Qwidget 窗口类

class myWidget : public QWidget
{
    Q_OBJECT  //允许类中使用信号和槽的机制

public:
    myWidget(QWidget *parent = 0);//构造函数
    ~myWidget();//析构函数
};

#endif // MYWIDGET_H
