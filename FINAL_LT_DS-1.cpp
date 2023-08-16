#include<iostream>
using namespace std;

struct teacher{
    string name;
    string id;
    float salary;
};

class Root{
public:    
    teacher data;
    Root *left;
    Root *right;

    Root(teacher val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
    
};

void search(string vl,Root *head){
    int flg=1;
    string flgname="Root ";

    while(head!=NULL){
        teacher te=head->data;
        if(vl==te.id){
            cout<<"Item Found at "<<flgname<<" Node "<<flg<<endl;
            cout<<"Name : "<<te.name<<"\nID : "<<te.id<<"\nSalary : "<<te.salary<<endl;
            return;
        }else if(vl<te.id){
            head=head->left;
            flgname=flgname+" left .";
            flg++;
        }else if(vl>te.id){
            head=head->right;
            flgname=flgname+"Right .";
            flg++;
        }

    }
    cout<<"Item Not Found .\n";

};

Root *insert(teacher vl,Root *head){
    if(!head){
        return new Root(vl);
    }
    teacher te=head->data;
    if(vl.id>te.id){
        head->right=insert(vl,head->right);
    }else if(vl.id<te.id){
        head->left=insert(vl,head->left);
    }
    return head;
};

int main(){
    int n;
    cout<<"Number of teacher info to input : ";
    cin>>n;

    string r_name,r_id;
    float r_salary;
    cout<<"Root elements values : \n";
    cout<<"Name : ";cin>>r_name;
    cout<<"Id  : ";cin>>r_id;
    cout<<"salary: ";cin>>r_salary;
    teacher tea ={r_name,r_id,r_salary};
    Root* root1=new Root(tea);

    cout<<"Leaf elements Values : \n";
    for(int i=0;i<n-1;i++){
        string l_name,l_id;
        float l_salary;
        cout<<"Name : ";cin>>l_name;
        cout<<"id   : ";cin>>l_id;
        cout<<"salary    : ";cin>>l_salary;
        cout<<endl;
        teacher tea={l_name,l_id,l_salary};
        insert(tea,root1);
    }

    string search_id;
    cout<<"\nEnter the id you want to find out : ";
    cin>>search_id;
    search(search_id,root1);
}