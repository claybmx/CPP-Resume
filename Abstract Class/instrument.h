// Pure abstract base classes
#pragma once

enum note { middleC, Csharp, Cflat }; // Same as assining names to ints

class Instrument { // Pure Abstract Class: All member functions are pure virtual:
	int m_i;
public:
	// Pure virtual functions:
	virtual void  play(note) const = 0; // const functions cannot modify objs.
	virtual char* what()     const = 0;
	// Assume this will modify the object:
	virtual void  adjust(int) = 0;
};

//Pure Virtual Function Definition: A common piece o'code that you want some or all the derived class definitions 
// to call rather than duplicatin' that code in every function.
//void Instrument::play(note) const {
//	cout << "Instrument::play" << endl;
//}

void Instrument::adjust(int) {
	m_i = 0;
}

// You create an abstract class when you only want to manipulate a set o'classes through a common interface:
void tune(Instrument& _i) {
	// ...
	_i.play(middleC);
}

// New function:
void adjust(Instrument& _i) { _i.adjust(1); }