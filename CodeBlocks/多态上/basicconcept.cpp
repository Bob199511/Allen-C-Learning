#include <iostream>
using namespace std;
//��̬
class animal{
public:

    virtual void speak(){
        cout << "������˵��" << endl;
    }
};
class cat :public animal{
public:
    //��д ��������ֵ���� ������ �����б���ȫ��ͬ
    virtual void speak(){
        cout << "Сè��˵��" << endl;
    }
};
//animal�к�����ַ��󶨣� �ڱ���׶�ȷ��������ַ������Ƕ�����˵��
//�����ִ����è˵������ô���������ַ������ǰ�󶨣���Ҫ�����н׶ΰ󶨣���voidspeak()ǰ��virtual�����������Сè��˵��
void dospeak(animal &ani){  //animal& ani = cat1
    ani.speak();
}
void test01(){
    cat cat1;
    dospeak(cat1);
}
void test02(){
    cout << sizeof(animal) << endl;//�����С��1,�ڲ���������virtual��Ϊָ���ֽڴ�С
}
int main()
{
    test01();
    test02();
    return 0;
}
