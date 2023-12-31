#pragma once
#include <iostream>
#include <functional>
#include <algorithm>

static void _less() {
	using namespace std;
	int foo[] = { 10,20,5,15,25 };
	int bar[] = { 15,10,20 };
	sort(foo, foo+5, less<int>());	// 5 10 15 20 25
	sort(bar, bar+3, less<int>());  //   10 15 20
	if(includes(foo, foo+5, bar, bar+3, less<int>()))
		cout << "foo includes bar.\n";
	else
		cout << "foo DO NOT includes bar.\n";
}