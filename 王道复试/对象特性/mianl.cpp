#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "�޲ι��캯��" << endl;
    }
    Person(int age){
        m_age = age;
        cout << "�вι��캯��" << endl;
    }
    Person(const Person &p){
        m_age = p.m_age;
        cout << "�������캯��" << endl;
    }
    ~Person(){
        cout << "��������" << endl;
    }

    int m_age;
};
void test01(){
    Person p1(20);
    Person p2(p1);
    cout << "p2����" << p2.m_age << endl;
}
void dowork(Person p){

}
void test02(){
    Person p;
    dowork(p);
}
Person dowork2(){
    Person p1(10);
    return p1;
}
void test03(){
    Person p2 = dowork2();
}
int main(){
    //test01();
    //test02();
    test03();
    return 0;
}
