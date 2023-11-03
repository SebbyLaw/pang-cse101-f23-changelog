#include <stdio.h>

#define	MAIN
#include	"inc.h"

main()
{
	int a[10];
	int i;

	for( i=0; i<10; i++)
		a[i]=2*i;
	printf(" ---------- A array ----\n");
	printA( a );
	printf( "address of a is: %d\n", a );
	changeArray( a );
	printf(" ---------- a array ----\n");
	printB( a );
}

changeArray( int a[] )
{
}

printA( int *a )
{
	int i;

	for( i=0; i<10; i++)
		printf( "A[%d]:  %d\n", i, a[i] );
}

printB( int a[] )
{
	int i;

	for( i=0; i<10; i++)
		printf( "a[%d]:  %d\n", i, *(a+i) );	// a === &a[0]
}
