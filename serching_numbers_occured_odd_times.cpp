// Write a C++ program to find a number that occurs an odd number of times in a given array of positive integers .

#include <iostream>
using namespace std;

int main(){   
    int n = 8;
    int nums[n] = {5, 7, 8, 8, 5, 8, 7, 7}; 
    
    cout << "Number which occurs odd number of times: " ;
    for (int i = 0; i<n; i++) {
        int j,count=0;
         for(j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
         }

         if(count%2!=0){
            cout<<nums[i];
            break;
         }
    }
}
