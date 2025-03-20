#include <iostream>
#include <cstdlib>
#include "/public/colors.h"
using namespace std;

class PartGraphic {
	string color = "\033[41m";
//	auto [max_row,max_col] = get_terminal_size();

	public:
		PartGraphic(string new_color) {
			color = new_color;
		}
		void set_color(const string& new_color) {
			color = new_color;
		}
		string get_color() const {
			return color;
		}
		void draw_point(int row = 0, int col = 0) {
			clearscreen();
			movecursor(col,row);
			cout << color << " ";
			cout.flush();
			resetcolor();
		}
		void draw_rectangle(int x = 0, int y = 0, int max_x = 0, int max_y = 0) {
			clearscreen();
			for (int i = 0; i < max_y; i++) {
				for (int j = 0; j < max_x; j++) {
					movecursor(y+i,x+j);
					cout << color << " ";
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
