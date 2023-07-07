#include<iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        int idx=0;
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return s1;
            }
            s1+=first[i];
        }
        return s1;
    }
};
