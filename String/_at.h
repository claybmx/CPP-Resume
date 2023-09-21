#pragma once
#include <iostream>
#include <string>

static void _at() {
	using namespace std;
	string str("Test string\n");
	for(unsigned int i=0; i < str.length()/*+1*/; i++)
		try {
			cout << str.at(i); // like '[]' op, but performs range check.
		} catch(out_of_range ex) {
			cout << "OUT_OF_RANGE Exception\n";
		}
}