#include "Heap.h"

// DO NOT MAKE CHANGES TO THIS FILE

// returns the oldest person in the PQ, without removing that person from the PQ.
Person* getMax(Heap* heap);

// returns the oldest person in the PQ, and removes them from the PQ. 
Person* extractMax(Heap* heap);

// inserts the person into the PQ
void insert(Heap* heap, Person* person);

// Updates the age of the person at index, index, in the PQ, to new_priority
void increasePriority(Heap* heap, int index, int new_priority);