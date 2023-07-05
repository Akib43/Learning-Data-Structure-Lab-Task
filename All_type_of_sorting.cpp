#include <iostream>

using namespace std;

struct student{
    string name;
    string id;
    float  cg;
};

void bubble(student st[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(st[j].cg> st[j+1].cg){
                swap(st[j],st[j+1]);
            }
        }
    }
}

void selection(student st[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(st[i].cg>st[j].cg){
                swap(st[i],st[j]);
            }
        }
    }
}

void insertion(student st[],int n){
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(st[i].cg<st[j].cg){
                swap(st[i],st[j]);
            }
        }
    }
}

void binary_srh(student st[], int n) {
    int o = 0;
    float p;
    cout << "The Number to search: ";
    cin >> p;
    
    for (int i = 0; i <= n - 2; i++) {
        if (st[i].cg < st[i + 1].cg) {
            o++;
        } else break;
    }
    
    if (o == n - 1) {
        int first = 0, last = n - 1;
        int mid;
        
        while (first <= last) {
            mid = (last + first) / 2;
            
            if (p == st[mid].cg) {
                cout << "Name: " << st[mid].name << "\nId: " << st[mid].id<< "\nCGPA: " << st[mid].cg<<endl;
                break;  
            }
            

            if (p > st[mid].cg) {
                first = mid + 1;
            } else {
                last = mid - 1;
            }

        }
        
        cout << "Element not found\n";
    } else {
        cout << "Not sorted\n";
    }
}


void info(student st[],int n){
    for(int i=0;i<n;i++){
        cout<<st[i].name<<endl;
        cout<<st[i].id<<endl;
        cout<<st[i].cg<<"\n\n";
    }
}

int main(){
    int nu;
    cout<<"Number of students :";
    cin>>nu;
    student* st=new student[nu];
    for(int i=0;i<nu;i++){
        cout<<"Name : ";
        cin>>st[i].name;
        cout<<"ID   : ";
        cin>>st[i].id;
        cout<<"CGPA : ";
        cin>>st[i].cg;
        cout<<endl;
    }
    int k;
    char m;
    do{
    cout<<"1. Bubble Sort .\n";
    cout<<"2. Insertion Sort.\n";
    cout<<"3. Selection .\n";
    cout<<"4. Binary Search.\n";
    cout<<"5. Exit.\n";
    cout<<"Which operation to choose : ";
    cin>>k;

    cout<<endl;

    if(k==1){
        bubble(st,nu);
        info(st,nu);
    }else if(k==2){
        insertion(st,nu);
        info(st,nu);
    }else if(k==3){
        selection(st,nu);
        info(st,nu);
    }else if(k==4){
        binary_srh(st,nu);
    }else{
        break;
    }
    cout<<"Do you want to do the operation again (Y/N) :  ";
    cin>>m;
    cout<<endl;
    }while(m=='Y'||m=='y');
    
}
