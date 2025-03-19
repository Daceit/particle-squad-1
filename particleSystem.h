#include <iostream>
#include "particle.h"
#include "cell.h"
using namespace std;
class particleSystem {
	int columns, rows; 
	Cell* head;
	Cell* tail; 
	int count;

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

	void addParticle(int x, int y){
		// make new particle object with position x and y
		// (all other vars are default)
		Particle particle(x, y);
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
	
	int numParticle(){
		cout << "Number of paricles: " << count << endl;
		return count;
	}
	void moveParticles(){
		//starting from head of linked list
		Cell* current = head;
		
		//going through each cell in list
		while (current != nullptr){
		//apply physics
		current->getData().physics();
		//move to next cell
		current = current->getNext();
		}
	}
	void drawParticles(){
		Cell* current = head;
		while (current != nullptr){
		current->getData().draw();
		current = current->getNext();
		}
	}
	void drawWindow(){
		cout << "Draw window" << endl;
	}
};
	
