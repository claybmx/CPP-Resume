//: C11:TestTQueue.cpp
//{L} ZThread
#include <string>
#include <iostream>
#include "TQueue.h"
#include "zthread/Thread.h"
#include "LiftOff.h"
using namespace ZThread;
using namespace std;

class LiftOffRunner : public Runnable {
  TQueue<LiftOff*> rockets;
public:
  void add(LiftOff* lo) { rockets.put(lo); }
  void run() {
    try {
      while(!Thread::interrupted()) {
        LiftOff* rocket = rockets.get();
        rocket->run();
      }
    } catch(Interrupted_Exception&) { /* Exit */ }
    cout << "Exiting LiftOffRunner" << endl;
  }
};

int main() {
  try {
    LiftOffRunner* lor = new LiftOffRunner;
    Thread t(lor);
    for(int i = 0; i < 5; i++)
      lor->add(new LiftOff(10, i));
    cin.get();
    lor->add(new LiftOff(10, 99));
    cin.get();
    t.interrupt();
  } catch(Synchronization_Exception& e) {
    cerr << e.what() << endl;
  }
} ///:~
