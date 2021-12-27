/*
* Tamsin Rogers
* Project 5 - Linked List 
*
* gcc -o clltest clltest.c yourLinkedList.c
* ./clltest
*/

#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>



/* creates a new LinkedList struct, initializes it, and then returns it */
LinkedList *ll_create()
{
    LinkedList *ptr = (LinkedList*)malloc(sizeof(LinkedList));
    ptr->count = 0;					// initialize the struct
    return ptr;
} 

/* adds a new node to the front of the list & stores the given data in the node */
void ll_push(LinkedList *l, void *data)
{
    node *new = (node*)malloc(sizeof(node));
    new->data = data;				// store given data in new node
    new->next = l->head;			// go to the next node
    l->head = new;					// set new node to head node
    l->count++;
}

/* removes the node at the front of the list & returns the associated data */
void *ll_pop(LinkedList *l) 
{
    node* take = l->head; 			// store the data in the removed node
    void *nDat = l->head->data; 
    l->head = take->next;   		// rewire the data to the next node 
    free(take); 					// freeing the node 
    l->count--;
    return nDat ; 					// return the data attached to the freed node 
}

/* adds a node to the end of the list & stores the given data in that node */
void ll_append(LinkedList *l, void *data) 
{
    node *new = (node*)malloc(sizeof(node));
    new->data = data;				// new node - to be added to the end of the list

    if(ll_size(l)==0)
    {
        new->next = l->head;
        l->head = new;
    }
    else							// iterate through the entire linked list
    {
        node *last = l->head;		// pass the data from the last node into the head
       
        for(int i=0; i<ll_size(l)-1; i++)
        {  
            last = last->next;
        }
        last->next = new;
    }
    l->count++;
}

/* 	removes the first node in the list that is attached to data matching the target data given in compfunc
	returns the pointer to that data */
void *ll_remove(LinkedList *l, void *target, int (*compfunc)(void *, void *))
{  
    node *current = l->head;
    node *before = NULL; 
    void *nDat = NULL; 
    for(int i=0;i<ll_size(l);i++)
    {
        
        if(compfunc(current->data,target)!=0)
        {
            node *temp = current; 
            
            if(i==0)
            {
                l->head = temp->next;
            }
            
            else
            {
                before->next = temp->next;
            }
            
            nDat = temp->data; 
            free(temp);
            l->count--;
            break;
        }
        
        else
        {
            before = current;
            current = current->next;
        }   
    }   
    return nDat;
}

/* returns the size of the linked list */
int ll_size(LinkedList *l) 
{
    return l->count;
}

/* removes all of the nodes from the linked list & frees the data attached to them using freefunc */
void ll_clear(LinkedList *l, void (*freefunc)(void *)) 
{

    for(int i=0;i<ll_size(l);i++)	// get current node
    {
        node *current = l->head;
        l->head = current->next; 
        freefunc(current);  
    }
    
    l->count=0;
}

void ll_map(LinkedList *l, void (*mapfunc)(void *)) {
    //traverses the list and applies the given function to the data at each node.
    
    node *current=l->head;
    
    for(int i=0;i<ll_size(l);i++)
    {     
        mapfunc(current->data);		// rewire to the current data 
        current = current->next;	// rewire the data to the next node
    } 

}