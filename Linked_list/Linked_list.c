#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"

// 链表是否为空
int isEmpty(LinkList head)
{
    return head->next == NULL;
}
// 链表是否已满
int isFull(LinkList head)
{
    LNode *p = (LNode *)malloc(sizeof(LNode));
    if (p == NULL)
        return 1;
    free(p);
    return 0;
}
// 链表插入元素
void insert(LinkList head, int data)
{
    LNode *p = (LNode *)malloc(sizeof(LNode));
    if (p == NULL)
    {
        printf("Memory allocation error!\n");
        return;
    }
    p->data = data;
    p->next = head->next;
    head->next = p;
}
// 链表删除元素
void delete(LinkList head, int data)
{
    LNode *p = head->next, *q;
    while (p != NULL && p->data != data)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
        printf("Element not found!\n");
    else
    {
        q->next = p->next;
        printf("删除元素：%d\n", p->data);
        free(p);
    }
}
// 链表遍历
void traverse(LinkList head)
{
    LNode *p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
// 链表销毁
void destroy(struct LinkedList* temp)
{
    int size=0;
    //遍历销毁
    while (temp->head->next != NULL)
    {
        LNode *p = temp->head->next;
        temp->head->next = p->next;
        free(p);
        size++;
    }
    free(temp);
    temp = NULL;
    printf("链表已销毁,大小：%d byte\n",size);
}
// 初始化链表
LinkedList* init(void)
{  
    int size = sizeof(LinkedList);
    LinkedList* temp=(LinkedList*)malloc(size);
    temp->head = (LNode *)malloc(sizeof(LNode));
    printf("创建对象大小：%d byte\n",size);
            temp->head->next = NULL;
            temp->delete = delete;
            temp->insert = insert;
            temp->isEmpty = isEmpty;
            temp->isFull = isFull;
            temp->traverse = traverse;
            temp->destroy = destroy;
    return temp;
}
