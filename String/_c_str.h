#pragma once
#include <iostream>
#include <cstring>
#include <string>
//string::c_str
static void _c_str() { // Retrieves a temp c-string val from a str obj. With terminating zero appended.
	using namespace std;
	char *cstr;
	string str("String example");
	// Becouse of this it's wise to copy the ptr contents into a new storage:
	cstr = new char[str.size()+1];	// Safe approuch
	strcpy(cstr, str.c_str());		// Returns a ptr to a null terminated c-string equivalent.

	// The returned array points to an INTERNAL string location w/ the required storage space 
	// for this sequence o'chars + its terminating null-char, BUT the values in this array
	// shoul NOT be modified in the program n' are only granted to remain unchanged until
	// the next call to a non-constant member function of the string obj.
	const char *tmp = str.c_str(); // NOT safe approuch
	cout << "tmp : " << tmp  << endl;
	str.assign("Changed string");		// Call to a non-constant string member function
	cout << "tmp : " << tmp  << endl;	// Side effect changes tmp ptr contents too.
	cout << "cstr: " << cstr << endl;

	delete[] cstr;  
}
// string::data
// Same as c_str() but not returning a zero-terminating char:
static void _data() {
	using namespace std;
	string str = "Test string";
	char *cstr = "Test string";
	if(str.length() == strlen(cstr)) {
		cout << "str and cstr have the same length.\n";
		if(!memcmp(cstr, str.data(), str.length()))
			cout << "str and cstr have the same content.\n";
	} 
}