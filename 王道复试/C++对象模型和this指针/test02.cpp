#include<iostream>

using namespace std;
//��������������
class Person{
public:

    void showperson()const{//()���const������m_ageΪ�ɶ�
        //m_age = 100;
        //this = NULL;thisָ�벻�����޸�ָ���ָ��
        m_B = 100;
    }
    int m_age = 10;
    mutable int m_B = 10;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};
void test01(){
    Person p1;

    p1.showperson();
}
void test02(){
    const Person p1;//�ڶ���ǰ��const��Ϊ������
    p1.m_age = 100;
    p1.m_B = 100;
    p1.showperson();
}
int main(){

    return 0;
}
