#include <iostream>
#include "particle.h"
using namespace std;
class particleSystem {
	int columns, rows; 
	particle* head;
	particle* tail; 
	int count; 

public: 
	particleSystem(int cols, int rows) : columns(cols), rows(rows), head(nullptr), tail(nullptr), count(0){}
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
	
