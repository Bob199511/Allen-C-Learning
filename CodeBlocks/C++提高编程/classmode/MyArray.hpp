#pragma once
#include<iostream>
#include<string>
using namespace std;

template <class T>
class MyArray{

 public:
     MyArray(int capacity){
        cout << "Myarry�вι���" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_capacity];

     }
     MyArray(const MyArray&arr){
         cout << "Myarry��������" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];
        for(int i = 0; i < this->m_size; ++i){
            this->pAddress[i] = arr.pAddress[i];
        }
     }
     MyArray& operator=(const MyArray& arr) {
         cout << "Myarry   =" << endl;
        //�����ж�ԭ�������Ƿ������ݣ�������ͷ�
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
     //β�巨
     void PushBack(const T &val){
        if(this->m_capacity == this->m_size)
            return;
        this->pAddress[this->m_size] = val;
        this->m_size++;
     }
     //βɾ��
     void PopBack(){
         if(this->m_size == 0)
            return;
        this->m_size--;
     }
     //ͨ���±����������Ԫ��
     T& operator[](int index){
        return this->pAddress[index];
     }
     //�������������
     int getCapacity(){
        return this->m_capacity;
     }
     int getSize(){
        return this->m_size;
     }

     //��������Ĵ�С

     ~MyArray(){
         cout << "Myarry����" << endl;
        if(this->pAddress != NULL)
            delete [] this->pAddress;
        this->pAddress = NULL;
     }
private:
    T * pAddress;
    int m_size;
    int m_capacity;

};
