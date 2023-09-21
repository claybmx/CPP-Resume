#pragma once
#include <iostream>
#include <string>

static void _swap() {
	using namespace std;
	string buyer("money");
	string seller("goods");

	cout << "Before swap, buyer has " << buyer;
	cout << " and seller has " << seller << endl;
	seller.swap(buyer); // Swap'em contents
	cout << "After swap, buyer has " << buyer;
	cout << " and seller has " << seller << endl;
}