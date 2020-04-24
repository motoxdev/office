#include "Time.h"
#include <iostream>

Time::Time(){
  //nothing
}

Time::Time(int m){
  t = m;
  students = new DoublyLinkedList<Student>();
}

Time::~Time(){
  //delete t;
}

DoublyLinkedList<Student>* Time::getStudents(){
  return students;
}

void Time::pushStudent(Student s){
  students->insertBack(s);
  //puts student s at the back of "line"
}

Student Time::popStudent(){
  return students->removeFront();
  //returns the top student and
  //removes them from the "line"
}

int Time::getTime(){
  return t;
}
