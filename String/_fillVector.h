#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

static void _fillVector() {
	using namespace std;
	vector<string> v;
	ifstream in("fillvector.h");
	string line;
	while(getline(in, line))
		v.push_back(line); // Add the line to the end
	// Add line numbers:
	for(unsigned int i = 0; i < v.size(); i++)
		cout << i << ": " << v[i] << endl;
}