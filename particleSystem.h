#include <iostream>
using namespace std;
class particleSystem {
	int columns, rows; 
	Particle* head;
	Particle* tail; 
	int count; 

public: 
	ParticleSystem(int cols, int rows) : columns(cols), rows(rows), head(nullptr), tail(nullptr), count(0){}
	~ParticleSystem
	void addParticle(int x, int y);
	int numParticle()const;
	void moveParticles();
	void drawParticles();
	void drawWindow();
};
	
