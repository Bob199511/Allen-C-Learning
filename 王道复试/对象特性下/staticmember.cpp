#include<iostream>
using namespace std;
/*class Person{

public:
    //所有对象都共享同一份数据，编译阶段就分配内存（全局区）
    //类内声明，类外初始化
    static int m_a;
    //静态成员变量有访问权限的
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
//通过对象访问，通过类名访问 静态变量
    cout << Person::m_a << endl;
    cout << Person::m_b << endl;
}*/
class Person{
public:
    //静态成员函数
    static void func(){
        m_a = 100;
        m_b = 200;
        cout << "静态成员函数调用" << endl;
    }
    static int m_a;
    int m_b;
};
int Person::m_a = 0;
void test01(){
    Person p;
    p.func();//对象访问
    Person::func();//类名访问
}
int main(){

    test01();
    return 0;
}
