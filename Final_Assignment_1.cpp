#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head=nullptr;

public:

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void traverse() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
 
    bool search(int value) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void remove(int value) {
        if (head == nullptr) {
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            
            return;
        }
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            
        }
    }

    
};

int main() {
    LinkedList list;
    int n,a;
    cout<<"Numbers of elements to input : ";
    cin>>n;
    cout<<"Input : ";
    for(int i=0;i<n;i++){
        cin>>a;
        list.insert(a);
    }
    

    cout << "Linked List: ";
    list.traverse();

    int searchValue ;
    cout<<"Searching value : ";
    cin>>searchValue;
    if (list.search(searchValue)) {
        cout << searchValue << " found in the linked list." << endl;
    } else {
        cout << searchValue << " not found in the linked list." << endl;
    }

    int deleteValue;
    cout<<"Deletion Value : ";
    cin>>deleteValue;
    list.remove(deleteValue);
    cout << "Linked List after deleting " << deleteValue << ": ";
    list.traverse();
}
