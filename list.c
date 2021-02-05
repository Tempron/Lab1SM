#include "list.h"


int isEmpty(List* list)
{
    if (list->head == NULL) return 1; 
    return 0;
}

int insert(List* list, Node* node)
{
    if (list == NULL && node == NULL) return 0;
    if (list->head != NULL)
        list->head->previous = node;
    node->next = list->head;
    node->previous = NULL;
    list->head = node;
    return 1;
}

Node* search(List* list, int key) 
{
  if (/* condition */)
  
}

Node* delete_(List* list, Node* node) 
{
    if (list == NULL && node == NULL) return NULL;
    
}

Node* maxmimum(List* list) 
{

}

Node* minimum(List* list) 
{

}

Node* successor(List* list, Node* node) 
{

}

Node* predecessor(List* list, Node* node) 
{

}
