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
}

Student* getStudent(){
  return currStudent;
}

int Window::getIdle(){
  return idle;
}

void Window::decrementsIdle(){
  idle--;
}

bool Window::isFull(){
  return full;
}

void Window::setFull(bool t){
  this->full = b;
  //this says "this" window is being set to full
}
