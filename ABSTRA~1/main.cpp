// #include "vld.h" // No memory leaks DETECTED!
#include <iostream> // cout, getchar()
#include "instrument.h"
#include "brass.h"
#include "percussion.h"
#include "stringed.h"
#include "wind.h"

using namespace std;

int main() {
	//Instrument i1;     // ERROR. Cannot be created: Pure abstract class
	//Wind		 flaute; // ERROR. Cannot be created: Abstract class

	Percussion	drum;
	Stringed	violin;
	Brass		flugelhorn;

	tune(drum);
	tune(violin);
	tune(flugelhorn);
	adjust(flugelhorn);

	system("pause");
	return(0);
}
