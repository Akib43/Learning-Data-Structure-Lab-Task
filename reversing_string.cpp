#include <iostream>
using namespace std;
#define MAX_SIZE 20

class Stack {
public:
    int tops = -1; 
    char arr[MAX_SIZE]; 
    
    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
        }
        arr[++tops] = x; 
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[tops--]; 
    }

    char top() {
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
    }

    cout << "\nStack elements: ";
    for (int i = tops; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
  }
};

int main(){
    Stack stk;
    string s;
    cout<<"String : ";
    cin>>s;

    for(int i=0;i<s.size();i++){
        stk.push(s[i]);
    }

    cout<<"Reversed string :";
    for(int i=0;i<s.size();i++){
        cout<<stk.pop();
    }

}