
main()
{
	int *x;
	int y[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int z;

	i = 2;
	z = 2i;
	printf("z is 2i:  %d\n", z );

	x = y;
	printf("%d, %d\n", *x, x[9] );
	
}
