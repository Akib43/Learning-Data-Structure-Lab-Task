#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Number of elements : ";
    cin>>n;
    int arr[n];
    int m=0;
    int arr1[n];

    cout<<" Array_1 :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            arr1[m]=arr[i];
            m++;
        }
    }

    if(n==m){
        cout<<"The array is a unique array"<<endl;
    }else{
        for(int i=0;i<m;i++){
            cout<<arr1[i]<<" ";
        }

    }

    
    

}