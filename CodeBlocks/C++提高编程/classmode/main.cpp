#include<iostream>
#include<string.h>
//��ģ���뺯��ģ�������
using namespace std;
template<class NameType, class AgeType>//template<class NameType, class AgeType = int>
class person{
public:
    person(NameType name, AgeType age){
        m_age = age;
        m_name = name;
    }
    void showPerson(){
        cout << "name = " << this->m_name << "age = " << this->m_age;
    }
    NameType m_name;
    AgeType m_age;

};
void test01(){
    //person p("�����", 1000);//�����
    person<string, int> p("�����", 1000);
    p.showPerson();
}
int main(){
    test01();
    return 0;
}
