#include <stdio.h>
#include <stdlib.h>	// needed to make warning about on malloc go away

typedef	struct xyz {
	  int		data;
	  struct xyz	*next;
	} node;

typedef	node	*nodeptr;

// prints contents of list: just the data field.
void printlist( nodeptr L )
{
    nodeptr	ptr;

    ptr = L;
    while( ptr != NULL )
    {
	printf( "%d\n", ptr->data );
	ptr = ptr->next;
    }
}

void append1( nodeptr *mylist, nodeptr nptr )
{
    nodeptr	ptr = *mylist;

    nptr->next = NULL;

    if (*mylist == NULL)
	*mylist = nptr;
    else {	// ptr is not NULL
	while( ptr->next != NULL )
	    ptr = ptr->next;
	ptr->next = nptr;
    }
}

void main()
{
    int		i;
    node	n;
    nodeptr	mylist=NULL, nptr;

    for( i=10; i>0; i-- )
    {
	nptr = (nodeptr) malloc( sizeof( node ) );
	nptr->data = i;
	append1( &mylist, nptr );
    }

    printlist( mylist );
}
