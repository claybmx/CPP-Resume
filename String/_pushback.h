#pragma once
#include <iostream>
#include <fstream>
#include <string>

static void _push_back() {
	using namespace std;
	string str;
	ifstream file("append.h", ios::in);
	while(!file.eof())
		str.push_back(file.get()); // Appends a single char at the end o'str, increasin its sz by 1.
	cout << str << endl;
}