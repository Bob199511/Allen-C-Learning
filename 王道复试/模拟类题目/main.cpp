#include<iostream>
#include<cstdlib>
using namespace std;

void sub_L(int* arr, int left, int right){
    for(; left <= right; left++)
        arr[left] = 0;//ȥ��right��left֮�����

}

int main(void){
    int L = 0, M = 0;
    while(scanf("%d %d", &L, &M) != EOF){
        int *arr = (int *)malloc(sizeof(int) * (L + 1));
        for(int i = 0; i < (L + 1); i++)
            arr[i] = 1;//������Ԫ��Ϊ1��ʾÿ����λ����
        int left = 0, right = 0;

        for(int i = 0; i < M; ++i){//�����������䲢������
            scanf("%d %d", &left, &right);
            sub_L(arr, left, right);
        }

        int sum = 0;//��ʣ���������
        for(int i = 0; i < (L + 1); i++)
            if(arr[i] == 1)
                ++sum;
        cout << sum << endl;
    }
    return 0;
}
