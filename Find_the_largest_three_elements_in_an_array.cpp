//Write a C++ program to find the largest three elements in an array //

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

    int lrg2,lrg3,lrg1;
    lrg1=lrg2=lrg3=0;

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
    for(int j=0;j<n;j++){
        if (lrg3 < arr[j] && arr[j]!=lrg2 && arr[j]!=lrg1){
            lrg3=arr[j];
        }
    }

    cout<<"Three largest elements : "<<lrg1<<" "<<lrg2<<" "<<lrg3<<" "<<endl;
 


}
