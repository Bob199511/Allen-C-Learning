#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
//反转链表，采用三个指针，采用头插法
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL)
        return head;
    struct ListNode* p = head->next;
    struct ListNode* q = p;
    head->next = NULL;
    while(p != NULL){
        q = p->next;

        p->next = head;
        head = p;
        p = q;
    }
    return head;
}
//递归法
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;
    struct ListNode* newhead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
//标志法
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL)
        return head;
    //设置哨兵
    struct ListNode* flag = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = head;
    flag->next = NULL;
    while(head != NULL){
        p = p->next;
        head->next = flag->next;
        flag->next = head;
        head = p;
    }
    head = flag->next;
    free(flag);
    flag = NULL;
    return head;
}

//快慢指针法，查找中间节点+
struct ListNode* middleNode(struct ListNode* head){
    while(head == NULL || head->next == NULL)
        return head;
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
//快慢指针法，判断是否有环
bool hasCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL)
        return false;
    struct ListNode* slow = head->next;
    struct ListNode* fast = head->next->next;
    while(fast != slow){
        if(fast == NULL || fast->next == NULL)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}


//合并两个有序链表


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//不带哨兵位的尾插法
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;
    struct ListNode* head = NULL;
    struct ListNode* p = NULL;
    if(list1->val > list2->val){//确定头结点不带哨兵
            head = list2;
            list2 = list2->next;
    }
    else{
        head = list1;
        list1 = list1->next;
    }
    p = head;
    while(list1 !=NULL && list2 !=NULL){
        if(list1->val > list2->val){
            p->next = list2;
            list2 = list2->next;
        }
        else{
            p->next = list1;
            list1 = list1->next;
        }
    p = p->next;
    }
    if(list1 != NULL)
        p->next = list1;
    if(list2 != NULL)
        p->next = list2;
    return head;
}
//带哨兵位的尾插法
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p = head;
    head->next = NULL;
    while(list1 !=NULL && list2 !=NULL){
        if(list1->val > list2->val){
            p->next = list2;
            list2 = list2->next;
        }
        else{
            p->next = list1;
            list1 = list1->next;
        }
    p = p->next;
    }
    if(list1 != NULL)
        p->next = list1;
    if(list2 != NULL)
        p->next = list2;
    p = head->next;
    free(head);
    head = NULL;
    return p;
}
//递归
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    //将链表插入另一链表
    if(!list1)
        return list2;
    if(!list2)
        return list1;
    if(list1->val > list2->val){
        list2->next = mergeTwoLists(list2->next, list1);
        return list2;
    }
    else{
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }

}
