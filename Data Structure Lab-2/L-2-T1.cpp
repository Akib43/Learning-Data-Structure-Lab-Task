#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"1st array size : ";cin>>a;
    cout<<"2ed array size : ";cin>>b;

    int arr1[a],arr2[b];
    
    cout<<"1st Array "<<endl;
    for(int i=0;i<a;i++){
        
        cin>>arr1[i];

    }
    cout<<"2ed Array "<<endl;
    for(int i=0;i<b;i++){

        
        cin>>arr2[i];
        
    }

    int c=a+b;
    int newarr[c];
    int i=0,j=0;
    
    cout<<endl<<endl;
    
    while(i<a){
        for(int k=0;k<a;k++){
            newarr[k]=arr1[i];
            i++;
        }
    }
     
    while(j<b){
        for(int k=a;k<c;k++){
           newarr[k]=arr2[j];
            j++; }

    }
    
    for(int k=c-1;k>=0;k--){
        cout<<newarr[k]<<" ";
    }
    return 0;

}