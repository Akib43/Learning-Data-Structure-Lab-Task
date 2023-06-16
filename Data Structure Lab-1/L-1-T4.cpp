#include <iostream>
using namespace std;

int main() {
   
   int m,n;
   cout<<"Matrix size (Row X Column) : ";
   cin>>m>>n;

   
   int A[m][n],B[m][n],C[m][n],D[m][n];
    cout<<endl<<"Matrix 1"<<endl;
    for(int i=0;i<m;i++){
     cout<<i+1<<" number row Values : ";
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }   
        cout<<endl;
    }
    cout<<endl<<"Matrix 2"<<endl;
    for(int i=0;i<m;i++){
     cout<<i+1<<" number row Values : ";
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
        
        cout<<endl;
    }
    cout<<endl<<"Matrix 3"<<endl;

    for(int i=0;i<m;i++){
     cout<<i+1<<" number row Values : ";
        for(int j=0;j<n;j++){
            cin>>C[i][j];
        }
        
        cout<<endl;
    }
    cout<<endl;
    cout<<endl<<"Summation of 3 Matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            D[i][j]=A[i][j]+B[i][j]+C[i][j];

            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }

   
    
}
