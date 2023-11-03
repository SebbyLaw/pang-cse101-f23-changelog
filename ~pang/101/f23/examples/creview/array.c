#include <stdio.h>

#include	"inc.h"


void printA( int r, int c, int m[r][c] )
{
	int i, j;

	for( i=0; i<r; i++ )
	{
	  for( j=0; j<c; j++ )
	    // printf( "%4d", m[i][j] );
	    printf( "%4d", *(*m + i*c + j) );
	  printf( "\n" );
	}
}

void changeA( int r, int c, int m[r][c] ) 
{
	int i,j;

	for( i=0; i<r; i++ )
	  for( j=0; j<c; j++ )
	    m[i][j] = 1;
}

int main()
{
	int i,j;
	int A[4][5];

	printf("test array passing\n");
	for( i=0; i<4; i++ )
	  for( j=0; j<5; j++ )
	    A[i][j]=(i+1)*(j+1);

	printA( 4, 5, A );
	changeA( 4, 5, A );
	
	printf("after changing array\n");
	printA( 4, 5, A );
}
