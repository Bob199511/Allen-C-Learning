#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
#include"Worker.h"
using namespace std;

class Boss:public Worker{
public:

    Boss(int id, string name, int dId);

    virtual void showInfo();

    virtual string getDeptName();


};

#endif // EMPLOYEE_H_INCLUDED
