#pragma once
#include <iostream>
#include <algorithm>
#include <string>

static void _toUpper() {
	using namespace std;

	string str = "Hello World";
	cout << str << endl;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << str << endl;

}
