#include <iostream>
using namespace std;
//����ģ��
template<typename T> //����һ��ģ�壬��������н�����T��Ҫ����T��ͨ����������
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b= temp;
}
void test01(){

    int a = 10;
    int b = 20;
    //���ַ�ʽʹ�ú���ģ��1.�Զ������Ƶ� 2.��ʾָ����������
    //mySwap(a, b);
    mySwap<int>(a, b);
    cout << a << endl << b << endl;
}
int main()
{
    test01();
    return 0;
}
