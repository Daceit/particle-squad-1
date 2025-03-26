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

		cout << "1. Run A Custom Test" << endl;
		cout << "2. Add Particle" << endl;
//		cout << "3. Draw Particles" << endl; // when you run test, it will do the drawing and physic
//		cout << "4. Run Physics" << endl;
		cout << "3. Call Particle System 1" << endl;
		cout << "4. Call Particle System 2" << endl;
		cout << "5. Call Particle System 3" << endl;
		cout << "6. Call Particle System 4" << endl;
		cout << "7. Run A Default Test" << endl;
		cout << "8. Get Me Outta Here!" << endl;
		cout << "what's it gonna be?? ";
		cin >> selection;

		if (selection == 8) {
			cout << "seeya!" << endl;
			break;
		}


	switch (selection) {
		case 1:
			cout << "Run Tests" << endl;
			while (system.numParticle() > 0) {
				clearscreen();
				system.moveParticles();
			}
			break;
			// makes x/y variables, takes user input
			// then plugs into addParticle()
		case 2:{
			cout << "Add Particle" << endl;
			int x = 0;
			int y = 0;
			int z = 0;
			int v = 0;
			int e = 0;
			string movement_type = "";
			cout << "gimme column: ";
			cin >> x;
			cout << "gimme row: ";
			cin >> y;
			cout << "gimme row velocity: ";
			cin >> z;
			cout << "gimme column velocity: ";
			cin >> v;
			cout << "gimme lifetime: ";
			cin >> e;
			cout << "gimme type: STREAMER  BALLISTIC  FIREWORK: ";
			cin >> movement_type;
			system.addParticle(x, y, z, v, e, movement_type);
			break;
		}
/*		case 3:
			cout << "Draw Particles" << endl;
			system.drawParticles();
			break;
		case 4:
			cout << "Run Physics" << endl;
			system.moveParticles();
			break;
*/
		case 3:
			cout << "Call Particle System 1" << endl;
			break;
		case 4:
            cout << "Call Particle System 2" << endl;
            break;
		case 5:
            cout << "Call Particle System 3" << endl;
            break;
		case 6:
            cout << "Call Particle System 4" << endl;
            break;
		case 7:
			system.addParticle(1, 1, 1, 1, 5, "STREAMER_Y");
			system.addParticle(3, 1, 1, 1, 5, "STREAMER_Y");
			system.addParticle(8, 1, 1, 1, 5, "STREAMER_Y");
			system.addParticle(10, 1, 1, 1, 5, "STREAMER_Y");
			system.addParticle(18, 1, 1, 1, 5, "STREAMER_Y");
			system.addParticle(28, 1, 1, 1, 5, "STREAMER_Y");
			while (system.numParticle() > 0) {
				clearscreen();
                system.moveParticles();
				int timer = 10000000;
                while (timer > 0) {
					timer--;
				}
            }

            break;

	}
}
}
