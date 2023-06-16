#include<iostream>
using namespace std;

int main(){
     int arr[10]={8,4,6,1,6,9,6,1,9,8},arr1[10];
     cout <<"Input the array values in 10 Sized array"<<endl;

    /*for(int i=0;i<10;i++){
        cout<<"Input the valiu of the arry "<<i+1<<" : ";
        cin>>arr[i];
    }*/

    int m=0;
    for(int i=0;i<10;i++){
        int temp=0,j;
        for(j=0;j<10;j++){
            if(arr[i]==arr[j]){
                break;
            }   
        }
        if(i==j){
            arr1[m]=arr[i];
            m++;
        }
    }

    for(int i=0;i<m;i++){
    int temp=0;
        for(int j=0;j<10;j++){
            if(arr1[i]==arr[j]){
                temp++;
            }   
        }
    cout<<arr1[i]<<" occurs "<<temp<<" times "<<endl; 
    
    }
    
}