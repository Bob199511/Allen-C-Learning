#include <stdio.h>
#include <stdlib.h>

//双指针玩法
int removeElement(int* nums, int numsSize, int val){
    int src = 0, det = 0;
    while(src < numsSize){
        if(nums[src] != val)
            nums[det++] = nums[src++];
        else
            src++;
    }
    return det;
}

/*//双标记法，一前一后夹击
int removeElement(int* nums, int numsSize, int val){
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            nums[i] = nums[numsSize - 1];//数组最后一个下标记
            --numsSize;
            ++i;//防止条调换的元素为val
        }
    }
    return numsSize;
}*/


/*//原地移除元素,利用O(1) 额外空间
int removeElement(int* nums, int numsSize, int val){

    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            for(int j = i; j < numsSize - 1; j++)//注意j+1的范围，容易越界
                nums[j] = nums[j + 1];
            --numsSize;
        }
        i--;//注意两个val值连续出现的情况
    }
    //printf("%d", numsSize);
    return numsSize;
}*/

int main()
{
    int nums[] = {3, 2, 2, 3}, val = 3;
    removeElement(nums, sizeof(nums) / sizeof(nums[0]), val);
    return 0;
}
