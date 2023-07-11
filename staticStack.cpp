#include <iostream>
#define SIZE 10
using namespace std;

class Stack
{
    int data[SIZE];
    int top;
    
    public:
    Stack()
    {
        top=-1;
    }
    void push(int element)
    {
     if (isFull()==1)
        cout<<"Stack is is Full...";
     else
       data[++top]=element; 
    }
    int pop()
    {
     if (isEmpty()==1)
        return -1;
     else
        return data[top--];
    }
    int isEmpty()
    {
     if(top==-1)
        return 1;
     else
        return 0;
    }
    int isFull()
    {
     if(top==SIZE-1)
       return 1;
     else 
       return 0;
    }
    int peek()
    {
        if (isEmpty()==-1)
        return data[top];
        else 
        return data[top];
    }
};
int main()
{
    cout<<"Static implementation of Stack";
    Stack st;
    st.push(10);
    st.push(20);
    cout<<"\nStack is Empty.."<<st.isEmpty();
    cout<<"\nStack is Full.."<<st.isFull();
    cout<<"\nElement is at Top Position.."<<st.peek();
    cout<<"\nElement is Removed From Stack.."<<st.pop();
    cout<<"\nElement is Removed From Stack.."<<st.pop();
    cout<<"\nElement is Removed from Stack.."<<st.pop();

    return 0;
}