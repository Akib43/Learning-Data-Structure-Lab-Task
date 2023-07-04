/* Write a C++ program to move all negative elements of an array of integers to the end of the array.
This is done without changing the order of the positive elements of the array.*/


#include<iostream>
using namespace std;

int main(){
    int n=7;
    int nums[7] = {0, 9, -7, 2, -12, 11, -20}; 
    
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            int temp=nums[i];
            for(int j=i;j<n-1;j++){
                nums[j]=nums[j+1];
            }
            nums[n-1]=temp;
        }else{
            continue;
        }
    }
    for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";

}