#include "Student.h"
#include <iostream>
using namespace std;

//constructor
Student::Student(){
  int windowTime = 0; //how long the student is up at the window
  int timeArrived = 0; //the time they got there
  int timeWaited = 0; //how long they had to wait in line
  int timeDone = 0;
}
//deconstructor
Student::~Student(){

}
//overeloaded constructor
Student::Student(int wt, int te){
  windowTime = wt;
  timeArrived = te;
  timeWaited = 0;
  timeDone = 0;
}
