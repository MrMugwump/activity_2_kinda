# Makefile for Activity 2

CC=gcc -std=c99

try_c: activity2.c
	${CC} -o try_c activity2.c

clean:
	rm -f try_c
