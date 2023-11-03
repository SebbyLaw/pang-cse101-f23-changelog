#include <stdio.h>

main()
{

typedef struct {
	int	a;	
	int	b;
	} newstruct;

typedef	struct xyz {
	  int		data;
	  struct xyz	*next;
	} node_t;

typedef	node_t	*node_ptr;

node_t		A, B;
node_ptr	aptr, bptr;

aptr = (node_ptr) malloc( sizeof( node_t ) );

A.data = 10;
B.data = 20;

aptr->data = 30;
A.next = &B;
B.next = aptr;
aptr->next = NULL;
bptr = &B;

printf( "aptr->data: %d\n", aptr->data );
printf( "A.next->data: %d\n", A.next->data );
printf( "B.data: %d\n", B.data );
printf( "A.data: %d\n", A.data );
}
