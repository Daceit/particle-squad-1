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
		void draw_point(int row, int col) {
			clearscreen();
			movecursor(col,row);
			cout << color;
			cout << " ";
			cout.flush();
			resetcolor();
		}
		void draw_rectangle() {
			cerr << "Draw rectangle\n";
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
