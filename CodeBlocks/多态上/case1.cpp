#include<iostream>
using namespace std;
//案例：计算器类
class Calculator{
public:
    int getResult(string oper){
        if(oper == "+"){
            return number1 + number2;
        }
        else if(oper ==  "-") {
            return number1 - number2;
        }
        else if(oper ==  "*") {
            return number1 * number2;
        }
//如果拓展新的功能，需要修改源码 ；在真实开发中，提倡 开闭原则（对拓展进行开放，对修改进行关闭）
    }
    int number1;
    int number2;
};

void test01(){

    Calculator c;
    c.number1 = 10;
    c.number2 = 10;

    cout << c.number1 << "+" << c.number2 << "=" << c.getResult("+") <<endl;
    cout << c.number1 << "-" << c.number2 << "=" << c.getResult("-") <<endl;
}
//利用多态实现计算器
//多态好处：1.组织结构清晰   2.可读性强   3.有利于 对于前期和后期拓展维护成本高的 代码改善
//实现计算器的基类（抽象类）
class AbstractCalculator{
public:
    virtual int getResult(){

        return 0;
    }
    int m_num1;
    int m_num2;
};
class AddCalculator: public AbstractCalculator{
public:
    int getResult(){
        return m_num1 + m_num2;
    }
};
class SubCalculator: public AbstractCalculator{
public:
    int getResult(){
        return m_num1 - m_num2;
    }
};
class MulCalculator: public AbstractCalculator{
public:
    int getResult(){
        return m_num1 * m_num2;
    }
};

void test02(){
//多态使用条件：父类指针或引用指向子类对象

    AbstractCalculator * abc = new AddCalculator;
    abc->m_num1 = 10;
    abc->m_num2 = 10;
    cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getResult() <<endl;

    MulCalculator * ab = new MulCalculator;
    ab->m_num1 = 10;
    ab->m_num2 = 10;
    cout << ab->m_num1 << "*" << ab->m_num2 << "=" << ab->getResult() <<endl;
}
int main(){

    test02();
    //test01();
    return 0;
}
