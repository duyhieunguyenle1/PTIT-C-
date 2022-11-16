#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int len=s.size();
    if(s[0]=='0')return 0;
    for(int i=0;i<len;i++){
        if(s[i]<'0'||s[i]>'9')return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(!check(s)){
            cout<<"INVALID\n";
        }
        else{
            set<char> x;
            for(int i=0;i<s.size();i++){
                x.insert(s[i]);
            }
            if(x.size()==10)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}