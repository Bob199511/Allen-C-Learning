#include <iostream>

using namespace std;
//ȫ�ֺ�������Ԫ
class Building{
    //�˺������Է��ʴ����е�˽������
    friend void goodGay(Building &building);

public:
    Building(){
        m_sittingRoom = "����";
        m_BedRoom = "����";
        }
public:
    string m_sittingRoom;

private:
    string m_BedRoom;
};
//ȫ�ֺ���
void goodGay(Building &building){
    cout << "ȫ�ֺ����ڷ���" << building.m_sittingRoom << endl;
    cout << "ȫ�ֺ����ڷ���" << building.m_BedRoom << endl;
}
void test01(){
    Building building;
    goodGay(building);

}
int main()
{
    test01();
    return 0;
}
