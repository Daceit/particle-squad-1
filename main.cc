#include <iostream>
#include <string>
#include "particleSystem.h"

using namespace std;

int main() {
	// first get the terminal size
	auto [rows, cols] = get_terminal_size();
	// create particle system with cols and rows
	particleSystem system(cols, rows);

	int selection = 0;
	while (true) {
	// yay ascii!
		cout << R"(   ___           _   _      _      
  / _ \__ _ _ __| |_(_) ___| | ___ 
 / /_)/ _` | '__| __| |/ __| |/ _ \
/ ___/ (_| | |  | |_| | (__| |  __/
\/    \__,_|_|   \__|_|\___|_|\___|
                                   
 __                       _        
/ _\ __ _ _   _  __ _  __| |       
\ \ / _` | | | |/ _` |/ _` |       
_\ \ (_| | |_| | (_| | (_| |       
\__/\__, |\__,_|\__,_|\__,_|       
       |_|                  
		)" << endl;

		cout << "1. Run Tests" << endl;
		cout << "2. Add Particle" << endl;
		cout << "3. Draw Particles" << endl;
		cout << "4. Run Physics" << endl;
		cout << "5. Call ParticleSystem 1" << endl;
		cout << "6. Call ParticleSystem 2" << endl;
		cout << "7. Call ParticleSystem 3" << endl;
		cout << "8. Call ParticleSystem 4" << endl;
		cout << "9. Get Me Outta Here!" << endl;
		cout << "what's it gonna be?? ";
		cin >> selection;

		if (selection == 9) {
			cout << "seeya!" << endl;
			break;
		}



}
