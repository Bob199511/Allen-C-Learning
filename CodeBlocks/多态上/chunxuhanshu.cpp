#include<iostream>
using namespace std;
//纯虚函数 virtual 返回值类型 函数名 （参数列表） = 0；
class Base{
public:
    virtual void func() = 0;//这是一个纯虚函数，这个类称为抽象类
    //特点：1.无法实例化对象
    //2.抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
};
class Son: public Base{
public:
    virtual void func(){ //子类重写父类中的纯虚函数，进行实例化对象
    }
};
void test01(){

    Son s1;//可以实例化
    //Base b;
    //new Base;
}
int main(){

    return 0;
}
