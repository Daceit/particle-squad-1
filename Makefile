a.out: main.o
	g++ -g -Wall -fsanitize=address -std=c++23 main.o

main.o: main.cc cell.h particle.h particleSystem.h particleGraphics.h
	g++ -g -Wall -fsanitize=address -std=c++23 -c main.cc
