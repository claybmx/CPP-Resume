#pragma once
#include <iostream>
#include <fstream>
#include <string>

static void _append() { // Append at the end o'str.
	using namespace std;
	string str;
	string name = "claybom ";
	// used in the same order as described above:
	str.append(name);
	str.append("is ");
	str.append(name, 4, 3);
	str.append(", dots are cool", 6);
	str.append(10, '.');
	str.append(name.begin(), name.begin()+4);
	str.append<int>(5, 0x2E); //.....
	cout << str << endl;
}