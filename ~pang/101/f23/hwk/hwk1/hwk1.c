#include "List.h"
#include <stdlib.h>
#include <stdio.h>

void printNumber( void *num )
{
	int *i = num;		// "casting" void * to int *
	printf( "%d    ", *i );	// print what i is pointing to
}

void printString( void *str )
{
	char *s = str;		// "casting" void * to char *
	printf( "%s    ", s );	// print string starting from s
}

int main(int argc, char **argv){


	void *data;
	int  value;
	int  num1 = 123;
	int  num2 = 321;
	char st1[100] = "hello";
	char st2[100] = "good bye";

	// Declare a new num list

	ListPtr L = createList( printNumber );
	 
	// Perform desired operation on list
	
	appendList( L, &num2 );
	appendList( L, &num1 );

	int len = lengthList( L );
	printf( "num list has %d elements\n", len );
	printList( L );
	printf( "\n" );

	destroyList( &L );

	printf( "num list after destroying it is: " );
	printList( L );
	printf( "-- \n" );

	L = createList( printNumber );	// why is this line needed?

	appendList( L, &num1 );
	appendList( L, &num2 );
	appendList( L, &num1 );

	len = lengthList( L );
	printf( "num list has %d elements\n", len );
	printList( L );
	printf( "\n" );

	for( int i=0; i<len; i++ ) {
	    data = getList( L, i );
	    if (data != NULL) {
		value = *(int *)data;	// contents of data after casting to int *
		printf( "%dth element of list is %d\n", i, value );
	    }
	}

	deleteList( L, 1 );
	len = lengthList( L );
	printf( "num list has %d elements\n", len );
	printList( L );
	printf( "\n" );

	// Declare a new list

	printf( "\nReuse L for strings\n" );

	L = createList( printString );	// don't i need to call destroyList(L) 1st?

	appendList( L, st1 );
	appendList( L, st2 );

	len = lengthList( L );
	printf( "string list has %d elements\n", len );
	printList( L );
	printf( "\n" );

	// TODO:  add some code to test your deleteList()
}
