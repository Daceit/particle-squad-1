#include <iostream>
#include "particleSystem.h"
using namespace std;

int main() {
	particleSystem ps1(10,10);
	cout << "Test 1: Particle system created"  << endl;

	ps1.addParticle(3,4);

	ps1.numParticle();

	ps1.moveParticles();

	ps1.drawParticles();

	ps1.drawWindow();
	
return 0; 
}
