#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//vector容器存放内置的数据类型
void myPrint(int val){
    cout << val << endl;
}
void test01(){
    vector<int> v;//创建了一个vector容器，可以看作为数组
    v.push_back(10);//尾插数据
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通过迭代器访问容器中数据
//    vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
//    vector<int>::iterator itEnd = v.end();//结束迭代器，指向最后一个元素的下一个位置，无意义
//
//    //第一种遍历
//    while(itBegin != itEnd){
//        cout << *itBegin << endl;
//        itBegin++;
//    }
//第二种遍历
//    for(vector<int>::iterator it = v.begin(); it !=v.end(); ++it) {
//
//        cout << *it <<endl;
//    }
//第三种遍历方式 利用STL进行遍历

    for_each(v.begin(),v.end(),myPrint);
}
int main()
{
    test01();
    return 0;
}
