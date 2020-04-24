#include <iostream>
#include <fstream>
#include <sstream>
#include "Calculations.h"
#include "Queue.h"
using namespace std;

int main(int argc, char** argv){
  if(argc < 2){
    cout << "ERROR WITH FILE NAME" << endl;
    return 0;
  }

  ifstream file; //creating the file to open
  file.open(argv[1]); //opening the file
                    //to start simulation

  string fileString; //string to store file
  int temp; //creating a temporary variable
  getline(file, fileString);
  stringstream ss(fileString); //using this to open that file
  ss >> temp; //placing in temp var

  file.close(); //closing the file

  Calculations *c = new Calculations(argv[1], temp); //creating calculation
  c->begin(); //starting the calculation in calc class
  delete c; //deleting bc allocating that memory
  //everything at end needs to get cleaned up bc no garbage collector

  return 0; //ends everything
}
