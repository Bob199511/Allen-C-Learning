#include<iostream>
using namespace std;
//��������������
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
//�����չ�µĹ��ܣ���Ҫ�޸�Դ�� ������ʵ�����У��ᳫ ����ԭ�򣨶���չ���п��ţ����޸Ľ��йرգ�
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
//���ö�̬ʵ�ּ�����
//��̬�ô���1.��֯�ṹ����   2.�ɶ���ǿ   3.������ ����ǰ�ںͺ�����չά���ɱ��ߵ� �������
//ʵ�ּ������Ļ��ࣨ�����ࣩ
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
//��̬ʹ������������ָ�������ָ���������

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
