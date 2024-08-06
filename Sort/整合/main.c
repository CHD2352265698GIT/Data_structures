#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
int main()
{
    int a[6]={5,0,3,2,4,1};
    sort* Sort = sort_init();
    Sort->size=6;
    Sort->arr=a;
    Sort->print("\n");
    Sort->bubble_sort(ASCENDING);
    Sort->print(" 冒泡升序排列\n");
    Sort->bubble_sort(DESCENDING);
    Sort->print(" 冒泡降序排列\n");
    Sort->selection_sort(ASCENDING);
    Sort->print(" 选择升序排列\n");
    Sort->selection_sort(DESCENDING);
    Sort->print(" 选择降序排列\n");
    Sort->insertion_sort(ASCENDING);
    Sort->print(" 插入升序排列\n");
    Sort->insertion_sort(DESCENDING);
    Sort->print(" 插入降序排列\n");
    Sort->Free();
    return 0;
}