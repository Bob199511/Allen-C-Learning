#include <iostream>

using namespace std;
//this指针：解决名称冲突，返回对象本身用*this
class Person{
public:
    Person(int age){
        this->age = age;//this指针指向的是被调用的成员函数p1所属对象
    }

    Person& PersonADDage(Person &p){
        this->age += p.age;//this指向P2的指针，*this为P2
        return *this;
    }

    int age;
};
void test01(){
   Person p1(18);
   cout << "p1的年龄为" << p1.age << endl;
}
void test02(){
    Person P1(10);

    Person P2(10);
    P2.PersonADDage(P1).PersonADDage(P1).PersonADDage(P1);
    //cout << "p2的年龄为" << P2.age << endl;//年龄结果为20
    cout << "p2的年龄为" << P2.age << endl;//年龄结果为20
    //返回Person方式结果仍为20，因为出现的P2的拷贝
    //Person& 方式返回的是P2本身，结果为40

}
int main()
{
    //test01();
    test02();
    return 0;
}
