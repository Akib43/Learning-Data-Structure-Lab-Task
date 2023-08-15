#include<iostream>
#include<conio.h>
using namespace std;

class Root{
public:
    int data;
    Root *left;
    Root *right;
    Root(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void Search(int item, Root *head){

    int flag = 1;
    string flagName = "Root ";

    while(head != NULL){
        if(item == head->data){
            cout<< "Item Found at "<< flagName<<" Node "<<flag<<endl;
            break;
        }else if(item > head->data){
            head = head->right;
            flagName = flagName + "Right ";
            flag++;
        }else if(item < head->data){
            head = head->left;
            flagName = flagName + "Left ";
            flag++;
        }else{
            cout<< "Item Not Found"<<endl;
        }
    }
}




void inorder(Root* head) {
    if(head == NULL){return;}
    inorder(head->left); 
    cout << head->data << " "; 
    inorder(head->right); 
}

void preorder(Root *head){
    if(head == NULL){return;}
    cout << head->data << " "; 
    preorder(head->left);
    preorder(head->right);
}


void postorder(Root *head){
    if(head == NULL){return;}
    postorder(head->left);
    postorder(head->right);
    cout << head->data << " ";
}

Root* insertNode(int item,Root *head){

    if(!head){
        return new Root(item);
    }
    if(item > head->data){
        head->right =  insertNode(item,head->right);
    }else if(item < head->data){
        head->left = insertNode(item,head->left);
    }
    return head;
}

int main(){

    int g,n,a;
    cout<<"Numbers of elements to input :";
    cin>>n;
    cout<<"Root element :";
    cin>>g;
    Root *root = new Root(g);

    cout<<"Inputs : ";
    for(int i=0; i<n;i++){
        cin>>a;
        insertNode(a,root);
    }

    int item;
    cout<< "Enter Value to Search : ";
    cin>>item;
    Search(item,root);

    
    cout<< "In-order Print = ";
    inorder(root);
    cout<<endl;

    cout<< "Pre-order Print = ";
    preorder(root);
    cout<<endl;

    
    cout<< "Post-order Print = ";
    postorder(root);
   getch();
}


