#pragma once
#include <iostream>
#include <string>

#define print cout << str << endl;

static void _assign() {
	using namespace std;
	string str;
	string base = "The quick brown fox jumps over a lazy dog.";
	// used in the same order as described above:
	str.assign(base);							print // "The quick brown fox jumps over a lazy dog."
	str.assign(base, 10, 9);					print // "brown fox"
	str.assign("pangrams are cool", 7);			print // "pangram"
	str.assign("c-string");						print // "c-string"
	str.assign(10, '*');						print // "**********"
	str.assign<int>(10, 0x2D);					print // "----------"
	str.assign(base.begin()+16, base.end()-12); print // "fox jumps over"
}