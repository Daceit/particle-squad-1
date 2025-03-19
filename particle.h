#include <iostream>
#include <string>
#include "/public/colors.h"
using namespace std;
class particle {
int x = 0;
int y = 0;
int velocityX = 0;
int velocityY = 0;
int lifetime = 0;
string movement_type = "UNSET"; // STREAMER  BALLISTIC  FIREWORK
public:
particle (int Nx, int Ny, int NvelX,int NvelY, int Nlif, string Nmov) : x(Nx), y(Ny) , velocityX(NvelX), velocityY(NvelY), lifetime(Nlif), movement_type(Nmov){}
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
	usleep(10000000);
	x += velocityX;
	y += velocityY;

}



string draw(){
return "DRAW";
}
};
