// Write a C++ program to rearrange the elements of a given array of integers in a zig-zag pattern.

#include<iostream>
using namespace std;

int main(){
    int n=9;
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    bool ans = true;
 
    for (int i=0; i<n; i++){
        if (ans) {
            if (nums[i] > nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        else{
            if (nums[i] < nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        ans = !ans; 
    }
    cout << "\nNew array elements: ";
    for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
}