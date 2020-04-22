#include "ListNode.h"
using namespace std;

//utilizing the template class shown in textbook
template <class T>
class queue{
  public:
    ListNode<T> *front;
    ListNode<T> *back;
    int size;
  //private:
  //no private variables due to wanting to be able to access everywhere
    //defining constructor for the queue template
    Queue(){
      size = 0;
      front= NULL;
      back = NULL;
    }
    //defining deconstructor for queue template
    ~Queue(){
      size = 0;
      delete front;
      delete back;
    }
    //method for adding a new element to the queue
    void addNode(T newNode){
      ListNode<T> *node = new ListNode<T>(newNode);
      //for the first node being added to an empty queue
      if(size == 0){
        front = node;
        back = node;
      }
      //if the queue is not empty
      if(size != 0){
        back->net = node;
        node->prev = back;
      }
      ++size; //adding node to the Queue
      back = node; //making the new node the back of the queue

    }
    //checking to see if queue is emptyh
    bool isEmpty(){
      if(size == 0){
        return true;
      }
      if(size != 0){
        return false;
      }
    }

    //method for removing the front element of the queue
    T removeFront(){
      //if the queue is not empty
      if(isEmpty() == false){
        //creating a placeholder for the front node so we can remove it
        ListNode<T> *originalFront = front;
        //grabbing the elements that node holds
        T originalData = originalFront->data;

        //like in the doubly linked list, we are going to do the case everywhere
        //the queue only has one node in it
        if(front->next == NULL){
          back = NULL;
          front = NULL;
        }
        //the case where there are multiple elements
        if(front-> != NULL){
          front->next->prev = NULL;
          front = front->next;//making the next element now the front element
        }
        delete originalFront; //deleting the old front node
        --size; //making the queue one node smaller after deletion

      }
    }

    //method for returning the front elements
    T returnFront(){
      return front->data;
    }
    //returning the node at the back
    T returnBack(){
      return back->data;
    }
    //getting the int value of the size of the Queue
    int getSize(){
      return size;
    }


};
