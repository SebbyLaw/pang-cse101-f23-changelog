#include <stdio.h>

main()
{
	int	*iptr;
	int*	jptr;
	int	k;
	
	k = 10;
	iptr = &k;
	// jptr = iptr;

	printf("%d\n", jptr);
	printf("%d\n", *jptr);
}
