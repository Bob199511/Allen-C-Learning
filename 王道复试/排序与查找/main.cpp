#include <iostream>
#include<algorithm>
using namespace std;
//对输入的n个数进行排序并输出。
int main()
{   int n = 0;
    while(scanf("%d", &n) != EOF){
        int arr[n];
        for(int i = 0; i < n && cin >> arr[i]; ++i);
        sort(arr, arr + n);//采用C++自带的快排
        for(int i = 0; i < n; ++i)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
