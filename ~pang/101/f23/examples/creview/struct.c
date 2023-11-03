#include <stdio.h>
#include <stdlib.h>

int main() {

typedef struct node_s {
	int		value;
	struct node_s	*next;
	} node;

node	*L, *ptr;

ptr = NULL;
	
// ptr = (node*) malloc( sizeof(node) );
//
ptr = malloc( sizeof(node) );
ptr->value = 10;


printf( "%d\n", ptr->value );
printf( "%d\n", (*ptr).value );

}
