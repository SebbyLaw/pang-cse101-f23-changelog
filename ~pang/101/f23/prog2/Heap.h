#ifndef __HEAP_H_
#define __HEAP_H_
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// DO NOT MAKE CHANGES TO THIS FILE

//----------------------------------------------------
// Heap.h
// Header file for Heap
// Heap implementation using an array of type persons (defined below)
// ---------------------------------------------------

typedef struct person{
    int age;
    char* name;
    char* type;
    char* destinations;
} Person;

typedef struct Heap {
    Person* arr;
    int size;
    int capacity;
} Heap;


//------------------------- Constructor-Destructor ------------------------------

// Constructor to initialize heap from an array of Persons, arr, of capacity, capacity, and size, size. 
Heap* initializeHeap(Person* arr, int capacity, int size);

// Destructor to free memory of the heap, and then free the memory occupied by the heap pointer. 
void destructHeap(Heap** h);


// ------------------------ Heap Property maintainers ----------------------------
// Used to maintain the heap structure top-down
void heapify(Heap* h, int i);

// -------------------------------- Helper Functions -----------------------------------
// return the array index of the parent node
int parent(int i);

// return the array index of the left child
int left(int i);

// return the array index of the right child
int right(int i);

// Prints the Names and ages of the people in the heap.
void printHeap(Heap* h);

// Return the length of the array in the heap
int len(Heap* h);

// return the capacity of the heap
int size(Heap* h);

#endif // __HEAP_H_
