/*
	Bruce Maxwell
	Fall 2012
	CS 333

	Linked list test function with ints
 */

//#include <stdio.h>
//#include <stdlsdib.h>
#include "task1.h"
#include "task1.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// function that prints a float
void printFloat(float *i) {
	cout<<"value: "<<*i<< "\n";
}

// function that squares a float
void squareFloat(float *i) {

	*i = *i * *i;
}

// function that compares two floats and returns 1 if they are equal
int compFloat(float *i, float *j) {
	return(*i == *j);
}

// frees the given int
void freeFloat(float *i)
{
	free(i);
}

// test function for the various linked list functions
int main(int argc, char *argv[]) {
	LinkedList<float> l;
	float *a;
	float i;


	
	// push data on the list
	for(i=0.0;i<20.0;i+=0.5) {
		a=(float *)malloc(sizeof(float));
        *a=i;
		l.ll_push(a);
		
	}

	// printing the list and testing map
	cout<<"After initialization\n";
	l.ll_map(printFloat);

	l.ll_map(squareFloat);

	cout<<"\nAfter squaring\n";
	l.ll_map(printFloat);

	
	float *ptr;
	
	// testing removing data
    float *target = (float*)malloc(sizeof(float));
	
	*target = 16;

	a = (float *)l.ll_remove(target, compFloat);

	if(a != NULL){
        ptr = (float *) a;
		cout<<"\nremoved: "<< *ptr;
		cout<<" \n ";
    }
	else{
        ptr = (float *) a;
		cout<<"\nNo instance of "<< *ptr;
		cout<<" \n ";
    }
	*target = 11;
	a = l.ll_remove(target, compFloat);
	if(a != NULL){
        ptr = a;
		cout<<"\nremoved: "<< *ptr;
		cout<<" \n ";
    }
	else{
        ptr = target;
	    cout<<"\nNo instance of "<< *ptr;
	    cout<<" \n ";
    }
	cout<<"\nAfter removals\n";
	l.ll_map(printFloat);

	// testing appending data
	l.ll_append(target);

	cout<<"\nAfter append\n";
	l.ll_map(printFloat);

	// test clearing
	l.ll_clear(freeFloat);

	cout<<"\nAfter clear\n";
	l.ll_map(printFloat);

	// rebuild and test append and pop
	for(i=0.0;i<20.0;i+=0.5) {
		a=(float *)malloc(sizeof(float));
        *a=(float)i;
		l.ll_append(a);
	}

	cout<<"\nAfter appending\n";
	l.ll_map(printFloat);

	a = (float *)l.ll_pop();
    ptr = (float *)a;
	cout<<"\npopped: "<< *ptr;
	cout<<" \n ";
	free(ptr);

	a = (float *)l.ll_pop();
    ptr = (float*)a;
	cout<<"popped: "<< *ptr;
	cout<<" \n ";
	free(ptr);

	cout<<"\nAfter popping\n";
	l.ll_map(printFloat);

	cout<<"\nList size: \n"<< l.ll_size();
	cout<<" \n ";


	return(0);
	
	
}



