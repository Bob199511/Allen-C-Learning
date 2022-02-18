#include<iostream>
#include<string.h>
//类模板与函数模板的区别
using namespace std;
class person1{
public:
    void showPerson1(){
        cout << "name = "<<endl;
    }

};
class person2{
public:
    void showPerson2(){
        cout << "222name = "<<endl;
    }

};

template<class T>
class MyClass{
public:

    T obj;

    void func1(){
        obj.showPerson1();
    }
    void func2(){
        obj.showPerson2();
    }
};
void test01(){

    MyClass<person1>p;
    p.func1();
}
int main(){
    test01();
    return 0;
}
