#pragma once
#include <iostream>
#include "particleSystem.h"
#include "particleGraphics.h"

using namespace std;

class Chimney {
    int row = 0;
    int col = 0;
    int max_row = 50;
    int max_col = 20;
    int nothing = 0;

    public:
    Chimney(int t = 0) {
        nothing = t;
    }
  /*  Chimney(int new_row = 0, int new_col = 0, int new_max_row = 0, int new_max_col = 0) {
        row = new_row;
        col = new_col;
        max_row = new_max_row;
        max_col = new_max_col;
    }*/

    void run() {
        PartGraphic pg;
        particleSystem sys(max_row,max_col);
        while (true) {
            clearscreen();
            pg.draw_rectangle(row,col,max_row,max_col,true);
            pg.draw_rectangle(25,15,5,4);
            if (sys.numParticle() < 3) {
                sys.addParticle(26,14,1,1,20,"UP");
                sys.addParticle(25,15,1,1,20,"UP");
                sys.addParticle(27,15,1,2,20,"UP");
            }
            sys.moveParticles();
            usleep(1000000);

        }
    }

};
