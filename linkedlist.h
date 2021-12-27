/*
* Tamsin Rogers
* Project 5 - Linked List 
* Header file 
*/


typedef struct node
{
    void *data;
    struct node* next ;
}node;

typedef struct LinkedList
{
    node *head;
    int count;

}LinkedList;

LinkedList *ll_create();

void ll_push(LinkedList *l, void *data);
 
void *ll_pop(LinkedList *l);
   
void ll_append(LinkedList *l, void *data) ;

void *ll_remove(LinkedList *l, void *target, int (*compfunc)(void *, void *));

int ll_size(LinkedList *l);
void ll_clear(LinkedList *l, void (*freefunc)(void *));

void ll_map(LinkedList *l, void (*mapfunc)(void *)) ;