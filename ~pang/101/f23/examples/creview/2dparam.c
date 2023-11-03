#include <stdio.h>

#define	MAIN
#include	"inc.h"

main()
{
	int b[3][4];
	int i, j, k;

	for( i=0; i<3; i++)
	  for( j=0; j<4; j++)
		b[i][j]=(i+1)*(j+1);

printf("address of b is %d\n", b );
printf("address of b is %d\n", &b[0][0] );

	printf(" ---------- param 1 ----\n");
	printA( b, 3, 4 );
	printf(" ---------- param 2 ----\n");
	printB( 3, 4, b );
}

printA( int x[][4], int numrow, int numcol )
{
	int i, j, k;

printf("address of param1 is %d\n", x );
	for( i=0; i<numrow; i++)
	  {
	    for( j=0; j<numcol; j++)
	      {
		printf( "%3d  ", x[i][j]);
	      }
	    printf( "\n");
	  }
}

printB( int numrow, int numcol, int x[numrow][numcol] )
{
	int i, j, k;
	int *ptr;
	ptr = &x[0][0];

printf("address of param2 is %d\n", x );
	for( i=0; i<numrow; i++)
	  {
	    for( j=0; j<numcol; j++)
	      {
		// printf( "%3d  ", x[i][j] );

		k = i*numcol + j;
		printf( "%3d  ", *(ptr+k) );
		// printf( "%3d  ", *(*x+k) );
	      }
	    printf( "\n");
	  }

printf("as a 1d array\n");
	for( i=0; i<12; i++ )
	   printf( "%d\n", *(*x+i) );
}
