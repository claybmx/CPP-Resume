//: C06:PtrFun1.cpp
// Using ptr_fun() with a unary function
#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int d[] = {123, 94, 10, 314, 315};
const int dsz = sizeof d / sizeof *d;
bool isEven(int x) {
  return x % 2 == 0;
}
int main() {
  vector<bool> vb;
  transform(d, d + dsz, back_inserter(vb),
    not1(ptr_fun(isEven)));
  copy(vb.begin(), vb.end(),
    ostream_iterator<bool>(cout, " "));
  cout << endl;
  // Output: 1 0 0 0 1
} ///:~
