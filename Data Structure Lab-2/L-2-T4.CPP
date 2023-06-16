#include<iostream>
using namespace std;
int main(){
int arr[10];
int a;
cout<<"Input a number to search : ";
cin>>a;

cout<<"Array elements";
for(int i=0; i<10; i++){
    cin>>arr[i];
}
int temp=0;
for(int i=0;i<10;i++){
    if(a==arr[i]){
        temp++;
    }
}

cout<<"The number occurs "<< temp<<" times ";

return 0;

}