#include<iostream>
using namespace std;

int main(){

    int a=6,b=6;
    
    cout<<"1st array size : ";cin>>a;
    cout<<"2ed array size : ";cin>>b;

    int arr1[a]= {1,4,6,3,6,9},arr2[b]={5,8,7,12,21,63};
    
    cout<<" Input the value in 1st Array "<<endl;
    for(int i=0;i<a;i++){

        cin>>arr1[i];

    }
    cout<<" Input the value in 2ed Array "<<endl;
    for(int i=0;i<b;i++){

        cin>>arr2[i];
        
    }

    int c=a+b;
    int arr3[c];
    
    int m=0,n=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
                if(arr1[i]==arr2[j]){
                    arr3[m]=arr1[i];
                    m++;
            }
        }

       
    }
    if(m==0){
        cout<<"There is no common element"<<endl;
    }  
    for(int i=0;i<m;i++){
        int j;
        for(j=0;j<m;j++){
            if(arr3[i]==arr3[j]){
                break;
            }
        }
        if(i==j){
            arr3[n]=arr3[i];
            n++;
        }
        
    }

    for(int p=0;p<n;p++){
        cout<<arr3[p]<<" ";
    }
    

    
    
    
}