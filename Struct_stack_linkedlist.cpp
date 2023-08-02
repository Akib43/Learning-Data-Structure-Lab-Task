#include <iostream>
#include <stack>
using namespace std;

struct Transaction {
    int transId;
    int fromId;
    double amount;
    time_t time;
};

struct Node {
    stack<Transaction> transactions;
    Node* next;
};

void addTransaction(Node*& head, Node*& tail, int transId, int fromId, double amount, time_t time) {
    Transaction newTransaction = {transId, fromId, amount, time};

    if (head == nullptr) {
        head = new Node{stack<Transaction>(), nullptr};
        head->transactions.push(newTransaction);
        tail = head;
    } else {
        if (tail->transactions.size() < 3) {
            tail->transactions.push(newTransaction);
        } else {
            Node* newNode = new Node{stack<Transaction>(), nullptr};
            newNode->transactions.push(newTransaction);
            tail->next = newNode;
            tail = newNode;
        }
    }
}

void showTransactions(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        stack<Transaction> transStack = current->transactions;
        while (!transStack.empty()) {
            Transaction trans = transStack.top();
            cout << "TransID: " << trans.transId << "\nFromID: " << trans.fromId << "\nAmount: " << trans.amount
                 << "\nTime: " << ctime(&trans.time);
            transStack.pop();
        }
        cout << endl;
        current = current->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    cout<<"Amount of transaction to insert : ";
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
