#include<iostream>
using namespace std;

struct node{
    int value;
    node *next;
};

class linkedlist{
public:
    node *head =nullptr;
    node *cur=nullptr;
    
    void newNode(int vlaue){
        node *temp=new node();
        temp->value=vlaue;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            cur=temp;
        }else{
            cur->next=temp;
            cur=temp;
        }
    }
};

class stack{
public:
linkedlist lt;

    void push(int a){
        lt.newNode(a);
    }

    void pop(){
        if(lt.head==nullptr){
            cout<<"Stack is empty \n";
        }
        

        if(lt.head==lt.cur){
            lt.head=nullptr;
            lt.cur=nullptr;
        }


        node* temp=lt.head;
        while(temp->next !=lt.cur){
            temp=temp->next;
        }
        lt.cur=temp;
        lt.cur->next=nullptr;
    }

    int top(){
        if(lt.head==nullptr){
            cout<<"Stack is empty.\n";
        }
        return lt.cur->value;
    }

    bool isempty(){
        if(lt.head==nullptr)return true;
        
        return false;
    }
    void show(){
        node* temp=lt.head;
        cout<<"Stack output : \n";
        while(temp!=nullptr){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};

int main(){
    stack stk;

    stk.push(10);
    stk.push(30);
    stk.push(50);
    stk.push(60);

    stk.show();

    stk.pop();
    stk.pop();

    stk.show();

    cout<<stk.top();

    cout<<"\nis empty ??\n"<<stk.isempty();


}