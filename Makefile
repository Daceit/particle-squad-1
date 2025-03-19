a.out: main.o
    g++ -g -Wall -fsanitize=address -std=c++17 main.o

main.o: main.cc cell.h particle.h particleSystem.h particleGraphics.h
    g++ -g -Wall -fsanitize=address -std=c++17 -c main.cc
