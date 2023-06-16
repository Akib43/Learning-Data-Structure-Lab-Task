#include<iostream>
using namespace std;

int main(){

    int intarry[10];

    
    //   cin>>intarry[0]>>intarry[1]>>intarry[2]>>intarry[3]>>intarry[4]>>intarry[5]>>intarry[6]>>intarry[7]>>intarry[8]>>intarry[9];
    
    for(int i=0;i<10;i++){
        cout<<"INput index number "<<i<<" : ";
        cin>>intarry[i];
    }
    
    for(int i=0;i<10;i++){
        cout<<" "<<intarry[i];
    }

    cout<<endl;
    
    for(int i=9;i>=0;i--){
        cout<<" "<<intarry[i];
    }
}
