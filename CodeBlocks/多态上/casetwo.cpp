#include<iostream>
#include<string>
using namespace std;
//�������ʹ������� �����ǽ�����������������޷�ʵ�ֵ�����
class Animal{
public:
    //���麯��
    virtual void speak() = 0;
    //virtual ~Animal(){//������������Ҫʵ�֡�����ʵ��������û���鹹����������£�
    //    cout << "animal���������ĵ���" << endl;
    //}
    virtual ~Animal() = 0;//��������,��Ҫ���д����ʵ�֣�Ҳ���ڳ����࣬�޷�ʵ��������
};
Animal::~Animal() {
    cout << "animal�Ĵ����������ĵ���" << endl;
}
class Cat:public Animal{
public:
    Cat(string name){
        m_name = new string(name);
    }
    void speak(){
        cout << *m_name << "Сè��˵��" << endl;
    }
    ~Cat(){
        if(m_name != NULL){
            cout << "Cat��������������" << endl;
            delete m_name;
            m_name = NULL;
        }
    }

    string *m_name;
};
void test01(){
    Animal *animal = new Cat("Tom");
    animal -> speak();
    //�����ڵ�������ʱ���������������鹹����������ڴ�й¶
    //����������������������Խ�� ����ָ���ͷ�������󲻸ɾ�������
    delete animal;
    animal = NULL;
}
int main(){

    test01();
    return 0;
}

/*#include<iostream>
using namespace std;
//��̬��������������Ʒ
class AbstractDrinking{

public:
    //��ˮ
    virtual void Boil() = 0;
    //����
    virtual void Brew() = 0;
    //���뱭��
    virtual void PourInCup() = 0;
    //���븨��
    virtual void PutSomething() = 0;
    //������Ʒ
    void makeDrink(){
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }

};
class Coffee:public AbstractDrinking{
public:
    //��ˮ
    virtual void Boil() {
        cout << "��ũ��ɽȪ" << endl;
    }
    //����
    virtual void Brew() {
        cout << "���ݿ���" << endl;
    }
    //���뱭��
    virtual void PourInCup() {
        cout << "���뱭��" << endl;
    }
    //���븨��
    virtual void PutSomething() {
        cout << "�����ǺͿ���" << endl;
    }
    //������Ʒ
};
class Tea:public AbstractDrinking{
public:
    //��ˮ
    virtual void Boil() {
        cout << "���Ȫˮ" << endl;
    }
    //����
    virtual void Brew() {
        cout << "���ݲ�Ҷ" << endl;
    }
    //���뱭��
    virtual void PourInCup() {
        cout << "���뱭��" << endl;
    }
    //���븨��
    virtual void PutSomething() {
        cout << "������轺;ջ�" << endl;
    }
    //������Ʒ
};
void doWork(AbstractDrinking *abs){

    abs->makeDrink();
    delete abs;
}

void test01(){
//�������ȺͲ裬һ���ӿ��ж�����̬
    doWork(new Coffee);
    cout << "_____________" << endl;
    doWork(new Tea);
}
int main(){

    test01();
    return 0;
}
*/
