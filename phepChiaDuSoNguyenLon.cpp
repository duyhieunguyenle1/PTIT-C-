#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        long long m; cin>>m;
        long long k=0;
        for(int i=0;i<s.size();i++){
            k=(k*10+(s[i]-'0'))%m;
        }
        cout<<k<<endl;
    }
}