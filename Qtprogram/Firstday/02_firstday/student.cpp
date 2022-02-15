#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat(){

    qDebug()<<"请老师吃饭";
}

void Student::treat(QString foodName){
    //QString 转成char *，可不自动加引号(先转成QByteArary)
    qDebug()<< "请老师吃饭，老师要吃：" << foodName.toUtf8().data();//foodname的内容自动加引号
}
