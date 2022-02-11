#include <iostream>
using namespace std;
//多态
class animal{
public:

    virtual void speak(){
        cout << "动物在说话" << endl;
    }
};
class cat :public animal{
public:
    //重写 函数返回值类型 函数名 参数列表完全相同
    virtual void speak(){
        cout << "小猫在说话" << endl;
    }
};
//animal中函数地址早绑定， 在编译阶段确定函数地址输出的是动物在说话
//如果想执行让猫说话，那么这个函数地址不能提前绑定，需要在运行阶段绑定（在voidspeak()前加virtual），输出的是小猫在说话
void dospeak(animal &ani){  //animal& ani = cat1
    ani.speak();
}
void test01(){
    cat cat1;
    dospeak(cat1);
}
void test02(){
    cout << sizeof(animal) << endl;//空类大小是1,内部函数加了virtual后，为指针字节大小
}
int main()
{
    test01();
    test02();
    return 0;
}
