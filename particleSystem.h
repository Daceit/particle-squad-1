#include <iostream>
using namespace std;
class particleSystem {
	int columns, rows; 
	Particle* head;
	Particle* tail; 
	int count; 

public: 
	ParticleSystem(int cols, int rows) : columns(cols), rows(rows), head(nullptr), tail(nullptr), count(0){}
	~ParticleSystem();
	void addParticle(int x, int y){
		cout << "Add particles" << endl; 
	}
	int numParticle(){
		cout << "Number of paricles: " << count << endl;
		return count;
	}
	void moveParticles(){
		cout << "Particles moved left" << endl;
	}
	void drawParticles(){
		cout << "Draw particles" << endl;
	}
	void drawWindow(){
		cout << "Draw window" << endl;
	}
};
	
