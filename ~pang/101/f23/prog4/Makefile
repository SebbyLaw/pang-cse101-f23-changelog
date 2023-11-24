prog4: main.o bfs.o queue.o dijkstra.o
	gcc -std=c99 -o prog4 main.o bfs.o queue.o dijkstra.o

%.o: %.c
	gcc -std=c99 -c -o $@ $<

clean:
	rm -f prog4 *.o
