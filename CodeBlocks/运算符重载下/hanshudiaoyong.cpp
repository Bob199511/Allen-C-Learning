#include<iostream>
using namespace std;
class myprint{
public:
    //���صĺ������������
    void operator()(string test){
        cout << test << endl;
    }

};
//�º����ǳ���û�й̶�д��
//�ӷ���
class myadd{
public:

    int operator()(int num1, int num2){
    return num1 + num2;
    }
};
void test01(){
    myprint p;
    p("hello world");//ʹ�������ǳ��������ã���˽зº���
    myadd q;
    int num = q(2 ,6);
    cout << num << endl;//��������
    cout << myadd()(100, 100) << endl;

}
int main(){
    test01();
    return 0;
}
