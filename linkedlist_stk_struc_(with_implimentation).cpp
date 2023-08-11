#include <iostream>
#include<ctime>
#define size 10
using namespace std;

struct Transaction {
    int transId;
    int fromId;
    double amount;
    time_t time;
};

class Stack {

public:
    Transaction arr[size];
    int top = -1;

    void push(Transaction a){
        if(top >= size-1){
            cout<<"Stack is full..."<<endl;
        }
        arr[++top] = a;

    }

    void pop(){
        if(top < 0){
            cout<<"Stack is empty..."<<endl;
        }
    
        --top;
    }

    int Size(){
        return top;
    }

    bool empty(){
    if(top<0) return true;
    else return false;
    }

    Transaction Top(){
        return arr[top];
    }
};

struct Node {
    Stack transactions;
    Node* next;
};

void addTransaction(Node*& head, Node*& tail, int transId, int fromId, double amount, time_t time) {
    Transaction newTransaction{transId, fromId, amount, time};

    if (head == nullptr) {
        head = new Node{Stack(), nullptr};
        head->transactions.push(newTransaction);
        tail = head;
    } else {
        if (tail->transactions.Size() < 2) {
            tail->transactions.push(newTransaction);
        } else {
            Node* newNode = new Node{Stack(), nullptr};
            newNode->transactions.push(newTransaction);
            tail->next = newNode;
            tail = newNode;
        }
    }
}

void showTransactions(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        Stack transStack = current->transactions;
        while (!transStack.empty()) {
            Transaction trans = transStack.Top();
            cout << "TransID: " << trans.transId << "\nFromID: " << trans.fromId << "\nAmount: " << trans.amount
                 << "\nTime: " << ctime(&trans.time);
            transStack.pop();
        }
        cout << endl;
        cout << endl;
        cout << endl;
        current = current->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    cout<<"List of transaction to insert : ";
    cin>>n;
    int a,b;
    float c;

    for(int i=0;i<n;i++){
    cout<<"transaction id : ";
    cin>>a;
    cout<<"Transation from id: ";
    cin>>b;
    cout<<"Amount : ";
    cin>>c;
    addTransaction(head, tail, a, b, c, time(nullptr));
    cout<<endl;
    }

    showTransactions(head);
}
