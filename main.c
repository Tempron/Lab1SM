#include <stdio.h>
#include "list.h"

int main() {
    List* list = createList();
    insert(list, createNode());
    insert(list, createNode());
    insert(list, createNode());

    printList(list);
    return 0;
}

