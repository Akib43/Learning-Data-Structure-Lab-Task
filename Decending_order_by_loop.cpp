#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Numbner of elements :  ";
    cin>>n;
    int arr[n];
    cout<<"Elements : "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //loop for making the arry in Decending order //
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                int a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }

    cout<<"Decending order : ";                                    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                                              
    }
    cout<<endl;
   
}