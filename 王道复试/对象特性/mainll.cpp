#include<iostream>
using namespace std;
//构造函数的调用规则;//默认构造和析构函数为空实现。拷贝构造为值拷贝

class Person{
public:
    Person(int age){
        cout << "默认构造" << endl;
    }
    Person(const Person &p){
        cout << "默认构造" << endl;
    }

    ~Person(){
        cout << "析构构造" << endl;
    }
    int m_age;

};
int main(){
    Person p1(10);
    Person p(p1);

    return 0;
}
