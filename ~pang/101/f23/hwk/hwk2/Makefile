#------------------------------------------------------------------------------
#  Makefile for hwk2 
# 
#  make             makes simulator
#  make clean       removes object files
#  make check       runs valgrind to check for memory errors
#
#  simulator.c		this is where the simulator is implemented

#------------------------------------------------------------------------------

simulator:	simulator.o List.o Queue.o 
	cc -o hwk2 simulator.o Queue.o List.o

simulator.o: List.h Queue.h simulator.c 
	cc -c simulator.c

Queue.o: Queue.h Queue.c
	cc -c Queue.c

List.o: List.h List.c
	cc -c List.c

%.o: %.c
	cc -c -o $@ $< -std=c99

clean:
	rm -f simulator simulator.o Queue.o hwk2

check: 
	valgrind --leak-check=full ./hwk2