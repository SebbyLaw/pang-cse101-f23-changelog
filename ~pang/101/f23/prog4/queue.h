#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>

// Queue structure
typedef struct {
    int* items;
    int front;
    int rear;
    int capacity; // Added capacity to handle dynamic sizing
} Queue;

// Function declarations
Queue* createQueue(int capacity);
int isEmpty(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
void freeQueue(Queue* q);

#endif // QUEUE_H