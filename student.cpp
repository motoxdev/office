#include "student.h"
#include <iostream>
using namespace std;

//constructor
student::student(){
  int windowTime = 0; //how long the student is up at the window
  int timeEntered = 0; //the time they got there
  int timeWaited = 0; //how long they had to wait in line
  int timeDone = 0;
}
//deconstructor
student::~student(){
  delete this.student();
}
//overeloaded constructor
student::student(int wt, int te){
  windowTime = wt;
  timeEntered = te;
  timeWaited = 0;
  timeDone = 0;
}
