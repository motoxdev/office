#include "Queue.h"
#include "Student.h"
#include "Window.h"
#include "Time.h"
#include "File.h"
using namespace std;

#ifndef CALCULATION_H
#define CALCULATION_H

class Calculations{
  public:
    Calculations(); //constructor
    Calculations(char *file, int count); //overloaded constructor
    ~Calculations(); //deconstructor

  void begin();
  int getWindowNum(File *f);
  void collectData();
  void calc();
  bool windowsFull();
  void enterOpenWindow(Student s);
  void printCalc();
  bool windowsEmpty();
  void printWindows();

  bool isFileValid();


  private:
    File *f;
    Queue<Student> *waitLine;
    Queue<Student> *doneLine;
    Window **windows;
    Time **timeArr;
    int windowNum;
    int maxWindowTime;
    int maxArrivalTime;
};
#endif
