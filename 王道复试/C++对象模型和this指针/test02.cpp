#include<iostream>

using namespace std;
//常函数，常对象
class Person{
public:

    void showperson()const{//()后加const限制了m_age为可读
        //m_age = 100;
        //this = NULL;this指针不可以修改指针的指向
        m_B = 100;
    }
    int m_age = 10;
    mutable int m_B = 10;//特殊变量，即使在常函数中，也可以修改这个值
};
void test01(){
    Person p1;

    p1.showperson();
}
void test02(){
    const Person p1;//在对向前加const变为常对象
    p1.m_age = 100;
    p1.m_B = 100;
    p1.showperson();
}
int main(){

    return 0;
}
