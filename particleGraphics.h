#pragma once
#include <iostream>
#include <cstdlib>
#include "/public/colors.h"
using namespace std;

class PartGraphic {
	string color = "\033[41m";
	int r = 0,g = 0,b = 0;
//	auto [max_row,max_col] = get_terminal_size();

	public:
		PartGraphic(string new_color) {
			color = new_color;
		}
		PartGraphic(int new_r = 0, int new_g = 0, int new_b = 0) {
			if (new_r > 0 && new_r < 255) {
				r = new_r;
			}
			if (new_g > 0 && new_g < 255) {
				g = new_g;
			}
			if (new_b > 0 && new_b < 255) {
				b = new_b;
			}
		}
		void set_color(const string& new_color) {
			color = new_color;
		}
		string get_color() const {
			return color;
		}
		void set_rgb(const int& new_r, const int& new_g, const int& new_b) {
			if (new_r > 0 && new_r < 255) {
                r = new_r;
            }
            if (new_g > 0 && new_g < 255) {
                g = new_g;
            }
            if (new_b > 0 && new_b < 255) {
                b = new_b;
            }
		}
		void set_r(const int& num) {
			if (num > 0 && num < 255) {
				r = num;
			}
		}       
		void set_g(const int& num) {
			if (num > 0 && num < 255) {
            	g = num;
			}
        }
        void set_b(const int& num) {
			if (num > 0 && num < 255) {
            	b = num;
			}
        }
		int get_r() const {
			return r;
		}
		int get_g() const {
            return g;
        }
        int get_b() const {
            return g;
        }

		void draw_point(int row = 0, int col = 0) {
			clearscreen();
			movecursor(col,row);
			cout << color << " ";
			cout.flush();
			resetcolor();
		}
        void draw_point_rgb(int row = 0, int col = 0) {
            clearscreen();
            movecursor(col,row);
            setbgcolor(r,g,b);
			cout << " ";
            cout.flush();
            resetcolor();
        }	
		// x,y is where to start making rectangle
		// it starts making rectangle from the upper left corner
		// max_x is how far to go right
		// max_y is how far to go down
		// if (hollow = true) the rectangle will be hollowed
		void draw_rectangle(int x = 0, int y = 0, int max_x = 0, int max_y = 0, bool hollow = false) {
			clearscreen();
			for (int i = 0; i < max_y; i++) {
				for (int j = 0; j < max_x; j++) {
					if (!hollow) {
						movecursor(y+i,x+j);
						cout << color << " ";
					}
					if (i == 0 || i == (max_y - 1)) {	
						movecursor(y+i,x+j);
                		cout << color << " ";
					
					} else if (j == 0 || j == (max_x - 1)) {
						movecursor(y+i,x+j);
                        cout << color << " ";
					}
					cout.flush();
					resetcolor();
				}
			}
		}
        void draw_rectangle_rgb(int x = 0, int y = 0, int max_x = 0, int max_y = 0, bool hollow = false) {
            clearscreen();
			for (int i = 0; i < max_y; i++) {
                for (int j = 0; j < max_x; j++) {
                    if (!hollow) {
                        movecursor(y+i,x+j);
                        setbgcolor(r,g,b);
						cout << " ";
                    }
                    if (i == 0 || i == (max_y - 1)) {
                        movecursor(y+i,x+j);
						setbgcolor(r,g,b);
                        cout << " ";

                    } else if (j == 0 || j == (max_x - 1)) {
                        movecursor(y+i,x+j);
						setbgcolor(r,g,b);
                        cout << " ";
                    }
                    cout.flush();
                    resetcolor();
                }
            }
        }

		void draw_oval() {
			cerr << "Draw oval\n";
		}
		void draw_polygon() {
			cerr << "Draw polygon\n";
		}
		void draw_line() {
			cerr << "Draw line\n";
		}


};
