#include "File.h"
#include <fstream>
#include <iostream>
using namespace std;

File::File(){
  //nothing
}

File::File(char *file){
  name = file;
}

File::~File(){
  //nothing
}

void File::open(){
  file.open(name); //opens up the file
}

void File::close(){
  file.close(); //closes said file
}

bool File::exists(){
  ifstream f(name);
  if(f){
    return true; //saying it does exist
  }
  else{
    return false; //saying it does not exist
  }
}

string File::readLine(){
  string fileString;
  getline(file, fileString); //grabbing lines in the file
  return fileString; //returns string
}

void File::writeInFile(string fileName, string data){
  ofstream writeFile; //needed to get access to the file to write
  writeFile.open(fileName, ios::app); //found this online in order ot get it to work properly
  writeFile << " " << endl;
  writeFile << data << endl;
  writeFile.close(); //closes the file after writing into
}

void File::replaceFile(string file, string contents){
  ofstream writeFile;
  writeFile.open(file);
  writeFile << contents << endl;
  writeFile.close();
}
