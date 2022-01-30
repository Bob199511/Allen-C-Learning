#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define size 2000000
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void InsertSort(int* arr){//直接插入排序
    int i = 0, j = 0;
    for(i = 1; i < size; ++i){
        int temp = arr[i];
        for(j = i; j > 0; --j){
            if(arr[j - 1] > temp)
                arr[j] = arr[j - 1];
            else
                break;
        }
        arr[j] = temp;
    }
}

void ShellSort(int* arr){
    int gap = size / 2;
    while(gap >= 1){
        int i = 0, j = 0;
        for(i = gap; i < size; ++i){
            int temp = arr[i];
            for(j = i; j >= gap; j -= gap)
                if(arr[j - gap] > temp)
                    arr[j] = arr[j - gap];
                else
                    break;
            arr[j] = temp;
        }
        gap /= 2;
    }
}

void SelectSort(int* arr){
    int i = 0;
    for(i = 0; i < size; ++i){
        int j = i;
        int min = arr[j], min_flag = j;
        while(j < size - 1){
            if(arr[j + 1] < min){
                min = arr[j + 1];
                min_flag = j + 1;
            }
            j++;
        }
        swap(&arr[i], &arr[min_flag]);
    }
}

void BuildHeap(int* arr, int start, int HeapSize){//构建大顶堆,start为调整堆的起点
    int Pnode = (HeapSize - 2) / 2;
    int i = 0;
    for(i = start; i >= 0; --i){
        int j = i; //j代表父节点
        for(; j >= Pnode ;){
            if(arr[2 * j + 1] > arr[2 * j + 2]){
                if (arr[j] < arr[2 * j + 1]){
                    swap(&arr[j], &arr[2 * j + 1]);
                    j = 2 * j + 1;
                    }
                else
                    break;
            }
            else
                if (arr[j] < arr[2 * j + 2]){
                    swap(&arr[j], &arr[2 * j + 2]);
                    j = 2 * j + 2;
                }
                else
                    break;
        }
    }

}

void HeapSort(int* arr){
    int num = 0;
    BuildHeap(arr, (size - 2) / 2, size);
    for(num = size; num > 2; --num){//不断将栈顶元素放到栈底，栈大小自减1
        swap(&arr[0], &arr[num - 1]);
        BuildHeap(arr, 0, num);
    }
}

void BubbleSort(int *arr){
    int i = 0, j = 0, flag = 1;
    for(i = 0; i < size - 1 && flag == 1; ++i){
        flag = 0;
        for(j = size - 1; j > i; --j){
            if(arr[j] < arr[j - 1]){
                swap(&arr[j - 1], &arr[j]);
                flag = 1;
            }
        }
    }
}

void QuickSort(int *arr, int start, int end){
    int i = start, j = end;
    int pivot = arr[start];//i代表队列前面，筛选小于pivot的元素；j筛选大于pivot的元素
    while(i < j){
        while(pivot <= arr[j] && i < j) --j;
        arr[i] = arr[j];
        while(pivot > arr[i] && i < j) ++i;
        arr[j] = arr[i];
    }
    arr[i] = pivot;
    if(start < end){
    QuickSort(arr, start, i - 1);
    QuickSort(arr, i + 1, end);
    }
}

void test(){//均为升序

    int* p1 = (int *)malloc(size * sizeof(int));
    int* p2 = (int *)malloc(size * sizeof(int));
    int* p3 = (int *)malloc(size * sizeof(int));
    int* p4 = (int *)malloc(size * sizeof(int));
    int* p5 = (int *)malloc(size * sizeof(int));
    int* p6 = (int *)malloc(size * sizeof(int));
    int* p7 = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size ; i++){
        p7[i] = p6[i] = p5[i] = p4[i] = p3[i] = p2[i] = p1[i] = rand();
        //printf("%d ", p1[i]);
    }
    printf("\n");

    int start1 = clock();
    InsertSort(p1);
    int end1 = clock();
    for(int i = 0; i < size ; i++){
        //printf("%d ", p1[i]);
    }
    printf("\n%d\n", end1 - start1);

    int start2 = clock();
    ShellSort(p2);
    int end2 = clock();
    for(int i = 0; i < size ; i++){
       // printf("%d ", p2[i]);
    }
    printf("\n%d\n",end2 - start2);

    int start3 = clock();
    ShellSort(p3);
    int end3 = clock();
    for(int i = 0; i < size ; i++){
        //printf("%d ", p3[i]);
    }
    printf("\n%d\n",end3 - start3);

    int start4 = clock();
    ShellSort(p4);
    int end4 = clock();
    for(int i = 0; i < size ; i++){
        //printf("%d ", p4[i]);
    }
    printf("\n%d\n",end4 - start4);

    int start5 = clock();
    BubbleSort(p5);
    int end5 = clock();
    for(int i = 0; i < size ; i++){
        //printf("%d ", p5[i]);
    }
    printf("\n%d\n",end5 - start5);

    int start6 = clock();
    QuickSort(p6, 0 ,size - 1);
    int end6 = clock();
    for(int i = 0; i < size ; i++){
        //printf("%d ", p6[i]);
    }
    printf("\n%d\n",end6 - start6);
}

int main()
{
    srand((unsigned)time(NULL));
    test();
    printf("Hello world!\n");
    return 0;
}
