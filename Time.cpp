#include "Time.h"
#include <iostream>

Time::Time(){
  t = 0;
  students = new doublyLinkedList<Student>();
}

Time::Time(int m){
  t = m;
  students = new doublyLinkedList<Student>();
}

Time::~Time(){
  //delete t;
}

doublyLinkedList<Student> Time::getStudents(){
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
