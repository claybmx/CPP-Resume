#pragma once
#include "instrument.h"

class Wind : public Instrument { // Abstract Class: At least one pure virtual functio:
public:

	void play(note) const {
		std::cout << "Wind::play\n";
	}
	char* what() const { return "Wind"; }
	void adjust(int) = 0;// Pure virtual function
};