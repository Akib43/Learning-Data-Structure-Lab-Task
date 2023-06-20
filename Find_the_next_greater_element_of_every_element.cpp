// Write a C++ program to find the next more powerful element of every element of a given array of integers. Ignore those elements that have no greater element.//

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

    for(int i=0;i<9;i++){
        int j,k=0;
        for(j=i+1;j<9;j++){
            if (nums[i]<nums[j]){
                k++;
                break;
            }
        }
        if(k>0){

            cout<<nums[i]<<"'s next more powerful element is "<<nums[j]<<endl;
        }
    }
}