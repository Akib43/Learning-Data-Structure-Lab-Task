#include<iostream>
using namespace std;

int main(){

    int numbers[10];
    int odd=0,even=0;
    cout<<"Input : ";
    for(int i=0;i<10;i++){
        cin>>numbers[i];
    }

    for(int i=0;i<10;i++){
         if(numbers[i]%2==0){
            even++;
         }
         else{
            odd++;
         }
    }
    cout<<odd<<" Number of odd number "<<endl;
    cout<<even<<" Number of even number "<<endl;
}