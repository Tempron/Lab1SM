
typedef struct node_
{
    struct node_* previous;
    struct node_* next;
    int key;
}Node;
typedef struct list_
{
    Node* head;
}List;

int isEmpty(List* list);
int insert(List* list, Node* node);
Node* search(List* list, int key);
Node* delete_(List* list, Node* node);
Node* maximum(List* list);
Node* minimum(List* list);
Node* successor(List* list, Node* node);
Node* predecessor(List* list, Node* node);