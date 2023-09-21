// Read an entire file into a single string
#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

static void _fillString() {
  ifstream in("file2String.h");
  string s, line;
  while(getline(in, line))
    s += line + "\n";
  cout << s;
}