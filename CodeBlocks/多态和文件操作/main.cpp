#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//�������ļ�
class person{
public:

    char m_name[64];
    int m_age;
};
void test03(){
    ofstream ofs;
    ofs.open("person.txt", ios::out| ios::binary);
    // ofstream ofs("person.txt", ios::out| ios::binary);
    person p = {"����", 18};
    ofs.write((const char*)&p, sizeof(person));
}
void test04(){
   ifstream ifs;
   ifs.open("person.txt", ios::in | ios::binary);
   if(!ifs.is_open()){
        cout << "��ʧ�ܣ�" << endl;
   }
   person p;
   ifs.read((char *)&p, sizeof(person));
   cout << "����=" << p.m_name << "����=" << p.m_age << endl;
}
int main(){
    test04();
    return 0;
}



//���ļ�
/*
void test02(){
    ifstream ist;
    ist.open("test.txt",ios::in);
    if( !ist.is_open()){
        cout << "�ļ���ʧ��" << endl;
    }
    //������
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
    ofs << "����" <<endl;
    ofs << "��" <<endl;
    ofs << "����" <<endl;
    ofs << "18" <<endl;
    ofs.close();
}
int main(){
    test01();
    return 0;
}


/*#include <iostream>
using namespace std;
//������װ
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
    //�ṩ�����������ͷ��������Ե����
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
        cout << "IntelCPU���ڼ���" << endl;
    }
};
class IntelVideoCard:public VideoCard{
public:
    virtual void Display(){
        cout << "intel���Կ���ʼ��ʾ��" << endl;
    }
};

class LenovoCPU:public CPU{
public:
    void Calculate(){
        cout << "LenovoCPU���ڼ���" << endl;
    }
};
class LenovoMemory:public Memory{
public:
    virtual void RWmemery(){
        cout << "Lenovo���ڴ����ڹ���" << endl;
    }
};

void test01(){
    //��װһ̨����
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
