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
    void (*bubble_sort)(int mode);
    void (*print)(char* end);
    void (*Free)();
}sort,*this;
sort* sort_init(void);
#endif
