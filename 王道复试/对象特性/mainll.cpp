#include<iostream>
using namespace std;
//���캯���ĵ��ù���;//Ĭ�Ϲ������������Ϊ��ʵ�֡���������Ϊֵ����

class Person{
public:
    Person(int age){
        cout << "Ĭ�Ϲ���" << endl;
    }
    Person(const Person &p){
        cout << "Ĭ�Ϲ���" << endl;
    }

    ~Person(){
        cout << "��������" << endl;
    }
    int m_age;

};
int main(){
    Person p1(10);
    Person p(p1);

    return 0;
}
