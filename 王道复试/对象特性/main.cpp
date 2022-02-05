#include <iostream>
using namespace std;
//构造函数的分类及调用：无惨和有参构造;扑通构造函数和拷贝构造函数
class Person{
public:
    Person(){
        cout << "无参构造函数的调用" << endl;
    }
    Person(int a){
        age = a;
        cout << "有参构造函数的调用" << endl;
    }
    //拷贝构造函数,复制一份p,限制参数不能修改p
    Person(const Person &p){
        age = p.age;//将传入的人身上所有属性拷贝到我身上
        cout << "拷贝构造函数的调用" << endl;
    }
    ~Person(){
        cout << "析构函数的调用" << endl;
    }
    int age;

};
//调用：隐式转换法
void test01(){
    Person p1;
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造
    Person p4 = 10;//相当于Person p4 = Person(10)——有参构造
    Person p5 = p4;//等价于Person p5 = Person(p4)——拷贝构造
}
int main()
{
    test01();
    system("pause");

    return 0;
}
