#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int len=s.size();
        multiset<char>sm;
        for(int i=0;i<len;i++){
            sm.insert(s[i]);
        }
        int temp=0;
        for(auto i:sm){
            if(isdigit(i))temp+=(i-'0');
            else cout<<i;
        }
        cout<<temp<<endl;
    }
}