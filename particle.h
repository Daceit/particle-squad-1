#pragma once
#include <iostream>
#include <string>
#include "/public/colors.h"
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
	Particle(){}
	Particle(int Nx, int Ny) : x{Nx}, y{Ny}{}
	Particle (int Nx, int Ny, int NvelX,int NvelY, int Nlif, string Nmov) : x(Nx), y(Ny) , velocityX(NvelX), velocityY(NvelY), lifetime(Nlif), movement_type(Nmov){}
	int get_y(){
		return y;
	}
	int get_x(){
		return x;
	}
	int get_velocityX(){
		return velocityX;
	}
	int get_velocityY(){
		return velocityY;
	}
	int get_lifetime(){
		return lifetime;
	}
	string get_movement_type(){
		return movement_type;
	}
	void set_x(int Nx){
		x = Nx;
	}
	void set_y(int Ny){
		y = Ny;
	}
	void set_velocityX(int Npos){
		velocityX = Npos;
	}
	void set_velocityY(int Npos){
		velocityY = Npos;
	}
	void set_lifetime(int Npos){
		lifetime = Npos;
	}
	void set_movement_type(string Npos){
		movement_type = Npos;
	}
	
	void physics(){
		if(movement_type == "BALLISTIC"){
			usleep(10);
			lifetime--;
			x += velocityX;
			y += velocityY;
		} else if(movement_type == "STREAMER_X"){
			usleep(10);
			lifetime--;
			x += velocityX;
		} else if(movement_type == "STREAMER_Y"){
			usleep(10);
			lifetime--;
			y += velocityY;
		} else {
			cout << "set movement_type to STREAMER_X, STREAMER_Y, BALLISTIC, FIREWORK_X or FIREWORK_Y" << endl;
		}
	}
	/*
void physics(particalSystem &a){
		  if(movement_type == "FIREWORK_X"){
			usleep(10);
			lifetime--;
			x += velocityX;
			if (lifetime == 0){
a.addParticle(x,y+1);
a.addParticle(x+1,y);
a.addParticle(x,y-1);
a.addParticle(x-1,y);
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
