#include "Dictionary.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_SIZE 100

void printSong(void *data) {
    KVPair *song = (KVPair *)data;
    printf("%s by %s\n", song->key, (char *)song->value);
}

int main(void) {
    
}