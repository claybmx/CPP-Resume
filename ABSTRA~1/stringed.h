#pragma once
#include "instrument.h"

class Stringed : public Instrument {
public:
	void play(note) const {
		std::cout << "Stringed::play\n";
	}
	char* what() const { return "Stringed"; }
	void adjust(int) {}
};