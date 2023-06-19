//Write a C++ program to find the second largest element in an array of integers //

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Number of elements : ";
        cin>>n;
    int arr[n];
    cout<<"Elements :  " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int lrg2,lrg3,lrg1;
    lrg1=lrg2=0;

    for(int j=0;j<n;j++){
        if (lrg1 < arr[j]){
            lrg1=arr[j];
        }
    }
    for(int j=0;j<n;j++){
        if (lrg2 < arr[j] && arr[j]!=lrg1){
            lrg2=arr[j];
        }
    }
    cout<<"The second largest element is : "<<lrg2<<endl;
}
