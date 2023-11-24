#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a queue
Queue* createQueue(int capacity) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->items = (int*)malloc(sizeof(int) * capacity);
    q->front = -1;
    q->rear = -1;
    q->capacity = capacity;
    return q;
}

// Check if the queue is empty
int isEmpty(Queue* q) {
    return q->rear == -1;
}

// Add a value to the queue
void enqueue(Queue* q, int value) {
    if (q->rear == q->capacity - 1) {
        printf("\nQueue is Full!!");
    } else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

// Remove a value from the queue and return it
int dequeue(Queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            // printf("Resetting queue\n");
            q->front = q->rear = -1;
        }
    }
    return item;
}

// Free the queue
void freeQueue(Queue* q) {
    free(q->items);
    free(q);
}