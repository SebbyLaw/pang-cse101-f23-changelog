//----------------------------------------------------
// Queue.h
// Header file for Queue ADT
// Queue implementation using an array of strings
// ---------------------------------------------------

typedef struct Queue{
    int size;
    char** array;
} Queue;
// Constructor-Destructor ------------------------------------

// Initialize Queue from and array of strings of length n, The length 'n' represents the maximum queue length.
Queue* initializeQueue(int n, char** array);


// Free memory allocated to queue
void destructQueue(Queue** q);

// Queue Functionalities ------------------------------------

// Add name into queue
void enqueue(Queue* q, char* name);


// Remove the element from front of queue
void dequeue(Queue* q);

// returns the element at the front of the queue without removing it
char* front(Queue* q);

// Utility Functions ----------------------------------------

// prints queue
void printQueue(Queue* q);


// Return the length of the queue
int count(Queue* q);
