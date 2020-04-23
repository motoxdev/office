#include "Student.h"

class Window{
  public:
    Window(); //constructor
    Window(int num); //overloaded constructor
    ~Window(); //deconstructor

    void studentAtWindow(Student s); //puts student s at the window
    Student* getStudent(); //returns what student is at the window
    int getIdle(); //gets the current idle time
    void decrementsIdle(); //reduces idle time now that student has made their way to a window
    void incrementsIdle(); //adds to the idle

    bool isFull(); //returns true/false if a student is at a window or not
    void setFull(bool t); //sets a window empty or not

  private:
    int idle; //idle number
    Student currStudent; //the current student we are dealing with
    bool full; //yes or no on window full
    int windowNumber; //number of the particular window

}
