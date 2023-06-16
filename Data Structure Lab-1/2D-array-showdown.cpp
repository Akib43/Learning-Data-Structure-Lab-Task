#include<iostream>
using namespace std;

int main(){
    string students[3][4]={ {"Akib Ashfaq  ","22-48928-3","3.87","akibash450@gmail.com"},
                            {"Md Mridul Ali","22-48929-3","3.78","mdmridulali@gmail.com"},
                            {"Naimul islam ","22-48900-3","3.40","nauimulislam@gmail.com"}
        };

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){

            cout<<"  "<<students[i][j];
        }
        cout<<endl<<endl;
    }

}