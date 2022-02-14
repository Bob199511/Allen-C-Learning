#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

//职工抽象类
class Worker{
public:

    virtual void showInfo() = 0;

    virtual string getDeptName() = 0;

    int m_Id;
    string m_name;
    int m_DeptId;

};


#endif // WORKER_H_INCLUDED
