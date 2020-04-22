#include <iostream>
#include "ListNode.h" //inputting my list nodes
using namespace std;

//going touse another template class to create my doubly linked list

template <class T>
class doublyLinkedList{
  public:
    //defining constructor
    doublyLinkedList(){
      size = 0;
      back =  NULL;
      front = NULL;
    }
    //defining the deconstructor in the template
    ~doublyLinkedList(){
      if (front != NULL){
        back = NULL;
        front = NULL;
      }
      delete front;
      delete back;
    }

  private:
    //no private variables
    //filling out methods in template


    //checking if the list is empty
    bool isEmpty(){
      if(size == 0){
        return true;
      }
      if(size != 0){
        return false;
      }
    }

    //deleteing the front node in the doubly linked ListNode
    T removeFront(){
      if(isEmpty() == false){
        ListNode<T> *front = front;
        T frontOne = front->data;
      }
    }

    //to delete a node at a speific spot
    void removeNode(int spot){
      int index = 0;
      ListNode *curr = front;
      ListNode *prev = front;
      //filtering through the nodes ot find wanted value
      while (index != spot){
        prev = curr;
        curr = curr->next;
        ++index;
      }
      //now to delete the desired node
      prev->next = cur->next; //grabbing node around nodetobeDeleted
      curr->next->prev = prev; //resetting nodes around nodetobeDeleted
      curr->next = NULL; //isolating the nodetobeDeleted in next lines
      curr->prev = NULL;
      curr->data = NULL;
      size--; //making the doubly linked list one node smaller bc deletion
      delete current; //finally deleting the desired node from list
    }

    //delteing a node at the very top of the doubly linked list

}
