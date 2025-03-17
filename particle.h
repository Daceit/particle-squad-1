#include <iostream>
#include <string>
using namespace std;
class particle {
double position = 0;
double velocity = 0;
double lifetime = 0;
string movement_type = "UNSET"; // STREAMER  BALLISTIC  FIREWORK
public:
particle (double Npos, double Nvel, double Nlif, string Nmov) : position(Npos), velocity(Nvel), lifetime(Nlif), movement_type(Nmov){}
double get_position(){
return position;
}
double get_velocity(){
return velocity;
}
double get_lifetime(){
return lifetime;
}
string get_movement_type(){
return movement_type;
}
void set_position(double Npos){
position = Npos;
}
void set_velocity(double Npos){
velocity = Npos;
}
void set_lifetime(double Npos){
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
