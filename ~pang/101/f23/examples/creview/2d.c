#include <stdio.h>

#define	MAIN
#include	"inc.h"

main()
{
	int b[3][4];
	int i, j, k;
	int *ptr;
	ptr = &b[0][0];

	printf(" ---------- b array ----\n");
	for( i=0; i<3; i++)
	  for( j=0; j<4; j++)
		b[i][j]=(i+1)*(j+1);

	for( i=0; i<3; i++)
	  {
	    for( j=0; j<4; j++)
	      {
		// printf( "%3d  ", b[i][j]);
		k = i*4 + j;
		// printf( "%3d  ", *(ptr+k) );
		printf( "%3d  ", *(*b+k) );	// ptr === *b === b[0] === &b[0][0]
	      }
	    printf( "\n");
	  }

	printf( "address of b[1][0]: %d\n", b+1 );
	printf( "address of b[1][0]: %d\n", *b+4 );

	for( i=0; i<12; i++ )
	   printf( "%d\n", *(*b+i) );
}
