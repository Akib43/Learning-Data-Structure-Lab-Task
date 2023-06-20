// Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers //

#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Number of elements : ";
        cin>>n;
    int nums[n];
    cout<<"Elements : " ;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int pre_ele=nums[0];
    nums[0]=nums[0]*nums[1];
    for(int i=0;i<n-1;i++){
        int current=nums[i];
        nums[i]=pre_ele*nums[i+1];
        pre_ele=current;
    }
    nums[n-1]=pre_ele*nums[n-1];

    cout<<"After Replacing : "<<endl;
    for(int i=0;i<9;i++){
        cout<<nums[i]<<" ";
    }
}