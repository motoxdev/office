#include <fstream>
using namespace std;
#ifndef FILE_H
#define FILE_H

class File{
  public:
    File(); //constructor
    File(char *file); //overloaded constructor
    ~File(); //deconstructor

    void open(); //opens file
    void close(); //closes file
    bool exists(); //confirming the file exists
    string readLine(); //reading individual lines in the file
    void writeInFile(string file, string contents); //writing into a file
    void replaceFile(string file, string contents); //replacing a file

  private:
    ifstream file; //read in file
    string name; //name of the file
};

#endif
