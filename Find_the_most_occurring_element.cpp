//Write a C++ program to find the most frequent element in an array of integers.//

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
    int  count2=0;

    for(int i=0;i<8;i++){
        int count1=0;
        for(int j=i+1;j<8;j++){
            if (nums[i]==nums[j]){
                count1++;
            }
        }
        if(count1>count2){
                count2=count1;}
    }
    
    for(int i=0;i<8;i++){
        int count1=0;
        for(int j=i+1;j<8;j++){
            if (nums[i]==nums[j]){
                count1++;
            }  
        }
        if(count1==count2){
                cout<<nums[i];
            }
    }
    
}