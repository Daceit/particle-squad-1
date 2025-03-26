#pragma once
#include "particleSystem.h"
#include "particleGraphics.h"
#include <cstdlib>
#include <ctime>

class Sparkler {
private:
	// linked list of nodes with data particle
	particleSystem ps;
	// graphics
	particleGraphics pg;
	// demisnions
	int width, height;

public:
	// constructor
	Sparkler(int cols, int rows)
		: ps(cols, rows), pg(255, 255, 0), width(cols), height(rows)
	{
		// time(nullptr returns current time)
		// random number generator
		std::srand(std::time(nullptr));
	}

// simulate sparkler for 200 frames
// each step, add particle at center of screen
// assign random velocity
// update and redraw all particles
void simulate(int frames =  200) {
	for (int frame = 0; frame < frames; frame++) {
		// find center x and y
		int centerX = width / 2;
		int centery = height / 2;

		// random velocity
		int velX = (std::rand() % 7 ) - 3;
		int vely = (std::rand() % 7 ) - 3;
		// 10 frames until decay
		int lifetime = 10;

		//using ballistic type, add particles to system (ps)
		ps.addParticle(centerX, centerY, velX, velY, lifetime, "BALLISTIC");

		// after adding particles, update their postions
		ps.moveParticles();

		// after moving particles, draw 'em!
		ps.drawParticles();

		// sleep for 50 ms, 
		usleep(50000);
	}
}
};
