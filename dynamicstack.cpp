#include <iostream>
using namespace std;

class DynamicStack {
private:
    int* stackArray;
    int top;
    int capacity;

public:
    DynamicStack(int size) {
        stackArray = new int[size];
        capacity = size;
        top = -1;
    }

    ~DynamicStack() {
        delete[] stackArray;
    }

    void push(int value) {
        if (isFull()) {
            int* newArray = new int[capacity * 2]; // Double the capacity
            for (int i = 0; i <= top; i++) {
                newArray[i] = stackArray[i];
            }
            delete[] stackArray;
            stackArray = newArray;
            capacity *= 2;
        }

        stackArray[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return a default value indicating stack underflow
        }

        return stackArray[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Return a default value indicating stack underflow
        }

        return stackArray[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    DynamicStack stack(3);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout << "Top element: " << stack.peek() << endl;

    cout << "Elements popped: ";
    while (!stack.isEmpty()) {
        cout << stack.pop() << " ";
    }

    cout << endl;

    return 0;
}
