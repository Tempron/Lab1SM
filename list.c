#include "list.h"
#include <stdlib.h>


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
    if (list == NULL) 
        return NULL;
    Node* node = list->head;
    while (node != NULL && node->key != key)
    {
        node = node->next;
    }
    return node;
}

Node* delete_(List* list, Node* node) 
{
    if (list == NULL && node == NULL) 
        return NULL;
    if (node->previous != NULL) 
        node->previous->next = node->next;
    else list->head = node->next;
    if (node->next != NULL)
        node->next->previous = node->previous;
    return node;
}

Node* maximum(List* list) 
{
    if (list == NULL) 
        return NULL;
    Node* node = list->head->next;
    Node* max = node;
    while (node != NULL)
    {
        if (max->key < node->key)
            max = node;
        node = node->next;
    }
    return max;
}

Node* minimum(List* list) 
{
    if (list == NULL) 
        return NULL;
    Node* node = list->head->next;
    Node* min = node;
    while (node != NULL)
    {
        if (min->key > node->key)
            min = node;
        node = node->next;
    }
    return min;
}

Node* successor(List* list, Node* node) 
{
    if (list == NULL && node == NULL) 
        return NULL;
    node = node->next;
    Node* max = node;
    while (node != NULL)
    {
        if (max->key < node->key)
            max = node;
        node = node->next;
    }
    return max;
}

Node* predecessor(List* list, Node* node) 
{
    if (list == NULL && node == NULL) 
        return NULL;
    node = node->previous;
    Node* min = node;
    while (node != NULL)
    {
        if (min->key > node->key)
            min = node;
        node = node->next;
    }
    return min; 
}
