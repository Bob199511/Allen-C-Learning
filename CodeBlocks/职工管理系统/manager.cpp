#include"manager.h"

Manager::Manager(int id, string name, int dId){
    this->m_Id = id;
    this->m_name = name;
    this->m_DeptId = dId;
}

void Manager::showInfo(){

    cout << "职工编号：" << this->m_Id
        <<"\t职工姓名" << this->m_name
        <<"\t岗位：" << this->getDeptName()
        << "岗位职责：完成老板交给的任务，并且下发任务" << endl;

}

string Manager::getDeptName(){

    return string("经理");
}
