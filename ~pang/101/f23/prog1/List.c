#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "List.h"
#include <assert.h>



ListPtr createList( void (*dataPrinter)(void *data) ) {
	// Your implementation of createList()
}

void destroyList(ListPtr *pL) {
	// Your implementation of destroyList()
}

int lengthList(ListPtr L) {
	// Your implementation of lengthList()
}

void printList(ListPtr L) {
	// Your implementation of printList()
}

void *getList(ListPtr L, int i) {
	// Your implementation of getList()
}

void *deleteList(ListPtr L, int i) {
	// Your implementation of deleteList()
}

bool appendList(ListPtr L, void *data) {
	// Your implementation of appendList()
}
