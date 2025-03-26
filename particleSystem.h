#pragma once
#include <string>
#include "/public/colors.h"
#include <iostream>
#include "particleGraphics.h"
#include "cell.h"
//using namespace std;
class particleSystem {
	int columns, rows; 
	Cell* head;
	Cell* tail; 
	int count = 0;
	//constructor which initializes the particlesystem with rows and cols
	//sets head and tail of list to nullptr and count to 0
public: 
	particleSystem(int cols, int rows) : columns(cols), rows(rows), head(nullptr), tail(nullptr), count(0){}
	
	// Destructor
	~particleSystem(){
		// Current "node" starts at head
		Cell* current = head;
		// goes through one by one deleting each node until
		// it gets to nullptr
		while (current != nullptr){
			Cell* next = current->getNext();
			delete current;
			current = next;
		}
		// Once all nodes are deleted sets head and tail to nullptr then count to 0
		head = tail = nullptr;
		count = 0;
	}
	//creates a new particle and is held in a new cell
	//Adds the cell to a linked list while updating pointer
	void addParticle(int x, int y, int z, int v, int e,  string movement_type){
		// make new particle object with position x and y
		// (all other vars are default)
		Particle particle(x,y,z,v,e, movement_type);
		particle.set_x(x);
		particle.set_y(y);
		// make new cell object named newCell with the new particle in its data 
		// (next and prev are still nullptr)
		Cell* newCell = new Cell(particle);

		// Check if list is empty
		// If empty then set head and tail to newCell
		if (head == nullptr){
			head = newCell;
			tail = newCell;
		}
		// If list is populated
		// 1) setNext the old tail to newCell
		// 2) set prev the newCell to the old tail
		// 3) finally set the tail of the list to the newCell
		else{
			tail->setNext(newCell);
			newCell->setPrev(tail);
			tail = newCell;
		}
		// Increase the count after adding a new node
		count++;
		cout << "Add particles" << endl; 
	}
	//prints and returns the number of particles in the system
	int numParticle(){
//		cout << "Number of paricles: " << count << endl;
		return count;
	}
	//iterates through the list and calls physics onto the particle. 
	//if the particle is out of the bounds or lifetime ends, the particle will be deleted from the list
	//otherwise it's drawn on the screen using PartsGraphic
	void moveParticles(){
		auto [rows, cols] = get_terminal_size();
		rows--;
		cols--;
//		cout << "ROWS: " << rows << endl;
//		cout << "COLS: " << cols << endl;
		
		Cell* current = head;

		PartGraphic pg; 
		//going through each cell in list
		while (current != nullptr){	
		current->getData().physics();
		int x = current->getData().get_x();
		int y = current->getData().get_y();
		int lifetime = current->getData().get_lifetime();
		if (x < 0 || x >= cols || y < 0 || y >= rows || lifetime <= 0){

			Cell* toDelete = current;
	//		current = current->getNext();

			if (toDelete->getPrev() != nullptr) {
			toDelete->getPrev()->setNext(toDelete->getNext());
			}
			else {
			head = toDelete->getNext();
			}
			
			if (toDelete->getNext() != nullptr) {
			toDelete->getNext()->setPrev(toDelete->getPrev());
			}
			else {
			tail = toDelete->getPrev();
			}
			delete toDelete;
			count--;
		} else {
		pg.draw_point(x, y);
		//current = current->getNext();
		}

			current = current->getNext();
		}
	}
	//iterates through the list and calls the draw method on each particle as long as it != to nullptr
	void drawParticles(){
		Cell* current = head;
		while (current != nullptr){
		current->getData().draw();
		current = current->getNext();
		}
	}
	//just prints Draw Window (currently a placeholder as not told what to do with yet)
	//void drawWindow(){
	//	cout << "Draw window" << endl;
//	}
};
