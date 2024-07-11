#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"
int main()
{
    LinkedList* Linked = init();
    Linked->insert(Linked->head, 1);
    Linked->insert(Linked->head, 2);
    Linked->insert(Linked->head, 3);
    Linked->insert(Linked->head, 4);
    Linked->insert(Linked->head, 5);
    Linked->traverse(Linked->head);
    Linked->delete(Linked->head, 1);
    Linked->traverse(Linked->head);
    Linked->destroy(Linked);
    return 0;
}