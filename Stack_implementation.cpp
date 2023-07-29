#include <iostream>
using namespace std;
#define MAX_SIZE 5 

class Stack {
public:
    int tops = -1; 
    int arr[MAX_SIZE]; 
    
    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++tops] = x; 
        return true;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[tops--]; 
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[tops]; 
    }

    bool isEmpty() {
        return (tops < 0); 
    }

    bool isFull() {
        return (tops >= MAX_SIZE - 1); 
    }

void display() {
    if (tops < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "\nStack elements: ";
    for (int i = tops; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
  }
};
