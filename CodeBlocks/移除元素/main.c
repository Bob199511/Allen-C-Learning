#include <stdio.h>
#include <stdlib.h>

//˫ָ���淨
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

/*//˫��Ƿ���һǰһ��л�
int removeElement(int* nums, int numsSize, int val){
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            nums[i] = nums[numsSize - 1];//�������һ���±��
            --numsSize;
            ++i;//��ֹ��������Ԫ��Ϊval
        }
    }
    return numsSize;
}*/


/*//ԭ���Ƴ�Ԫ��,����O(1) ����ռ�
int removeElement(int* nums, int numsSize, int val){

    for(int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            for(int j = i; j < numsSize - 1; j++)//ע��j+1�ķ�Χ������Խ��
                nums[j] = nums[j + 1];
            --numsSize;
        }
        i--;//ע������valֵ�������ֵ����
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
