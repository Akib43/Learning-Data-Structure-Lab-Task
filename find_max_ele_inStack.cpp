#include <iostream>
using namespace std;
#define MAX_SIZE 15 

class Stack {
private:
    int top; 
    int arr[MAX_SIZE]; 
public:
    Stack() {
        top = -1; 
    }
    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++top] = x; 
        return true;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        
        return arr[top--]; 
    }
    
    int Top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        
        return arr[top]; 
    }

    bool isEmpty() {
    	
        return (top < 0); 
    }

    bool isFull() {
    	
        return (top >= MAX_SIZE - 1); 
    }

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "\nStack elements: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
  }
  
int max(){
    if (isEmpty()) {
        cout<<"Empty stack .\n";
    }
    int maxVal = arr[0];
    for (int i = 1; i <= top; i++) {
        if (arr[i] > maxVal) {     	
            maxVal = arr[i];
        }
    }
    return maxVal; 
}
};

int main() {
    Stack stk; 
    int a,n;
    cout<<"Elements to input : ";cin>>n;
    cout << "Input some elements onto the stack:";
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>a;
        stk.push(a);
    }
    
    stk.display(); 
    int max_val = stk.max(); 
    cout << "\nMaximum value: " << max_val << endl; 
    cout << endl;
    return 0;
}
