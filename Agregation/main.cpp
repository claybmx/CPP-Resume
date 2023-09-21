//#include "vld.h"
#include <iostream>
// Object composition (Aggregation)
class Engine {
public:
	inline void start() const {}
	inline void rev()   const {}
	inline void stop()  const {}
};

class Wheel {
public:
	inline void inflate(int psi) const {}
};

class Window {
public:
	inline void rollup()   const {}
	inline void rolldown() const {}
};

class Door {
public:
	Window window;
	inline void open()  const {}
	inline void close() const {}
};

class Car {
public:
	Engine engine;    // A car "Has-a" engine (relationship)
	Wheel wheel[4];   // 4 wheels
	Door left, right; // 2-doors
};

int main() {
	Car car;
	car.left.window.rollup();
	car.wheel[0].inflate(72);

	system("pause");
	return(0);
}
