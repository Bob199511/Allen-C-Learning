#include <iostream>

using namespace std;
/*
class Java{
public:
    void header(){
        cout << "�����εȵ�" << endl;
    }
    void footer(){
        cout << "�����̵ȵ�" << endl;
    }
    void left(){
        cout << "ѧ�Ʒ���" << endl;
    }
    void content(){
        cout << "java����������ɫ�ȵ�" << endl;
    }
};
class CPP{
public:
    void header(){
        cout << "�����εȵ�" << endl;
    }
    void footer(){
        cout << "�����̵ȵ�" << endl;
    }
    void left(){
        cout << "ѧ�Ʒ���" << endl;
    }
    void content(){
        cout << "CPP����������ɫ�ȵ�" << endl;
    }
}; */
//�̳�ʵ��ҳ�� ,�����ظ�����
class BasePage{ //����ҳ����
public:
    void header(){
        cout << "�����εȵ�" << endl;
    }
    void footer(){
        cout << "�����̵ȵ�" << endl;
    }
    void left(){
        cout << "ѧ�Ʒ���" << endl;
    }
};
class Java : public BasePage{
public:
    void content(){
        cout << "java����������ɫ�ȵ�" << endl;
    }
};
class CPP : public BasePage{
public:
    void content(){
        cout << "CPP����������ɫ�ȵ�" << endl;
    }
};
void test01(){
    Java j;
    j.header();
    j.footer();
    j.left();
    j.content();
    cout << "-------------" << endl;
    CPP c;
    c.header();
    c.footer();
    c.left();
    c.content();


}
int main()
{
    test01();
    return 0;
}
