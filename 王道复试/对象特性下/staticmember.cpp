#include<iostream>
using namespace std;
/*class Person{

public:
    //���ж��󶼹���ͬһ�����ݣ�����׶ξͷ����ڴ棨ȫ������
    //���������������ʼ��
    static int m_a;
    //��̬��Ա�����з���Ȩ�޵�
private:
    static int m_b;
};
int Person::m_a = 100;
int Person::m_b = 200;
void test01(){
    Person p;
    Person p2;
    p2.m_a = 200;
    cout << p.m_a << endl;
}
void test02(){
//ͨ��������ʣ�ͨ���������� ��̬����
    cout << Person::m_a << endl;
    cout << Person::m_b << endl;
}*/
class Person{
public:
    //��̬��Ա����
    static void func(){
        m_a = 100;
        m_b = 200;
        cout << "��̬��Ա��������" << endl;
    }
    static int m_a;
    int m_b;
};
int Person::m_a = 0;
void test01(){
    Person p;
    p.func();//�������
    Person::func();//��������
}
int main(){

    test01();
    return 0;
}
