#include <iostream>
#include <cstring>
using namespace std;
//�ó�Ա��������Ԫ
class Building;
class goodgay{
public:
    goodgay();
    void visit();//�òιۺ������Է���Building�е�˽�г�Ա
    void visit2();//�òιۺ��������Է���Building�е�˽�г�Ա
    Building *building;
};

class Building{
    friend void goodgay::visit();
    //goodgay�µ�visit()�����Ǳ���ĺ����ѣ�
    //���Է���������˽�г�Ա��visit2()���ܷ���
public:
    Building();//***�޲ι��캯��
public:
    string m_sittingRoom;

private:
    string m_BedRoom;
};
//����д��Ա����
goodgay::goodgay(){
    //�������������
    building = new Building;//�ڶ�������Building�����

}
void goodgay::visit(){
    cout << "visit �������ڷ��ʣ�" << building->m_sittingRoom << endl;
    cout << "visit �������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void goodgay::visit2(){
    cout << "visit2 �������ڷ��ʣ�" << building->m_sittingRoom << endl;
}
Building::Building(){
    m_sittingRoom = "����";
    m_BedRoom = "����";
    }

void test01(){
    goodgay gg;
    gg.visit();
    gg.visit2();

}
int main()
{
    test01();
    return 0;
}
