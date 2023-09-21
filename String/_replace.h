#pragma once
#include <iostream>
#include <string>
// Replaces part o'string:
static void _replace() {
	using namespace std;
	string str  = "this is a test string.";
	string str2 = "n example";
	string str3 = "sample phrase";
	string str4 = "useful.";
	// function versions used in the same order as described above:
	// Using positions:
	str.replace(9, 5, str2);			// "this is an example string."
	str.replace(19, 6, str3, 7, 6);     // "this is an example phrase."
	str.replace(8, 10, "just all", 6);	// "this is just a phrase."
	str.replace(8, 6, "a short");		// "this is a short phrase."
	str.replace(22, 1, 3, '!');			// "this is a short phrase!!!"
	cout << str << endl;
	// Using iterators:
	string::iterator it = str.begin();		//  ^
	str.replace(it, str.end()-3, str3);		// "sample phrase!!!"
	str.replace(it, it+6, "replace it", 7); // "replace phrase!!!"
	it += 8;								//          ^
	str.replace(it, it+6, "is cool");		// "replace is cool!!!"
	str.replace(it+4, str.end()-4, 4, 'o'); // "replace is cooool!!!"
	it+=3;                               //             ^
	str.replace(it, str.end(), str4.begin(), str4.end());
	// "replace is useful."
	cout << str << endl;
}