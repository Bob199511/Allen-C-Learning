#include <iostream>
#include<algorithm>
using namespace std;
//赋值运算符重载
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
    //重载 赋值运算符
    Person & operator=(Person &p){
        //编译器提供浅拷贝；
        //先判断是否有属性在堆区，如果有先释放干净，再深拷贝
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age);//深拷贝
        return *this;//返回对象本身
    }
    int *m_age;
};
void test01(){
    Person p1(18);
    Person p2(20);
    Person p3(20);
    p3 = p2 = p1;
    p2 = p1;//编译器给到的赋值操作,浅拷贝,析构后造成堆区内存重复释放
    cout << "p1的年龄为" << *p1.m_age << endl;
    cout << "p2的年龄为" << *p2.m_age << endl;
    cout << "p3的年龄为" << *p3.m_age << endl;
}
void test02(){

}

int main()
{
    test01();
    return 0;
}
