#include <stdio.h>
#include <stdlib.h>	// get rid of warning msg on malloc

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

nodeptr append2( nodeptr mylist, nodeptr nptr )
{
    nodeptr	ptr = mylist;

    nptr->next = NULL;

    if (mylist == NULL)
	return( nptr );
    else {	// ptr is not NULL
	while( ptr->next != NULL )
	    ptr = ptr->next;
	ptr->next = nptr;
	return( mylist );
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
	mylist = append2( mylist, nptr );
    }

    printlist( mylist );
}
