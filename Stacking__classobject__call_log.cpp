#include<iostream>
#include<stack>
using namespace std;
class log{
public:
    string name;
    string number;
    float time;

    void setData(string n, string num, float tm){
        name = n;
        number = num;
        time = tm;
    }
    
    void dtl(){
        cout << "Name : "<<name<<"\nNumber : "<<number<<"\nTime:"<<time<<endl;
    }
};
int main(){
    int j;
    cout<<"How many numbers to save :- ";
    cin>>j;
    log* l = new log[j];
    stack<log> st;
    string n, num;
    float tm;
    for (int i = 0; i < j; i++){
        cout<<"Name : ";
        cin >> n;
        cout<<"Number: ";
        cin>>num;
        cout<<"Time: ";
        cin>>tm;
        l[i].setData(n,num,tm);
        st.push(l[i]);
    }

    cout<<"Call Log"<<endl;
    for (int i = 0; i < j; i++){
        log m=st.top();
        m.dtl();
        st.pop();
        cout<<endl;
    }

}
