#include<iostream>
using namespace std;

int main(){
    int a,c, b;
    cout<<"Starting value : "; 
    cin>>a;
    cout<<"Ending Value : ";
    cin>>b;

    c=b-a;
    int counter[c+1];
    counter[0]=a;
    counter[c]=b;

    for(int i=1;i<c;i++){
        counter[i]=counter[i-1]+1;
    }

    for(int i=0;i<c+1;i++){
        if(counter[i]%2!=0){
        cout<<counter[i]<<endl;}
    }
}