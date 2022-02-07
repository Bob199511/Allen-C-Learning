#include <iostream>

using namespace std;
class Person{
    friend ostream & operator<<(ostream &cout, Person p);
public:
    //左移运算符重载 p.operator<<(cout),简化版本p << cout
    //不会利用成员函数来重载左移运算符，因为无法实现 cout 在左侧
    //void operator<<(){
    //}
    Person(int a, int b){
    m_a = a;
    m_b = b;
    }
private:
    int m_a;
    int m_b;
};
//只能用全局函数重载左移运算符
ostream & operator<<(ostream &cout, Person p){//本质 operator<<(cout, p),简化cout << p;

    cout << "m_a = " << p.m_a << "m_b = " << p.m_b;
    return cout;

}
void test01(){
    Person p(10 , 10);
    cout << p << endl;//可以无限叠加，
    //每调用一次返回cout，也可以起别名在形参中
}


int main()
{
    test01();
    cout << "Hello world!" << endl;
    return 0;
}
