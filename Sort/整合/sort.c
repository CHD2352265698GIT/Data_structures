#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
this This;

/*
    通过重复遍历待排序的序列，比较每对相邻元素的大小，
    并在必要时交换它们的位置。
 */
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
/*
    首先在未排序序列中找到最小（或最大）的元素，将其放到序列的起始位置，
    然后从剩余未排序元素中继续寻找最小（或最大）元素，以此类推。
*/
 void selection_sort(int mode)
 {  
    if(mode==ASCENDING){
        for (int i = 0; i < This->size - 1; i++)
        {
            int min_idx = i;
            for (int j = i + 1; j < This->size; j++)
            {
                if (This->arr[j] < This->arr[min_idx])
                {
                    min_idx = j;
                }
            }
        int temp = This->arr[min_idx];
        This->arr[min_idx] = This->arr[i];
        This->arr[i] = temp;
    }       
    }else if (mode == DESCENDING)
    {
         for (int i = 0; i < This->size - 1; i++)
        {
            int max_idx = i;
            for (int j = i + 1; j < This->size; j++)
            {
                if (This->arr[j] > This->arr[max_idx])
                {
                    max_idx = j;
                }
            }
        int temp = This->arr[max_idx];
        This->arr[max_idx] = This->arr[i];
        This->arr[i] = temp;
    }
    }
}

/*
    通过构建有序序列，对于未排序数据，
    在已排序序列中从后向前扫描，找到相应位置并插入。
*/
void insertion_sort(int mode)
{
    if(mode==ASCENDING){
          for (int i = 1; i < This->size; i++)
     {
        int key = This->arr[i];
        int j = i - 1;
        while (j >= 0 && This->arr[j] > key)
        {
            This->arr[j + 1] = This->arr[j];
            j = j - 1;
        }
            This->arr[j + 1] = key;
       }
    }else if( mode == DESCENDING)
    {
          for (int i = 1; i < This->size; i++)
     {
        int key = This->arr[i];
        int j = i - 1;
        while (j >= 0 && This->arr[j] < key)
        {
            This->arr[j + 1] = This->arr[j];
            j = j - 1;
        }
            This->arr[j + 1] = key;
        }
    }
}
/*
    将序列分成若干个子序列，先让每个子序列有序，再让子序列段间有序。
    优点：稳定、效率高、并发性
    缺点：空间复杂度、递归开销大
 */
void merge_sort(int mode)
{
    if(mode = ASCENDING)
    {
        
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
    printf("Free\n");
}


sort* sort_init(void)
{
    sort *s = This = malloc(sizeof(sort));
    s->bubble_sort = bubble_sort;
    s->Free = Free;
    s->print = print;
    s->selection_sort =  selection_sort;
    s->insertion_sort = insertion_sort;
    s->merge_sort = merge_sort;
    return s;
}