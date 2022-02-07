#include <iostream>

using namespace std;
//加号运算符重载：1.成员函数2.全局函数
class Person{
public:
   // Person operator+(Person &p){
        //Person temp;
        //temp.m_a = this->m_a + p.m_a;
        //temp.m_b = this->m_b + p.m_b;
        //return temp;
    //}
    int m_a;
    int m_b;
};
Person operator+(Person &p1, int num){
    Person temp;
    temp.m_a = p1.m_a + num;
    temp.m_b = p1.m_b + num;
    return temp;
}
void test01(){
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    Person p2;
    p2.m_a = 10;
    p2.m_b = 10;
    Person p3 = operator+(p1, 10);
    Person p4 = p1 + 10;
    cout << p3.m_a << endl;
    cout << p4.m_a << endl;
}
//全局函数重载

int main()
{
    test01();
    cout << "Hello world!" << endl;
    return 0;
}
