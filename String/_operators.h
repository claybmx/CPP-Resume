#pragma once
#include <iostream>
#include <string>

static void _operators() {
	using namespace std;
// String Assignment:
	string s1, s2, s3;
	s1 = "Test string: ";   // c-string
	s2 = 'x';               // single character
	s3 = s1 + s2;			// string
	cout << s3 << endl;
// string::operator+= (Append to string)
	string name("John");
	string family("Smith");
	name += " K. ";         // c-string
	name += family;         // string
	name += '\n';           // character
	cout << name;
// string::operator[]
	string str("Test string\n");
	// The at member function has the same behavior as this, but performs a check range.
	for(unsigned int i=0; i < str.length(); i++)
		cout << str[i]; // Gets char in the string
}