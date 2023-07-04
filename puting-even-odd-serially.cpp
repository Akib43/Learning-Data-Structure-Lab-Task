// Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers.

#include<iostream>
using namespace std;

int main(){
    int n = 9,p=0;
    int nums[n] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            swap(nums[i],nums[p++]);
        }
    }
    for(int i=0;i<n;i++){ 
        if(nums[i]%2!=0){
            swap(nums[i],nums[p++]);
        }
    }
    for (int i=0; i < n; i++) 
      cout << nums[i]<<" ";

}