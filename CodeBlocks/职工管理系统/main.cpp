#include"workManager.h"
#include<iostream>
using namespace std;
#include"Worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"


int main(){
    //测试代码
    Worker * worker = NULL;
    worker = new Employee(1, "张三", 1);
    worker->showInfo();
    WorkManager wm;
    int choice = 0;//存储用胡选项
        while(true){

        wm.Show_Menu();

        cout << "请输入您的选择： " << endl;
        cin >> choice;

        switch (choice){

        case 0:
            wm.ExitSystem();   //退出系统
            break;
        case 1:   //增加职工
            break;
        case 2:   //显示职工
            break;
        case 3:   //删除职工
            break;
        case 4:   //修改职工
            break;
        case 5:   //查找职工
            break;
        case 6:   //按编号排序
            break;
        case 7:   //清空文档
            break;

        }

    }


    return 0;
}
