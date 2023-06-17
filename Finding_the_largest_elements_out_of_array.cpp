 // Write a C++ program to find the largest element of a given array of integers //

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Number of elements: ";
        cin>>n;
    int arr[n];

    cout<<"Elements : " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max=0;
    for(int j=0;j<n;j++){
        if (max < arr[j]){
            max=arr[j];
        }
    }
    cout<<"Maximum value in the arry is : "<<max<<endl;
}
