#include <iostream>
using namespace std;
//函数模板
template<typename T> //声明一个模板，后面代码中紧跟找T不要报错，T是通用数据类型
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b= temp;
}
void test01(){

    int a = 10;
    int b = 20;
    //两种方式使用函数模板1.自动类型推到 2.显示指定数据类型
    //mySwap(a, b);
    mySwap<int>(a, b);
    cout << a << endl << b << endl;
}
int main()
{
    test01();
    return 0;
}
