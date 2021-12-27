/*
* implements a linked list in C++
*
* Date: 10/28/2021
* Name: Tamsin Rogers, Nicole Matamoros, Rayna Hata
* g++ -o task1 task1_test.cpp task1.cpp
*
*/

#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//template <class T>

/* adds a node to the front of the list, storing the given data in the node */
template <class T>
void LinkedList<T>::ll_push(T *data)
{
	Node<T> *newNode=new Node<T>;
	newNode->ptr = data;
	newNode->next= head;
	head=newNode;
	count=count+1;
}


/* removes the node at the front of the list and returns the associated data */
template <class T>
T* LinkedList<T>::ll_pop() 
{
	Node<T>* removedNode=head; 				// store the data
	T *Nodedata= head->ptr; 
	head=removedNode->next;   			// rewire it to the next node 
	count--;
	return Nodedata ; 						// return the value of the freed node 

}

/* adds a node to the end of the list, storing the given data in the node */
template <class T>
void LinkedList<T>::ll_append(T *data) 
{
	Node<T> *newNode=new Node<T>; 
	newNode->ptr=data;

	if(ll_size()==0)
	{
		newNode->next=head;
		head=newNode;
	}

	else
	{
		Node<T> *lastNode = head;
   
		for(int i=0;i<ll_size()-1;i++)
		{  
			lastNode = lastNode->next;
		}
   
		lastNode->next=newNode;
	}
	count++;
}

/* removes the first node in the list whose data matches target given the comparison function (returns the pointer to the data) */
template <class T>
T*  LinkedList<T>::ll_remove( T *target, int (*compfunc)(T*, T*))
{  
	Node<T> *curNode = head;
	Node<T> *prevNode= NULL; 
	T* Nodedata= NULL; 

	for(int i=0;i<ll_size();i++)
	{
	
		if(compfunc(curNode->ptr,target)!=0)
		{
			Node<T> *temp= curNode; 
			if(i==0)
			{
				//cout<<head<<endl;
				head=temp->next;
			}
		
			else
			{
				prevNode->next=temp->next;
			}
		
			Nodedata=temp->ptr; 
			count--;
			break;
		}
	
		else
		{
			prevNode=curNode;
			curNode=curNode->next;
		}
	}   
	return Nodedata;
}

/*returns the size of the list */
template <class T>
int LinkedList<T>::ll_size() 
{
	return count;
}

/*removes all of the nodes from the list, freeing the associated data using the given function */
template <class T>
void LinkedList<T>::ll_clear(void (*freefunc)(T *)) 
{
	for(int i=0;i<ll_size();i++)		// get the current node
	{
		Node<T> *current=head;
		head=current->next; 
		freefunc(current->ptr);  
		//delete current;
	}

	count=0;
}

/*traverse the list and applies the given function to the data at each node */
template <class T>
void LinkedList<T>::ll_map(void (*mapfunc)(T *)) //T*
{
	Node<T> *current=head;

	for(int i=0;i<ll_size();i++)
	{     
	
		mapfunc(current->ptr);
		current = current->next;
	} 
	
} 


