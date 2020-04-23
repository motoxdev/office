#include <iostream>
//creating a class for each student that stands in lines
//so we can input them into the queue we just finished working on
class Student{
  public:
    //constructors for the object student
    Student(); //constructor
    ~Student(); //destructor
    Student(int n, int m);//overloaded constructor

    //variables needed to complete assignment
    int windowTime; //how long the student is up at the window
    int timeArrived; //the time they got there
    int timeWaited; //how long they had to wait in line
    int timeDone; //the time when they were done at the window
  //private:
  //no private variables due to wanting to be able to access them
};
