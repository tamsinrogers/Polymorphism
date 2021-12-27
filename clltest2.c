/*
	Bruce Maxwell
	Fall 2012
	CS 333

	Linked list test function (with floats)
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// function that prints an float
void printFloat(void *i) {
	float *a = (float *)i;

	printf("value: %f\n", *a);
}

// function that squares an float
void squareFloat(void *i) {
	float *a = (float *)i;

	*a = *a * *a;
}

// function that compares two floats and returns 1 if they are equal
int compFloat(void *i, void *j) {
	float *a = (float *)i;
	float *b = (float *)j;

	return(*a == *b);
}

// test function for the various linked list functions
int main(int argc, char *argv[]) {
	LinkedList *l;
	float *a;
	float *target;
	float i;

	// create a list
	l = ll_create();

	// push data on the list
	for(i=0;i<20;i+=2) {
		a = malloc(sizeof(float));
		*a = i;

		ll_push(l, a);
	}

	// printing the list and testing map
	printf("After initialization\n");
	ll_map(l, printFloat);

	ll_map(l, squareFloat);

	printf("\nAfter squaring\n");
	ll_map(l, printFloat);

	// testing removing data
	target = malloc(sizeof(int));

	*target = 16;
	a = ll_remove(l, target, compFloat);
	if(a != NULL)
		printf("\nremoved: %f\n", *a);
	else
		printf("\nNo instance of %f\n", *target);

	*target = 11;
	a = ll_remove(l, target, compFloat);
	if(a != NULL)
		printf("\nremoved: %f\n", *a);
	else
		printf("\nNo instance of %f\n", *target);

	printf("\nAfter removals\n");
	ll_map(l, printFloat);

	
	// testing appending data
	ll_append(l, target);

	printf("\nAfter append\n");
	ll_map(l, printFloat);

	
	// test clearing
	ll_clear(l, free);

	

	printf("\nAfter clear\n");
	ll_map(l, printFloat);

	// rebuild and test append and pop
	for(i=0;i<5;i++) {
		a = malloc(sizeof(float));
		*a = i;
		ll_append(l, a);
	}

	printf("\nAfter appending\n");
	ll_map(l, printFloat);

	a = ll_pop(l);
	printf("\npopped: %f\n", *a);
	free(a);

	a = ll_pop(l);
	printf("popped: %f\n", *a);
	free(a);

	printf("\nAfter popping\n");
	ll_map(l, printFloat);

	printf("\nList size: %d\n", ll_size(l) );

	return(0);
}