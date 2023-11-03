#include <stdio.h>

#define	MAIN
#include	"inc.h"

main()
{
	int    a[10];
	double b[10];
	int i, j, k;

	printf(" ---------- a array ----\n");
	for( i=0; i<10; i++)
		b[i]=2*i;
	a = (int) b;
	for( i=0; i<10; i++)
		// printf( "A[%d]:  %d\n", i, a[i] );

		printf( "a[%d]:  %d\n", i, *(a+i) );	// a === &a[0]
}
