#include <iostream>
#include <string>
using namespace std;
class particle {
int x = 0;
int y = 0;
int velocity = 0;
int lifetime = 0;
string movement_type = "UNSET"; // STREAMER  BALLISTIC  FIREWORK
public:
particle (int Nx, int Ny, int Nvel, int Nlif, string Nmov) : x(Nx), y(Ny) , velocity(Nvel), lifetime(Nlif), movement_type(Nmov){}
int get_y(){
return y;
}
int get_x(){
return x;
}
int get_velocity(){
return velocity;
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
void set_velocity(int Npos){
velocity = Npos;
}
void set_lifetime(int Npos){
lifetime = Npos;
}
void set_movement_type(string Npos){
movement_type = Npos;
}
string physics(){
return "PHYSICS :D";
}
string draw(){
return "DRAW";
}
};
