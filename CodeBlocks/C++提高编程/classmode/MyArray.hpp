#pragma once
#include<iostream>
#include<string>
using namespace std;

template <class T>
class MyArray{

 public:
     MyArray(int capacity){
        cout << "Myarry有参构造" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_capacity];

     }
     MyArray(const MyArray&arr){
         cout << "Myarry拷贝构造" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];
        for(int i = 0; i < this->m_size; ++i){
            this->pAddress[i] = arr.pAddress[i];
        }
     }
     MyArray& operator=(const MyArray& arr) {
         cout << "Myarry   =" << endl;
        //吸纳判断原来堆区是否有数据，如果有释放
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        for(int i = 0; i < this->m_size; ++i){
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;

     }
     //尾插法
     void PushBack(const T &val){
        if(this->m_capacity == this->m_size)
            return;
        this->pAddress[this->m_size] = val;
        this->m_size++;
     }
     //尾删法
     void PopBack(){
         if(this->m_size == 0)
            return;
        this->m_size--;
     }
     //通过下标访问数组中元素
     T& operator[](int index){
        return this->pAddress[index];
     }
     //返回数组的容量
     int getCapacity(){
        return this->m_capacity;
     }
     int getSize(){
        return this->m_size;
     }

     //返回数组的大小

     ~MyArray(){
         cout << "Myarry析构" << endl;
        if(this->pAddress != NULL)
            delete [] this->pAddress;
        this->pAddress = NULL;
     }
private:
    T * pAddress;
    int m_size;
    int m_capacity;

};
