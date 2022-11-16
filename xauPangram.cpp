#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        set<char>t;
        string s; cin>>s;
        int k; cin>>k;
        for(int i=0;i<s.size();i++)t.insert(s[i]);
        if((26-t.size())<=k)cout<<"1\n";
        else cout<<"0\n";
    }
}