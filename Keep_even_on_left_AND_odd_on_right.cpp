// Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers //

#include<iostream>
using namespace std;

int main(){
    int n=9;
    int nums[n]= {0, 1, 3, 4, 5, 6, 7, 8, 10},arr[n];
    int k=0,m=n-1;
    for(int i=0;i<n;i++){
        if(nums[i]%2!=0){
           arr[m]=nums[i];
           m--;
        }
        if(nums[i]%2==0){
            arr[k]=nums[i];
            k++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}