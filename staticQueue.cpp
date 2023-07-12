//Program Demonstrate for static Queue in C++ by Pallavi Patil
#include <iostream>
#define SIZE 10
using namespace std;

class Queue
{
    int data[SIZE];
    int rear,front;
    
    public:
      Queue()
      {
          rear=front=-1;
      }
      void insert(int element)
      {
         if(isFull()==1)
           cout<<"Queue is Full.....!!";
         else
           data[++rear]=element; 
           if(front==-1)
             front++;
           
      }
      
      int remove()
      {
          if(isEmpty()==1)
            return 1;
          else
            return data[front++];
      }
      
      int isEmpty()
      {
          if(rear==front==-1 || front>rear)
          {
              cout<<"Queue is Full...!!";
              return 1;
          }
          else
          {
              return 0;
          }
      }
      
      int isFull()
      {
          if(rear==SIZE-1)
             return 1;
          else
             return 0;
      }
      
      int peek()
      {
          if(isEmpty()==1)
            return -1;
          else
            return data[front];
      }
};

int main()
{
    cout<<"  Static implementation of Queue......!!!\n";
    Queue qe;
    qe.insert(10);
    qe.insert(20);
    qe.insert(30);
    cout<<"\nQueue  is Empty?"<<qe.isEmpty();
    cout<<"\nQueue is Full?"<<qe.isFull();
    cout<<"\nElement is at a  rear position:"<<qe.peek();
    cout<<"\nElement removed from queue:"<<qe.remove();
    cout<<"\nElement removed from queue:"<<qe.remove();
    cout<<"\nElement removed from queue:"<<qe.remove();
    return 0;
}