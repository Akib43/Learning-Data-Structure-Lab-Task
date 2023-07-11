// Write a C++ program to separate 0s and 1s from a given array of values 0 and 1 //


#include<iostream>
using namespace std;

int main(){
    int n=10;
    int nums[n]= {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0},arr[n];
    int k=0,m=n-1;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
           arr[m]=nums[i];
           m--;
        }
        if(nums[i]==0){
            arr[k]=nums[i];
            k++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
