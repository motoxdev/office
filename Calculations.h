#include "Queue.h"
#include "Student.h"
#include "Window.h"
#include "Time.h"
using namespace std;

#ifndef CALCULATION_H
#define CALCULATION_H

class Calculations{
  public:
    Calculations(); //constructor
    Calculations(string file, int count); //overloaded constructor
    ~Calculations(); //deconstructor

  void begin();
  //int getWindowNum(File *f);
  void collectData();
  void calc();
  bool windowsFull();
  void enterOpenWindow(Student s);
  void printCalc();
  bool windowsEmpty();
  void printWindows();

  private:
    //File *f;
    Queue<Student> *waitLine;
    Queue<Student> *doneLine;
    Window **window;
    Time **timeArr;
    int windowNum;
    int maxWindowTime;
    int maxArrivalTime;
};
#endif
