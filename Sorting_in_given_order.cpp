//Write a C++ program to rearrange a given sorted array of positive integers.
//Note: In final array, first element should be maximum value, second minimum value, third second maximum value, fourth second minimum value, fifth third maximum and so on.

#include <iostream>
using namespace std;


int main(){
    int n = 9;
    int nums[n] = {0, 1, 3, 4, 5, 6, 7, 8, 10},temp[n]; 
    
   	cout << "Original Ascending array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    
    cout<<endl;
    int small=0,k=1;
    
    for(int i=0;i<n;i++){
        
            if(i%2==0||i==0){
                temp[i]=nums[n-k];
                k++;
            }else{
                temp[i]=nums[small];
                small++;
            }
        
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }

     
}
