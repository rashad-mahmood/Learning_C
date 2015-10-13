CFLAGS=-Wall -g

all:	ex1.c
	cc	-g	-Wall	-o	ex1	ex1.c
clean:
	rm	-f	ex1
