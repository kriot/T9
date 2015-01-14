all: t9_prj

t9_prj: main.o t9.o
	g++ --std=c++11 -g main.o t9.o -o main -lncurses

main.o: main.cpp
	g++ --std=c++11 -g -c main.cpp

t9.o: t9.cpp t9.hpp
	g++ --std=c++11 -g -c t9.cpp


clean:
	rm *.o main
