#include <iostream>
#include<algorithm>
using namespace std;
//�������n�����������������
int main()
{   int n = 0;
    while(scanf("%d", &n) != EOF){
        int arr[n];
        for(int i = 0; i < n && cin >> arr[i]; ++i);
        sort(arr, arr + n);//����C++�Դ��Ŀ���
        for(int i = 0; i < n; ++i)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
