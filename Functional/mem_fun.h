#pragma once
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>

static void _mem_fun() {
	using namespace std;
	vector<string*> numbers;
	// populate vector of pointers:
	numbers.push_back(new string("one"));
	numbers.push_back(new string("two"));
	numbers.push_back(new string("three"));
	numbers.push_back(new string("four"));
	numbers.push_back(new string("five"));
	
	vector<int> lengths(numbers.size());
	
	transform(numbers.begin(), numbers.end(), lengths.begin(), mem_fun(&string::length));
	
	for(int i=0; i<5; i++) {
		cout << *numbers[i] << " has " << lengths[i] << " letters.\n";
		delete numbers[i];
	}
}