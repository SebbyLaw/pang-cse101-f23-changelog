#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "List.h"


ListPtr createList( void (*dataPrinter)(void *data) ) {
    ListPtr l = (ListPtr)malloc(sizeof(ListObj));
    l->dataPrinter = dataPrinter;
    l->length = 0;
    l->head = NULL;
    return l;
}

void destroyList(ListPtr *pL) {
    NodePtr next;
    if (*pL != NULL) {
        NodePtr n = (*pL)->head;
        while (n != NULL) {
            next = n->next;
//printf("destroy: about to free node containing: %d\n", *(int *) n->data );
            free(n);
            n = next;
        }
        free(*pL);
    *pL = NULL;
    }
}

int lengthList(ListPtr L) {
    if (L != NULL) {
        return L->length;
    }
    return -1;
}

void *getList(ListPtr L, int i) {
    if (L == NULL) return NULL;
    NodePtr n = L->head;
    if (i < 0 || n == NULL || i >= L->length) {
        return NULL;
    }
    for (;i > 0;i--)
        n = n->next;
    void *d = n->data;
    return d;
}

void *deleteList(ListPtr L, int i) {
    if (L == NULL) return NULL;
    NodePtr n = L->head;
    NodePtr prev = NULL;
    if (i < 0 || n == NULL || i >= L->length) {
        return NULL;
    }
    for (;i > 0;i--) {
    prev = n;
        n = n->next;
    }
    if (prev == NULL) {
        L->head =n->next;
    } else {
        prev->next = n->next;
    }
    void *d = n->data;
    L->length--;
    free(n);
    return d;
}

bool list_insert(ListPtr L, int pos, void *data) {
    if ( L == NULL || L->length < pos || pos < 0) {
        return false;
    }
    NodePtr n = L->head;
    NodePtr newNode = (NodePtr)malloc(sizeof(NodeObj));
    newNode->next = NULL;
    newNode->data = data;
    if (pos == 0) {
        newNode->next = L->head;
        L->head = newNode;
    } else {
        for (;pos > 1; pos--) {
            n = n->next;
        }
            newNode->next = n->next;
        n->next = newNode;
    }
    L->length++;
    return true;
}

bool appendList(ListPtr L, void *data) {
    if (L == NULL) return false;
    return list_insert(L, L->length, data);
}

void printList(ListPtr L) {
    if (L != NULL) {
        NodePtr n = L->head;
        while (n != NULL) {
            (*L->dataPrinter)(n->data);
            n = n->next;
        }
    }
}