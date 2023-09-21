#pragma once
#include <iostream>
#include <string>

static void _clear() {
	using namespace std;
	string str("String test: ");
	cout << str << str.size() << "\n";
	str.clear(); // Sets str to an empty str thus leaving its size at 0 chars.
	cout << str << str.size() << "\n";
}