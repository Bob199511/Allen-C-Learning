#ifndef WORKMANAGER_H_INCLUDED //防止头文件重复包含
#define WORKMANAGER_H_INCLUDED//包含输入输出流头文件
#include<iostream>
#include<string>
#include"Worker.h"
#include"manager.h"
#include"employee.h"
#include"boss.h"
using namespace std;//使用标准命名空间

class WorkManager{
public:
    WorkManager(); //构造函数
    void Show_Menu();//展示菜单

    void ExitSystem();//退出系统

    //记录职工人数
    int m_EmpNum;

    //职工数组指针
    Worker ** m_EmpArray;

    //添加职工
    void Add_Emp();



    ~WorkManager(); //析构函数
};
#endif // WORKMANAGER_H_INCLUDED
