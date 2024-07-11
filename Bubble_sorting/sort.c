#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
this This;

void bubble_sort(int mode)
{  
    if(mode==ASCENDING){
     for (int i = 0; i < This->size; i++)
    {
        for (int j = 0; j < This->size - i - 1; j++)
        {
            if (This->arr[j] > This->arr[j + 1])
            {
                int temp = This->arr[j];
                This->arr[j] = This->arr[j + 1];
                This->arr[j + 1] = temp;
            }
        }
    }
    }else if(mode ==DESCENDING)
    {
          for (int i = 0; i < This->size; i++)
     {
        for (int j = 0; j < This->size - i - 1; j++)
        {
            if (This->arr[j] < This->arr[j + 1])
            {
                int temp = This->arr[j];
                This->arr[j] = This->arr[j + 1];
                This->arr[j + 1] = temp;
            }
        }
     }
    }
}

void print(char* end)
{
       for (int i = 0; i < This->size; i++)
        printf("%d ", This->arr[i]);
       printf("%s", end);
}
void Free()
{
    free(This);
    This = NULL;
}


sort* sort_init(void)
{
    sort *s = This = malloc(sizeof(sort));
    s->bubble_sort = bubble_sort;
    s->Free = Free;
    s->print = print;
    return s;
}