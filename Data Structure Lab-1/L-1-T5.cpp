#include <iostream>
using namespace std;

int main() {
    
  int numb,temp=0;
    cout<<"Enter number : ";
    cin>>numb;
    int c=numb;
    
    for(int i=2;i<c;i++){
        if(numb%i==0){
            temp++;
            break;
        }
    }

    if(temp==0 && numb!=1){
        
        for(int i=1;i<c;i++){
            numb=numb*i;
        }
        cout<<numb;
    }else{
        cout<<"error"<<endl;
    }
}