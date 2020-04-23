#include <iostream>
#include "Student.h" //to associate time with each student
#include "doublyLinkedList.h" //to put times into
//class for tracking time
class Time{
  public:
    Time(); // constructor
    Time(int t); //overloaded constructor
    ~Time(); //deconstructor
    //methods
    doublyLinkedList<Student> getStudents(); //creates a list of all the students in "line"
    void pushStudent(Student s); //going to add a student at the back of "line"
    Student popStudent(); //going to emove top student from "line"

    int getTime(); //returns the time

  private:
    int t; //variable for time
    doublyLinkedList<Student> *students; //this is the list to keep track of all the students 
}
