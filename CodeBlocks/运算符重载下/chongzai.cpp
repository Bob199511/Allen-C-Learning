#include <iostream>
#include<algorithm>
using namespace std;
//��ֵ���������
class Person{
public:

    Person(int age){
        m_age = new int(age);
    }
    ~Person(){
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
    }
    //���� ��ֵ�����
    Person & operator=(Person &p){
        //�������ṩǳ������
        //���ж��Ƿ��������ڶ�������������ͷŸɾ��������
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age);//���
        return *this;//���ض�����
    }
    int *m_age;
};
void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(20);
    p3 = p2 = p1;
    p2 = p1;//�����������ĸ�ֵ����,ǳ����,��������ɶ����ڴ��ظ��ͷ�
    cout << "p1������Ϊ" << *p1.m_age << endl;
    cout << "p2������Ϊ" << *p2.m_age << endl;
    cout << "p3������Ϊ" << *p3.m_age << endl;
}
void test02(){

}

int main()
{
    test01();
    return 0;
}
