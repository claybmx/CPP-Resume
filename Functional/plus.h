#pragma once
#include <iostream>
#include <functional>
#include <algorithm>

static void _plus() {
	using namespace std;
	int  first[] = {1, 2, 3, 4, 5 };
	int second[] = {10,20,30,40,50};
	int results[5];
	transform(first, first+5, second, results, plus<int>());
	for(int i=0; i<5; i++)
		cout << results[i] << " ";
	cout << endl;
}