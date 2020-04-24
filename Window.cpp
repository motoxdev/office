#include "Window.h"
#include <iostream>
using namespace std;

//defining the constructor at default
Window::Window(){
  windowNumber = 0;
  full = false;
  idle = 0;
}
//overloaded constructor with window number
Window::Window(int w){
  windowNumber = w;
  full = false;
  idle = 0;
}
//deconstructor
Window::~Window(){

}

void Window::studentAtWindow(Student s){
  currStudent = s;
  //setting current student to the value inputted in method
}

Student* Window::getStudent(){
  return &currStudent;
  //returns student we are dealing with
}

int Window::getIdle(){
  return idle;
  //getting the idle value
}

void Window::decrementsIdle(){
  idle--;
  //decreasing idle value
}

void Window::incrementsIdle(){
  idle++;
  //increasing idle value
}

bool Window::isFull(){
  return full;
  //returns if a window is full through bool
}

void Window::setFull(bool t){
  this->full = t;
  //this says "this" window is being set to full
}
