#include <iostream>
using namespace std;

class PartGraph {
	string color;

	public:
		PartGraph(string new_color) {
			color = new_color;
		}
		void set_color(const string& new_color) {
			color = new_color;
		}
		string get_color() const {
			return color;
		}
		void draw_point() {
			cout << "Draw point\n";
		}
		void draw_rectangle() {
			cout << "Draw rectangle\n";
		}
		void draw_oval() {
			cout << "Draw oval\n";
		}
		void draw_polygon() {
			cout << "Draw polygon\n";
		}
		void draw_line() {
			cout << "Draw line\n";
		}


};
