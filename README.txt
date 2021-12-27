CS333 - Project #4 - README
Tamsin Rogers
10/28/2021

Directory Layout:
Project5
├── linkedlist.h
├── yourLinkedList.c
├── clltest.c
├── clltest
├── clltest2.c
├── clltest2
├── task1.h
├── task1.cpp
├── task1_test.cpp
├── task1_test
├── task1_test2.cpp
└── task1_test2

Run and build configuration for C:
macOS Big Sur 11.5.2 - Apple LLVM version 12.0.5 (clang-1205.0.22.11)

Description for each subsection:

C:
  This is the C programming task. 

yourLinkedList.c implements a generic linked list class in C.  

linkedlist.h contains the node struct that holds an arbitrary pointer and a next pointer.
This file also contains a LinkedlIst struct that has a head pointer.  
	
clltest.c tests the linked list in C with integers.
 			   
  Compile:
	gcc -o clltest clltest.c yourLinkedList.c
  Run:
	./clltest

  Output:

	After initialization
	value: 18
	value: 16
	value: 14
	value: 12
	value: 10
	value: 8
	value: 6
	value: 4
	value: 2
	value: 0

	After squaring
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 16
	value: 4
	value: 0

	removed: 16

	No instance of 11

	After removals
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 4
	value: 0

	After append
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 4
	value: 0
	value: 11

	After clear

	After appending
	value: 0
	value: 1
	value: 2
	value: 3
	value: 4

	popped: 0
	popped: 1

	After popping
	value: 2
	value: 3
	value: 4

	List size: 3
  

clltest2.c tests the linked list in C with floats.

	After initialization
	value: 18.000000
	value: 16.000000
	value: 14.000000
	value: 12.000000
	value: 10.000000
	value: 8.000000
	value: 6.000000
	value: 4.000000
	value: 2.000000
	value: 0.000000

	After squaring
	value: 324.000000
	value: 256.000000
	value: 196.000000
	value: 144.000000
	value: 100.000000
	value: 64.000000
	value: 36.000000
	value: 16.000000
	value: 4.000000
	value: 0.000000

	removed: 16.000000

	No instance of 11.000000

	After removals
	value: 324.000000
	value: 256.000000
	value: 196.000000
	value: 144.000000
	value: 100.000000
	value: 64.000000
	value: 36.000000
	value: 4.000000
	value: 0.000000

	After append
	value: 324.000000
	value: 256.000000
	value: 196.000000
	value: 144.000000
	value: 100.000000
	value: 64.000000
	value: 36.000000
	value: 4.000000
	value: 0.000000
	value: 11.000000

	After clear

	After appending
	value: 0.000000
	value: 1.000000
	value: 2.000000
	value: 3.000000
	value: 4.000000

	popped: 0.000000
	popped: 1.000000

	After popping
	value: 2.000000
	value: 3.000000
	value: 4.000000

	List size: 3
	
C++:

task1.c++ implements a generic linked list class of in C++.  

task1.h contains the node struct that holds an arbitrary pointer and a next pointer.
These are of type <T>.
This file also contains a LinkedList struct that has a head pointer.  
	
task1_test.cpp tests the linked list in C++ with integers.
 			   
  Compile:
	g++ -o task1 task1_test.cpp task1.cpp
  Run:
	./task1

  Output:
  
  	After initialization
	value: 18
	value: 16
	value: 14
	value: 12
	value: 10
	value: 8
	value: 6
	value: 4
	value: 2
	value: 0

	After squaring
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 16
	value: 4
	value: 0

	removed: 16 
 
	No instance of 11 
 
	After removals
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 4
	value: 0

	After append
	value: 324
	value: 256
	value: 196
	value: 144
	value: 100
	value: 64
	value: 36
	value: 4
	value: 0
	value: 11

	After clear

	After appending
	value: 0
	value: 1
	value: 2
	value: 3
	value: 4

	popped: 0 
	 popped: 1 
 
	After popping
	value: 2
	value: 3
	value: 4

	List size: 
	3 
	
task1_test2.cpp tests the linked list in C++ with floats.

Compile:
	g++ -o task1_test2 task1_test2.cpp task1.cpp
  Run:
	./task1_test2

  Output:
  
  	After initialization
	value: 19.5
	value: 19
	value: 18.5
	value: 18
	value: 17.5
	value: 17
	value: 16.5
	value: 16
	value: 15.5
	value: 15
	value: 14.5
	value: 14
	value: 13.5
	value: 13
	value: 12.5
	value: 12
	value: 11.5
	value: 11
	value: 10.5
	value: 10
	value: 9.5
	value: 9
	value: 8.5
	value: 8
	value: 7.5
	value: 7
	value: 6.5
	value: 6
	value: 5.5
	value: 5
	value: 4.5
	value: 4
	value: 3.5
	value: 3
	value: 2.5
	value: 2
	value: 1.5
	value: 1
	value: 0.5
	value: 0

	After squaring
	value: 380.25
	value: 361
	value: 342.25
	value: 324
	value: 306.25
	value: 289
	value: 272.25
	value: 256
	value: 240.25
	value: 225
	value: 210.25
	value: 196
	value: 182.25
	value: 169
	value: 156.25
	value: 144
	value: 132.25
	value: 121
	value: 110.25
	value: 100
	value: 90.25
	value: 81
	value: 72.25
	value: 64
	value: 56.25
	value: 49
	value: 42.25
	value: 36
	value: 30.25
	value: 25
	value: 20.25
	value: 16
	value: 12.25
	value: 9
	value: 6.25
	value: 4
	value: 2.25
	value: 1
	value: 0.25
	value: 0

	removed: 16 
 
	No instance of 11 
 
	After removals
	value: 380.25
	value: 361
	value: 342.25
	value: 324
	value: 306.25
	value: 289
	value: 272.25
	value: 256
	value: 240.25
	value: 225
	value: 210.25
	value: 196
	value: 182.25
	value: 169
	value: 156.25
	value: 144
	value: 132.25
	value: 121
	value: 110.25
	value: 100
	value: 90.25
	value: 81
	value: 72.25
	value: 64
	value: 56.25
	value: 49
	value: 42.25
	value: 36
	value: 30.25
	value: 25
	value: 20.25
	value: 12.25
	value: 9
	value: 6.25
	value: 4
	value: 2.25
	value: 1
	value: 0.25
	value: 0

	After append
	value: 380.25
	value: 361
	value: 342.25
	value: 324
	value: 306.25
	value: 289
	value: 272.25
	value: 256
	value: 240.25
	value: 225
	value: 210.25
	value: 196
	value: 182.25
	value: 169
	value: 156.25
	value: 144
	value: 132.25
	value: 121
	value: 110.25
	value: 100
	value: 90.25
	value: 81
	value: 72.25
	value: 64
	value: 56.25
	value: 49
	value: 42.25
	value: 36
	value: 30.25
	value: 25
	value: 20.25
	value: 12.25
	value: 9
	value: 6.25
	value: 4
	value: 2.25
	value: 1
	value: 0.25
	value: 0
	value: 11

	After clear

	After appending
	value: 0
	value: 0.5
	value: 1
	value: 1.5
	value: 2
	value: 2.5
	value: 3
	value: 3.5
	value: 4
	value: 4.5
	value: 5
	value: 5.5
	value: 6
	value: 6.5
	value: 7
	value: 7.5
	value: 8
	value: 8.5
	value: 9
	value: 9.5
	value: 10
	value: 10.5
	value: 11
	value: 11.5
	value: 12
	value: 12.5
	value: 13
	value: 13.5
	value: 14
	value: 14.5
	value: 15
	value: 15.5
	value: 16
	value: 16.5
	value: 17
	value: 17.5
	value: 18
	value: 18.5
	value: 19
	value: 19.5

	popped: 0 
	 popped: 0.5 
 
	After popping
	value: 1
	value: 1.5
	value: 2
	value: 2.5
	value: 3
	value: 3.5
	value: 4
	value: 4.5
	value: 5
	value: 5.5
	value: 6
	value: 6.5
	value: 7
	value: 7.5
	value: 8
	value: 8.5
	value: 9
	value: 9.5
	value: 10
	value: 10.5
	value: 11
	value: 11.5
	value: 12
	value: 12.5
	value: 13
	value: 13.5
	value: 14
	value: 14.5
	value: 15
	value: 15.5
	value: 16
	value: 16.5
	value: 17
	value: 17.5
	value: 18
	value: 18.5
	value: 19
	value: 19.5

	List size: 
	38

