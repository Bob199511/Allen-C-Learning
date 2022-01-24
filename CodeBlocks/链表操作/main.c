#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
//��ת������������ָ�룬����ͷ�巨
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
//�ݹ鷨
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next == NULL)
        return head;
    struct ListNode* newhead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
//��־��
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL)
        return head;
    //�����ڱ�
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
