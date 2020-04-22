#include <iostream>
using namespace std;

//going to use the code within the =textbook to create the template class
//creating invidual nodes to put into my doubly-linked list class

template <class T>
class ListNode{
  public:
    T data;
    ListNode<T> prev*;
    ListNode<T> next*;
    //constructor
    ListNode();
    //defining overloaded contructorr in template
    ListNode(T element){
      data = element;
      next = NULL;
      previous = NULL;
    }
    //defining destructor in tmeplate class
    ~ListNode(){
      if(next != NULL){
        next = NULL;
        prev = NULL;
      }
      delete next;
      delete prev;
    }
  private:
    //nothing is going to be private as we want them to be
    //accessed everywhere
}
