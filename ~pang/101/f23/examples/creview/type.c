#include <stdio.h>

main()
{

	typedef struct {
			double x;
			double y;
		} point;

	point	p;
	p.x = 10.0;
	p.y = 11.1;

	printf("%5.2f  %5.2f\n", p.x, p.y);
}
