#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// 链表
#define MAXSIZE 100
// 定义链表结构
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode, *LinkList;
//成员
typedef struct LinkedList{
        LinkList head;
        int (*isEmpty)(LinkList head);
        // 链表是否已满
        int (*isFull)(LinkList head);
        // 链表插入元素
        void (*insert)(LinkList head, int data);
        // 链表删除元素
        void (*delete)(LinkList head, int data);
        // 链表遍历
        void (*traverse)(LinkList head);
        // 链表销毁
        void (*destroy)(struct LinkedList* temp);
}LinkedList;
LinkedList* init(void);

#endif /* LINKED_LIST_H */
