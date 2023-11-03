simulator: simulator.o PriorityQueue.o Heap.o
	cc -o prog2 simulator.o PriorityQueue.o Heap.o

simulator.o: Heap.h PriorityQueue.h simulator.c
	cc -c simulator.c

PriorityQueue.o: Heap.h PriorityQueue.h Heap.c PriorityQueue.c
	cc -c PriorityQueue.c

Heap.o: Heap.h Heap.c
	cc -c Heap.c

%.o: %.c
	cc -c -o $@ $< -std=c99

clean:
	rm -f simulator simulator.o Heap.o PriorityQueue.o

check: 
	valgrind --leak-check=full ./prog2