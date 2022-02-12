#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//二进制文件
class person{
public:

    char m_name[64];
    int m_age;
};
void test03(){
    ofstream ofs;
    ofs.open("person.txt", ios::out| ios::binary);
    // ofstream ofs("person.txt", ios::out| ios::binary);
    person p = {"张三", 18};
    ofs.write((const char*)&p, sizeof(person));
}
void test04(){
   ifstream ifs;
   ifs.open("person.txt", ios::in | ios::binary);
   if(!ifs.is_open()){
        cout << "打开失败！" << endl;
   }
   person p;
   ifs.read((char *)&p, sizeof(person));
   cout << "姓名=" << p.m_name << "年龄=" << p.m_age << endl;
}
int main(){
    test04();
    return 0;
}



//读文件
/*
void test02(){
    ifstream ist;
    ist.open("test.txt",ios::in);
    if( !ist.is_open()){
        cout << "文件打开失败" << endl;
    }
    //读数据
    /*char buf[1024] = {0};
    while(ist >> buf){

        cout << buf << endl;
    } */
    /*char buf[1024] = {0};
    while(ist.getline(buf, 1024)){
        cout << buf <<endl;
    } */
    /*string buf;
    while( getline(ist, buf)){
        cout << buf <<endl;
    }  */
 /*   char c;
    while((c = ist.get()) != EOF){
        cout << c;
    }
    ist.close();
}
 int main(){
    test02();
    return 0;
 }
 */

/*void test01(){
    ofstream ofs;
    ofs.open("test.txt", ios::out);
    ofs << "张三" <<endl;
    ofs << "男" <<endl;
    ofs << "张三" <<endl;
    ofs << "18" <<endl;
    ofs.close();
}
int main(){
    test01();
    return 0;
}


/*#include <iostream>
using namespace std;
//电脑组装
class CPU{
public:
    virtual void Calculate() = 0;
};
class VideoCard{
public:
    virtual void Display() = 0;
};
class Memory{
public:
    virtual void RWmemery() = 0;
};
class Computer{
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem){
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    void work(){
        m_cpu->Calculate();
        m_mem->RWmemery();
        m_vc->Display();
    }
    //提供析构函数，释放三个电脑的零件
    ~Computer(){
        if(m_cpu != NULL){
            m_cpu = NULL;
        }
        if(m_vc != NULL){
            m_vc = NULL;
        }
        if(m_mem != NULL){
            m_mem = NULL;
        }
    }

private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;

};

class IntelCPU:public CPU{
public:
    void Calculate(){
        cout << "IntelCPU正在计算" << endl;
    }
};
class IntelVideoCard:public VideoCard{
public:
    virtual void Display(){
        cout << "intel的显卡开始显示了" << endl;
    }
};

class LenovoCPU:public CPU{
public:
    void Calculate(){
        cout << "LenovoCPU正在计算" << endl;
    }
};
class LenovoMemory:public Memory{
public:
    virtual void RWmemery(){
        cout << "Lenovo的内存正在工作" << endl;
    }
};

void test01(){
    //组装一台电脑
    CPU * itcpu = new IntelCPU;
    VideoCard * ivcard = new IntelVideoCard;
    Memory * lmemory = new LenovoMemory;
    Computer *computer1 = new Computer(itcpu, ivcard, lmemory);
    computer1->work();
    delete computer1;

    Computer *computer2 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
    computer2->work();
    delete computer2;
}

int main()
{
    test01();
    return 0;
}
*/
