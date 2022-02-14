#ifndef WORKMANAGER_H_INCLUDED //防止头文件重复包含
#define WORKMANAGER_H_INCLUDED//包含输入输出流头文件
#include<iostream>
using namespace std;//使用标准命名空间

class WorkManager{
public:
    WorkManager(); //构造函数
    void Show_Menu();//展示菜单

    void ExitSystem();//退出系统
    ~WorkManager(); //析构函数
};
#endif // WORKMANAGER_H_INCLUDED
