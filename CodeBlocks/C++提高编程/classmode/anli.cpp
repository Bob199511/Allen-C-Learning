#include"MyArray.hpp"

using namespace std;



void test01(){
     MyArray<int>arr1(15);
     MyArray<int>arr2(arr1);
        MyArray<int>arr3(10);
      arr3 = arr1;

}
int main(){
    test01();
    return 0;
}
