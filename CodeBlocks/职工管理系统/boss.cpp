#include"boss.h"

Boss::Boss(int id, string name, int dId){
    this->m_Id = id;
    this->m_name = name;
    this->m_DeptId = dId;
}

void Boss::showInfo(){

    cout << "职工编号：" << this->m_Id
        <<"\t职工姓名" << this->m_name
        <<"\t岗位：" << this->getDeptName()
        << "岗位职责：管理公司所有事物" << endl;

}

string Boss::getDeptName(){

    return string("总裁");
}
