#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

//utilizing the template class shown in textbook
template <class T>
class Queue{
  public:
    Queue(); //constructor
    ~Queue(); //deconstructor

    T remove(); //taking top element out
    T peek(); //sees top element
    void insert(T data); //adding element
    bool isEmpty(); //is the queue empty
    void print(); //prints out the entire queue
    int getSize(); //how many elements are in the queue
    T* getIndex(int index); //returns 'address'/spot of element
    int numElements; //variable for the number of so-called nodes in queue

    private:
      DoublyLinkedList<T> *myQueue; //creates a queue

};

//filling out template
template<class T>
Queue<T>::Queue(){
      numElements = 0;
      myQueue = new DoublyLinkedList<T>();
}
//defining deconstructor for queue template
template<class T>
Queue<T>::~Queue(){
      //numElements = 0;
      delete myQueue;
}

template<class T>
void Queue<T>::insert(T data){
  myQueue->insertBack(data);
  numElements++;
}

template<class T>
T Queue<T>::remove(){
  T r = {};
  if(!isEmpty()){
    r = myQueue->removeFront();
    numElements--;
  }
  if(isEmpty() == true){
    cout << "THIS QUEUE IS EMPTY." << endl;
  }
  return r;
}

template<class T>
T Queue<T>::peek(){
  return myQueue->getFront();
}

template<class T>
bool Queue<T>::isEmpty(){
  return (numElements == 0);
  //returns true if it is empty, false if it is not
}

template<class T>
int Queue<T>::getSize(){
  return numElements;
}

template<class T>
void Queue<T>::print(){
  myQueue->printList();
  cout << "" << endl;
}

template<class T>
T* Queue<T>::getIndex(int index){
  ListNode<T> *curr = myQueue->getFrontNode();
  int i = 0;
  //going to filter through until it finds the correct address
  while (i != index){
    curr = curr->next;
    ++i;
  }
  return (curr->data);
}











  /*
  reorganizing the queue with the queue I made with the last assignemnt
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
*/
