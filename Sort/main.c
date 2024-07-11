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
    Sort->print("\n");
    Sort->bubble_sort(DESCENDING);
    Sort->print("\n");
    Sort->Free();
    return 0;
}