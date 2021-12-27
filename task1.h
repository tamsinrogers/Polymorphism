/**
 * This is the headerfile for the linked list 
 * implemented in task1.cpp
 * 
 * Date: 10/28/2021
 * Name: Tamsin Rogers, Nicole Matamoros, Rayna Hata
 */

#ifndef LINKED_H
#define LINKED_H
#include <stdio.h>
#include <stdlib.h>

template <class T>
struct Node
{
	T* ptr;
    Node<T>* next;
};


template <class T>
class LinkedList
{
    private:
    
    Node<T>* head;
    int count;
    
    public:
    
    void ll_push(T* );

	T *ll_pop();

	void ll_append(T*);

	T *ll_remove(T*, int (*compfunc)(T*, T*));

	void ll_clear(void (*freefunc)(T*));
	
	int ll_size();

	void ll_map(void(*mapfunc)(T*));
	
};

#endif

