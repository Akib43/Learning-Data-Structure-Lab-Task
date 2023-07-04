//Write a C++ program to find the inputed repeating elements in a given array of integers.

#include<iostream>
using namespace std;

int main(){
    int n = 2, m=11;              //
    int srh_ele[n]={5,7};        // can alter in a input process
    int nums[m]={1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2};

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if (srh_ele[i]==nums[j]){
                count++;
            }
        }
        if(count>0){
            cout<<srh_ele[i]<<" Occurce "<<count<<" times "<<endl;
        }
    }
}