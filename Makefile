all: t9

t9: main.o t9.o
	g++ -g main.o t9.o -o main

main.o: main.cpp
	g++ -g -c main.cpp

t9.o:
	g++ -g -c t9.cpp
