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
    void speak(){
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
int main()
{
    test01();
    return 0;
}
