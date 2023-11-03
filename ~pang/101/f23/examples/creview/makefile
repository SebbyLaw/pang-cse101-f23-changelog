read:	scanf.c
	cc scanf.c -o read


func:	func.c
	cc -std=c99 func.c -o func

atest:	a.o b.o inc.h
	cc a.o b.o -o atest

a.o:	a.c inc.h
	cc -c a.c

b.o:	b.c inc.h
	cc -c b.c





1d:	1d.c
	cc 1d.c -o 1d


1dparam:	1dparam.c
		cc 1dparam.c -o 1dparam


2d:	2d.c
	cc 2d.c -o 2d


2dparam:	2dparam.c
		cc 2dparam.c -o 2dparam


array3:	array3.c
	cc array3.c -std=c99 -o array3

struct:	struct.c
	cc struct.c -std=c99 -o struct
