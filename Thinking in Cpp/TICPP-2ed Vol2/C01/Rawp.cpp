//: C01:Rawp.cpp
// Naked pointers
#include <iostream>
using namespace std;

class Cat {
public:
	Cat() { cout << "Cat()" << endl; }
	~Cat() { cout << "~Cat()" << endl; }
};

class Dog {
public:
	void* operator new(size_t sz) {
		cout << "allocating a Dog" << endl;
		//throw 47; // Throwin' an exception to simulate out-of-memory error
		::operator new(sz);
	}
	void operator delete(void* p) {
		cout << "deallocating a Dog" << endl;
		::operator delete(p);
	}
};

class UseResources {
	Cat* bp;
	Dog* op;
public:
	UseResources(int count = 1) {
		cout << "UseResources()" << endl;
		bp = new Cat[count];
		op = new Dog;
	}
	~UseResources() {
		cout << "~UseResources()" << endl;
		delete [] bp; // Array delete
		delete op;
	}
};

int main() {
	try {
		UseResources ur(3);
	} catch(int) {
		cout << "inside handler" << endl;
	}
} ///:~
