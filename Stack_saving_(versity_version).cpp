#include <iostream>
#include <string>

using namespace std;

class log {
public:
  string name;
  string number;
  float time;

  log(string nm, string num, float tm) {
    name = nm;
    number = num;
    time = tm;
  }
};

class Stack {
public:
  log* arr[5];
  int top = -1;

  void push(log* l) {
    if (top >= 4) {
      cout << "Stack is full..." << endl;
      return;
    }
    arr[++top] = l;
  }

  log* pop() {
    if (top < 0) {
      cout << "Stack is empty..." << endl;
      return nullptr;
    }
    log* l = arr[top];
    top--;
    return l;
  }

  void printStack() {
    for (int i = 0; i <= top; i++) {
      cout << arr[i]->name << " " << arr[i]->number << " " << arr[i]->time << endl;
    }
  }
};

int main() {
  Stack stc;
  log* l1 = new log("John Doe", "1234567890", 123.45);
  log* l2 = new log("Jane Doe", "9876543210", 456.78);
  log* l3= new log("Jane Dqww", "9876543210", 456.78);
  stc.push(l1);
  stc.push(l2);
  stc.push(l3);
  stc.printStack();
  stc.pop();
  stc.printStack();
  return 0;
}
