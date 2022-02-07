#include<iostream>
using namespace std;
class myprint{
public:
    //重载的函数调用运算符
    void operator()(string test){
        cout << test << endl;
    }

};
//仿函数非常灵活，没有固定写法
//加法类
class myadd{
public:

    int operator()(int num1, int num2){
    return num1 + num2;
    }
};
void test01(){
    myprint p;
    p("hello world");//使用起来非常像函数调用，因此叫仿函数
    myadd q;
    int num = q(2 ,6);
    cout << num << endl;//匿名函数
    cout << myadd()(100, 100) << endl;

}
int main(){
    test01();
    return 0;
}
