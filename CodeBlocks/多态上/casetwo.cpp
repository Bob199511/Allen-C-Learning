#include<iostream>
#include<string>
using namespace std;
//虚析构和纯虚析构 ，都是解决子类中析构代码无法实现的问题
class Animal{
public:
    //纯虚函数
    virtual void speak() = 0;
    //virtual ~Animal(){//虚析构，不需要实现。可以实例化对象（没有虚构函数的情况下）
    //    cout << "animal析构函数的调用" << endl;
    //}
    virtual ~Animal() = 0;//纯虚析构,需要进行代码的实现，也属于抽象类，无法实例化对象
};
Animal::~Animal() {
    cout << "animal的纯析构函数的调用" << endl;
}
class Cat:public Animal{
public:
    Cat(string name){
        m_name = new string(name);
    }
    void speak(){
        cout << *m_name << "小猫在说话" << endl;
    }
    ~Cat(){
        if(m_name != NULL){
            cout << "Cat的析构函数调用" << endl;
            delete m_name;
            m_name = NULL;
        }
    }

    string *m_name;
};
void test01(){
    Animal *animal = new Cat("Tom");
    animal -> speak();
    //父类在调用子类时，不会调用子类的虚构函数，造成内存泄露
    //解决方法：利用虚析构可以解决 父类指针释放子类对象不干净的问题
    delete animal;
    animal = NULL;
}
int main(){

    test01();
    return 0;
}

/*#include<iostream>
using namespace std;
//多态案例二：制作饮品
class AbstractDrinking{

public:
    //煮水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加入辅料
    virtual void PutSomething() = 0;
    //制作饮品
    void makeDrink(){
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }

};
class Coffee:public AbstractDrinking{
public:
    //煮水
    virtual void Boil() {
        cout << "煮农夫山泉" << endl;
    }
    //冲泡
    virtual void Brew() {
        cout << "冲泡咖啡" << endl;
    }
    //倒入杯中
    virtual void PourInCup() {
        cout << "倒入杯中" << endl;
    }
    //加入辅料
    virtual void PutSomething() {
        cout << "放入糖和咖啡" << endl;
    }
    //制作饮品
};
class Tea:public AbstractDrinking{
public:
    //煮水
    virtual void Boil() {
        cout << "煮矿泉水" << endl;
    }
    //冲泡
    virtual void Brew() {
        cout << "冲泡茶叶" << endl;
    }
    //倒入杯中
    virtual void PourInCup() {
        cout << "倒入杯中" << endl;
    }
    //加入辅料
    virtual void PutSomething() {
        cout << "放入枸杞和菊花" << endl;
    }
    //制作饮品
};
void doWork(AbstractDrinking *abs){

    abs->makeDrink();
    delete abs;
}

void test01(){
//制作咖啡和茶，一个接口有多种形态
    doWork(new Coffee);
    cout << "_____________" << endl;
    doWork(new Tea);
}
int main(){

    test01();
    return 0;
}
*/
