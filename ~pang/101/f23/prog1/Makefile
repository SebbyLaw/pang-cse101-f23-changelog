manager: formatter.c List.c List.h
	cc -o prog1 -g formatter.c List.c

%.o: %.c
	cc -c -o $@ $< -std=c99

clean:
	rm prog1
