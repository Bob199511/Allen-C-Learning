#include <iostream>
#include<algorithm>
using namespace std;
//��ϵ���������==, !=
class Person{
public:

    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    //���ع�ϵ�����==
    bool operator==(Person &p){
        if(this->m_age == p.m_age && this->m_age == p.m_age){
            return true;
        }
        else
            return false;
    }
    bool operator!=(Person &p){
        if(this->m_age == p.m_age && this->m_age == p.m_age){
            return false;
        }
        else
            return true;
    }
    string m_name;
    int m_age;
};
void test01(){
    Person p1("Tom", 18);
    Person p2("Tom", 18);

    if(p1 == p2)
        cout << "p1��p2���" << endl;
    else
        cout << "p1��p2�����" << endl;
}
void test02(){

}

int main()
{
    test01();
    return 0;
}
