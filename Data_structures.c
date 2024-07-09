#include <stdio.h>
#include <stdlib.h>
// 链表
#define MAXSIZE 100
// 定义链表结构
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;
// 初始化链表
LinkList init()
{
    LinkList head = (LinkList)malloc(sizeof(LNode));
    head->next = NULL;
    return head;
}
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
    LNode *p = head->next, *q = NULL;
    while (p != NULL && p->data != data)
    {
        q = p;
        p = p->next;
    }
    if (p == NULL)
        return;
    if (q == NULL)
        head->next = p->next;
    else
        q->next = p->next;
    free(p);
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
void destroy(LinkList head)
{
    LNode *p = head->next, *q = NULL;
    while (p != NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
    free(head);
}
int main()
{
    LinkList head = init();
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    traverse(head);
    delete (head, 3);
    traverse(head);
    destroy(head);
    return 0;
}