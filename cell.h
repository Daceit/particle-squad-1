#include <iostream>
#include "particle.h"
using namespace std;

class Cell {
private:
	// particle being stored in each cell
	Particle data;
	
	// initialize prev and next pointers to nullptr
	Cell* next = nullptr;
	Cell* prev = nullptr;

public:
	// constructor, copies particle by reference to "particle var", 
	// sets data to particle object, and sets prev and next to nullptr
	Cell(const Particle& particle) : data(particle), prev(nullptr), next(nullptr){
	}

	// getter for data by reference
	Particle& getData() {
		return data;
	}

	// const version if requested
	const Particle& getData() const {
		return data;	
	
	// getter for prev, const bc wont change value
	Cell* getPrev() const{
		return prev;
	}

	// getter for next, const bc wont change value
	Cell* getNext() const{
		return next;
	}

	// setter for data, passing Particle object 
	// const and by reference, no extra copys and not changing original
	void setData(const Particle& particle){
		data = particle;
	}

	// setter for prev, (Cell pointer)
	void setPrev(Cell* cell){
		prev = cell;
	}

	// setter for next, (cell pointer)
	void setNext(Cell* cell){
		next = cell;
	}
};
