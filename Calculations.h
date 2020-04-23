#include "Queue.h"
#include "Student.h"
#include <string>
using namespace std;

class Calculation{
  public:
    Calculation(); //constructor
    ~Calculation(); //deconstructor
    //variables
    int numStudents; //number of students
    int numWindows; //number of windows
    //setup
    bool readFile(string file);
    bool increaseTime(int t);

    Queue<Student*> studentQueue; //creating queue with object student
    Queue<int> waitTimesList; //keeps track of all the wait times for each student
    Queue<int> idleTimesList; //keeps track of all the idle times for each window
    //calculating different things for assignment
    //calculating wait times
    double waitMean(); //double due to calculations within method
    double waitMedian();
    int waitMax(); //longest wait time int bc just picking node number
    //calculating idle times
    double idleMean();
    int idleMax();

    //print statments the user will see
    string printMinutes();
    void setMinutes(int m);
    string getMessage();

  private:
    //I am going to make most of the variables private
    //so they stick to just this class
    int studentTimeEntered;
    int studentWindowTime;


}
