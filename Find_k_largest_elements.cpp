//Write a C++ program to find the k largest elements in a given array of integers//

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of elements:  ";
        cin>>n;
    int arr[n],arr1[n];

    cout<<"Elements : " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Largest elements to find : ";
    cin>>k;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] ){
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    int m=n-1;
    for(int j=0;j<n;j++){
        arr1[m]=arr[j];
        m--;
     }

    for(int j=0;j<k;j++){
        cout<<" "<<arr1[j];
    }
}
