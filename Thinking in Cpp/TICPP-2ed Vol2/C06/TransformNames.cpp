//: C06:TransformNames.cpp
// More use of transform()
#include <algorithm>
#include <cctype>
#include <vector>
#include "Inventory.h"
#include "PrintSequence.h"
using namespace std;

struct NewImproved {
  Inventory operator()(const Inventory& inv) {
    return Inventory(toupper(inv.getItem()),
      inv.getQuantity(), inv.getValue());
  }
};

int main() {
  vector<Inventory> vi;
  generate_n(back_inserter(vi), 15, InvenGen());
  print(vi.begin(), vi.end(), "vi");
  transform(vi.begin(), vi.end(), vi.begin(),
    NewImproved());
  print(vi.begin(), vi.end(), "vi");
} ///:~
