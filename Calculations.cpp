#include "Calculations.h"
#include "Window.h"
#include "Queue.h"
#include "Student.h"
#include "File.h"
#include "Time.h"
#include <math.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

Calculations::Calculations(){
  //nothing
}

Calculations::Calculations(char *file, int count){
  f = new File(file);
  waitLine = new Queue<Student>();
  doneLine = new Queue<Student>();
  windowNum = count;
  windows = new Window*[windowNum];
  maxWindowTime = 0;
  maxArrivalTime = 0;
}

Calculations::~Calculations(){
  delete timeArr;
  delete f;
  delete windows;
}

void Calculations::begin(){
  f->open(); //opening the file
  //Calculations::getWindowNum(f); ISN'T READING THIS LINE PROPERLY
  for(int i = 0;i<windowNum; ++i){
    windows[i] = new Window(i+1); //adding another window to registrar
  }
  collectData(); //gathering information in file to use
  f->close(); //close the file f
  calc(); //calculate how the students wait/ idle
  printCalc(); //print out the final results
}

int Calculations::getWindowNum(File *f){
  int temp; //temporary variable
  stringstream ss(f->readLine());
  ss >> temp; //print out the number of windows
  return temp; //returns the actual value
}
 void Calculations::collectData(){
   timeArr = new Time*[100]; //using 100 to make sure to not have it met
   while(f->good()){ //if the file is valid
     int arrival = getWindowNum(f); //set the time of arrival with window
     if(arrival > maxArrivalTime){ //if it is greater than max value, make it the max value
       maxArrivalTime = arrival;
     }

   }
   int numStudents = getWindowNum(f);
   for(int i = 0;i<numStudents; ++i){
     int windowTime = getWindowNum(f);
     //Student s(windowTime&);

     if(windowTime > maxWindowTime){
       maxWindowTime = windowTime;
     }
   }
 }

 void Calculations::calc(){
   int registrarIdle = 0; //need something to keep track if there is no one at windows
   for(int i = 0;registrarIdle<30;++i){
     //used 30 to represent that half hour
     //now to add students during a certain minute
     //if(int j = 0; j < 30; ++j){    IT IS SAYING J WAS NOT DECLARED BUT IT IS RIGHT THERE **DEBUG
       //if(timeArr[j]->getTime() == i){
         //while(!timeArr[j]->getStudent()->isEmpty()){
           //line->insert(timeArr[j]->popStudent());
         }
         registrarIdle = 0;

     //}
   //}
   //while((!windowsFull()) && (!line->isEmpty())){
     //enterOpenWindow(line->remove());
     //registrarIdle = 0;
     //saying as long as the line isn't empty idle is going
     //to remain zero
   //}

   //if(windowsEmpty() && line->isEmpty()){
     //++registrarIdle;
     //says if the windows are emmpty AND the line is empty
     //to then start counting the time when the
     //registrar is idle
   }
 //}

 bool Calculations::windowsFull(){
   for(int i = 0; i<windowNum; ++i){
     if(windows[i]->isFull() == false){
       return false; //returns if windows are full or not
     }
   }
 }

 void Calculations::enterOpenWindow(Student s){
   for(int i = 0; i < windowNum; ++i){
     if(!windows[i]->isFull()){
       windows[i]->studentAtWindow(s); //puts student s at window
       windows[i]->setFull(true);
       break;
     }
   }
 }

 void Calculations::printCalc(){
   //first going to make the calculations
   float size = doneLine->getSize();
   float sumWait = 0;
   int medianWait = 0;
   int longestWait = 0;
   int numOver10 = 0;

   Queue<int> *waitList = new Queue<int>(); //creating a queue for the time for waiting
   /* i don't know where I put my method for getWaitTime().....
   for(int i = 0; i<size;++i){
     if(doneLine->getIndex(i)->getWaitTime() > longestWait){
       longestWait = doneLine->getIndex(i)->getWaitTime();
     }
   }
   */

   //calculating numbers for the windows
   float sumWindow = 0;
   int numOver5 = 0;
   int longestWindow = 0;

   for(int i = 0; i<windowNum;++i){
     if(windows[i]->getIdle()>longestWindow){
       longestWindow = windows[i]->getIdle();
     }
     if(windows[i]->getIdle() > 5){
       ++numOver5;
     }
     sumWindow += windows[i]->getIdle();
   }

   //now I am officially going to print everything out
   cout << "Mean wait time: " << sumWait/size << endl;
   cout << "Median wait time: " << medianWait << endl;
   cout << "Longest wait time: " << longestWait << endl;
   cout << "Number of students that waited longer than 10 minutes: " << numOver10 << endl;
   cout << "Mean idle time: " << sumWindow / windowNum << endl;
   cout << "Longest idle time: " << longestWindow << endl;
   cout << "Nummber of windows were idle for over 5 minutes: " << numOver5 << endl;
 }

 bool Calculations::windowsEmpty(){
   for(int i = 0; i < windowNum; ++i){
     if(windows[i]->isFull()){
       return false;
     }
   }
   return true;
 }

 void Calculations::printWindows(){
   for(int i = 0; i < windowNum; ++i){
     if(windows[i]->isFull()){
       cout << windows[i]->getStudent();
     }
     else{
       cout << "0" << endl;
     }
     if(!(i == windowNum - 1)){
       cout << " " << endl;
     }
   }
   cout << " " << endl;
 }

bool Calculations::isFileValid(){
  if(!f->exists()){
    return false;
  }
  f->open();
  while(f->good()){
    string temp = f->readLine();
//I didn't know how to approach this portion, so I used a source online
    for(int i = 0; i < temp.length(); ++i){
      try{
        int n = stoi(temp);
        if(n < 0){
          throw 1;
        }
        if(windowNum < 1){
          throw 2;
        }
      }
      catch(exception ex){
        cout << "ERROR" << endl;
        return false;
      }
      catch(int e){
        if( e == 1){
          cout << "ERROR" << endl;
        }
        else{
          cout << "ERROR" << endl;
        }
        return false;
      }
    }
  }
  f->close(); //closing the file
  return true; //returning that it is now good
}
