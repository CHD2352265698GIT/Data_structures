#ifndef _SORT_H_
#define _SORT_H_
enum{
    ASCENDING,
    DESCENDING
};

typedef struct 
{
    int *arr;
    int size;
    void (*bubble_sort)(int mode);     //冒泡排序
    void (*selection_sort)(int mode);  //选择排序
    void (*insertion_sort)(int mode);  //插入排序
    void (*merge_sort)(int mode);      //归并排序
    void (*quick_sort)(int mode);      //快速排序
    void (*print)(char* end);           
    void (*Free)();                     
}sort,*this;
sort* sort_init(void);
#endif
