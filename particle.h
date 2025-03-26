#pragma once
#include <iostream>
#include <string>
#include "/public/colors.h"
#include <cstdlib>
//#include "particleSystem.h"
using namespace std;
class Particle {
	int x = 0;
	int y = 0;
	int velocityX = 10;
	int velocityY = 10;
	int lifetime = 50;
	string movement_type = "UNSET"; // STREAMER  BALLISTIC  FIREWORK
	public:
	//constructs particle
	Particle(){}
	// allows constructor to tack in diffrent ammounts of arguments
	Particle(int Nx, int Ny) : x{Nx}, y{Ny}{}
	Particle (int Nx, int Ny, int NvelX,int NvelY, int Nlif, string Nmov) : x(Nx), y(Ny) , velocityX(NvelX), velocityY(NvelY), lifetime(Nlif), movement_type(Nmov){}
	// gets y axis
	int get_y(){
		return y;
	}
	// gets x axis
	int get_x(){
		return x;
	}
	// returns X velovity
	int get_velocityX(){
		return velocityX;
	}
	// returns Y velocity
	int get_velocityY(){
		return velocityY;
	}
	// returns the lifetime
	int get_lifetime(){
		return lifetime;
	}
	// reurns the movement type
	string get_movement_type(){
		return movement_type;
	}
	// set x axis
	void set_x(int Nx){
		x = Nx;
	}
	// sets y axis
	void set_y(int Ny){
		y = Ny;
	}
	// sets the X velocity
	void set_velocityX(int Npos){
		velocityX = Npos;
	}
	// sets the Y velocity
	void set_velocityY(int Npos){
		velocityY = Npos;
	}

	// sets liftime
	void set_lifetime(int Npos){
		lifetime = Npos;
	}
	// sets movement type
	void set_movement_type(string Npos){
		movement_type = Npos;
	}
	
	void physics(){
		// checks sets the type of movement fot the particle
		if(movement_type == "BALLISTIC"){
			usleep(1000000);
			lifetime--;
			x += velocityX;
			y += velocityY;
		} else if(movement_type == "STREAMER_X"){
			usleep(1000000);
			lifetime--;
			x += velocityX;
		} else if(movement_type == "STREAMER_Y"){
			usleep(1000000);
			lifetime--;
			y += velocityY;
		} else if(movement_type == "MATTWIND"){
			usleep(1000000);
			lifetime--;
			x += velocityX;
			if(rand() < RAND_MAX/2){
			y += rand() % 3;
			}else{
			y += (rand() % 2) * -1;


			}
		} else {
			//displays when movement type is not set
			cout << "set movement_type to STREAMER_X, STREAMER_Y, BALLISTIC, FIREWORK_X or FIREWORK_Y" << endl;
		}
	}
/*
void physics(particleSystem &a){
		  if(movement_type == "FIREWORK_X"){
			usleep(10);
			lifetime--;
			x += velocityX;
			if (lifetime == 0){
a.addParticle(x,y+1,1,1,50,"STREAMER_Y");
a.addParticle(x+1,y,1,1,50,"STREAMER_X");
a.addParticle(x,y-1,1,1,50,"STREAMER_y");
a.addParticle(x-1,y,1,1,50,"STREAMER_X");
			}
		} else if(movement_type == "FIREWORK_Y"){
			usleep(10);
			lifetime--;
			y += velocityY;
}
}
*/
	void draw(){

	}
};
