#pragma once
#include "particleSystem.h"
#include "particleGraphics.h"
#include <cstdlib> //rand()
#include <ctime> //time(nullptr) random number gen
#include <thread> //control fps
#include <chrono> //used with thread


class Rain{ 
	particleSystem ps;
	int x1, y1, x2, y2; 

public: 
	Rain(int x_start = 5, int y_start = 3, int x_end = 70, int y_end = 25) : x1(x_start), y1(y_start), x2(x_end), y2(y_end) {
	std::srand(std::time(nullptr)
	}
