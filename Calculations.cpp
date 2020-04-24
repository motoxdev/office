/*#include <iostream>
#include <string>
#include <math.h>
#include "Calculations.h"
#include "Student.cpp"
#include "Window.cpp"
#include "Time.h"
#include <fstream>
#include <array>
using namespace std;
/*
//constructor
Calculation::Calculation(){
    //nothing
}
//overloaded constructor
Calculation::Calculation(string file, int nw){
  waitingLine = new Queue<Student>();
  doneLine = new Queue<Student>();
  windows = new Window*[nw]; //creating object window 'nw' number of times
  maxWindowTime = 0;
  maxArrivalTime = 0;
}
//deconstructor
Calculation::~Calculation(){
  delete windows;
  delete timeArray;
  delete f;
}

int Calculation::numOfWindows(string f){
  int n;
  //READ IN FILE WITH IS_OPEN
  return n;
}

bool Calculation::windowsFull(){
  for(int i = 0; i<totalWindows; ++i){
    if((windows[i]->isFull()) == false){
      return false;
    }
    if((windows[i]->isFull()) == true){
      return true;
    }
  }
}

bool Calculation::windowsEmpty(){
  for(int i = 0; i<totalWindows; ++i){
    if(windows[i]->isFull()){
      return false; //saying they are not empty
    }
    if(windows[i]->isFull() == false){
      return true; //saying they are empty
    }
  }
}

void Calculation::printWindows(){
  cout<< "PRINTING WINDOWS: " << endl;
  for(int i = 0; i<totalWindows;++i){
    if(windows[i]->isFull()){
      cout<< windows[i]->getStudent() << endl; //getting the student that is at that window
    }
    else{
      cout << "EMPTY" << endl;
    }
  }
}

void Calculation::enterOpenWindow(Student s){
  for(int i = 0; i<totalWindows;++i){
    //going to place student at the first window
    //that is open
    if((windows[i]->isFull()) == false){
      windows[i]->studentAtWindow(s);
      windows[i]->setFull(true);
      break;
    }
  }
}
*/
