#pragma once
#include <iostream>
#include <string>
// Global Functions to interact with strings:
static void _globals() {
	using namespace std;
// getline:
	string str;
	cout << "Please enter full name: ";
	// Extracts char from cin and stores'em into str until a delimitation <enter> char is found:
	getline(cin, str); // (stream, str, delimiter='\n') - Global function
	cout << "Thank you, " << str << ".\n";
// operator+:
	string firstlevel("com");
	string secondlevel("cplusplus");
	string scheme("http://");
	string hostname;
	string url;

	hostname = "www." + secondlevel + '.' + firstlevel;
	url = scheme + hostname;
	cout << url << endl;
// Operator>>: 
	int n;
	cout << "Enter first name:";
	cin  >> str; // Extracts a single word from istream
	cout << "Thanks, " << str << ".\n";
// Operator<<:
	n   = 33;
	str = "trinta e tres = ";
	cout << str << n << endl; // Inserts str into output stream.
// Comparison Operators: (These funcs depend on the value returned by str member compare)
	string left ( "clay");
	string right( "clay");
	char *c_left ="clay";
	char *c_right="clay";
	// Returns left.compare(right)==0. When c-str like is used a temp str is created.
	if(left  == right)   cout << left	<< " == " << right   << endl;
	if(c_left== right)   cout << c_left	<< " == " << right   << endl;
	if(left  == c_right) cout << left	<< " == " << c_right << endl << endl;

	left    = "clay";
	right   = "bom";
	c_left  = "clay";
	c_right = "bom";
	// Returns left.compare(right)!=0. When c-str like is used a temp str is created.
	if(left  != right)   cout << left	<< " != " << right   << endl;
	if(c_left!= right)   cout << c_left	<< " != " << right   << endl;
	if(left  != c_right) cout << left	<< " != " << c_right << endl << endl;

	left    = "abc";
	right   = "zzz";
	c_left  = "abc";
	c_right = "zzz";
	// Returns left.compare(right)<0. When c-str like is used a temp str is created.
	if(left  < right)   cout << left	<< " < " << right   << endl;
	if(c_left< right)   cout << c_left	<< " < " << right   << endl;
	if(left  < c_right) cout << left	<< " < " << c_right << endl << endl;

	left    = "zzz";
	right   = "abc";
	c_left  = "zzz";
	c_right = "abc";
	// Returns left.compare(right)>0. When c-str like is used a temp str is created.
	if(left  > right)   cout << left	<< " > " << right   << endl;
	if(c_left> right)   cout << c_left	<< " > " << right   << endl;
	if(left  > c_right) cout << left	<< " > " << c_right << endl << endl;

	left    = "abc";
	right   = "abc";
	c_left  = "abc";
	c_right = "abc";
	// Returns left.compare(right)<=0. When c-str like is used a temp str is created.
	if(left  <= right)   cout << left	<< " <= " << right   << endl;
	if(c_left<= right)   cout << c_left	<< " <= " << right   << endl;
	if(left  <= c_right) cout << left	<< " <= " << c_right << endl << endl;

	left    = "zzz";
	right   = "zzz";
	c_left  = "zzz";
	c_right = "zzz";
	// Returns left.compare(right)>=0. When c-str like is used a temp str is created.
	if(left  >= right)   cout << left	<< " >= " << right   << endl;
	if(c_left>= right)   cout << c_left	<< " >= " << right   << endl;
	if(left  >= c_right) cout << left	<< " >= " << c_right << endl << endl;
// Global swap:
	string buyer("money");
	string seller("goods");

	cout << "Before swap, buyer has " << buyer;
	cout << " and seller has " << seller << endl;
	swap(buyer, seller); // This global effectively calls member lhs.swap(rhs).
	cout << "After swap, buyer has " << buyer;
	cout << " and seller has " << seller << endl;
}