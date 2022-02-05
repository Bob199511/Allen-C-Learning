#include<iostream>
using namespace std;

class Person{
public:
    Person(){
        cout << "无参构造函数" << endl;
    }
    Person(int age){
        m_age = age;
        cout << "有参构造函数" << endl;
    }
    Person(const Person &p){
        m_age = p.m_age;
        cout << "拷贝构造函数" << endl;
    }
    ~Person(){
        cout << "析构函数" << endl;
    }

    int m_age;
};
void test01(){
    Person p1(20);
    Person p2(p1);
    cout << "p2年龄" << p2.m_age << endl;
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
