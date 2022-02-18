 #include"workManager.h"
//用户沟通，增删改查等等
WorkManager::WorkManager(){
   //初始化属性
   this->m_EmpNum = 0;
   this->m_EmpArray = NULL;
}
WorkManager::~WorkManager(){

    cout << endl;

}

    //添加职工
void WorkManager::Add_Emp(){
    cout << "请输入添加职工的数量: " << endl;

    int addNum = 0;//保存用户的输入数量

    cin >> addNum;
    if(addNum > 0){
        //添加计算空间大小
        int newSize = this->m_EmpNum + addNum;
        //开辟新空间
        Worker** newSpace = new Worker*[newSize];

        //将源来空间拷贝到新空间
        if(this->m_EmpArray != NULL){

            for(int i = 0; i < this->m_EmpNum; ++i){
                newSpace[i] = this->m_EmpArray[i];
            }
            //批量添加新数据
            for(int i = 0; i < addNum; ++i){
                int id;
                string name;
                int dSelect;

                cout << "请输入第" << i + 1 << " 个新职工编号：" << endl;
                cin >> id;
                cout << "请输入第" << i + 1 << " 个新职工信命：" << endl;
                cin >> name;

                cout << "请选择该职工岗位： "<< endl;
                cout << "1.普通职工" << endl;
                cout << "2.经理" << endl;
                cout << "3.老板" << endl;
                cin >> dSelect;

                Worker * worker = NULL;
                switch(dSelect){
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;

                }
                //将创建的职工指针，保存到数组中
                newSpace[this->m_EmpNum + i] = worker;

            }
            //释放原有的空间
            delete [] this->m_EmpArray;
            //更改新空间的指向
            this->m_EmpArray = newSpace;
            //更新新的职工人数
            this->m_EmpNum = newSize;

            cout << "成功添加了" <<addNum << "名新职工" <<endl;
        }

    }
    else{

        cout << "输入数据有误" << endl;
    }
    system("pause");
    system("cls");
}

void WorkManager::Show_Menu(){
      cout << "********************************************" << endl;
      cout << "*********  欢迎使用职工管理系统！***********" << endl;
      cout << "************* 0.退出管理程序****************" << endl;
      cout << "************* 1.增加职工信息****************" << endl;
      cout << "************* 2.显示职工信息****************" << endl;
      cout << "************* 3.删除离职职工****************" << endl;
      cout << "************* 4.修改职工信息****************" << endl;
      cout << "************* 5.查找职工信息****************" << endl;
      cout << "************* 6.按照编号排序****************" << endl;
      cout << "************* 7.清空所有文档****************" << endl;
      cout << "********************************************" << endl;
      cout << endl;

}
void WorkManager::ExitSystem(){//退出系统

    cout << "欢迎下次使用" << endl;
    exit(0);

}
