#include<bits/stdc++.h>
using namespace std; 
int dep4(string s){
    for(int i=5;i<8;i++){
        if(s[i]!='6'&&s[i]!='8')return 0;
    }
    for(int i=9;i<11;i++){
        if(s[i]!='6'&&s[i]!='8')return 0;
    }
    return 1;
}
int dep3(string s){
    for(int i=5;i<7;i++){
        if(s[i]!=s[i+1])return 0;
    }
    if(s[9]!=s[10])return 0;
    return 1;
}
int dep1(string c){
    if(c[5]<c[6]&&c[6]<c[7]&&c[7]<c[9]&&c[9]<c[10])return 1;
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        if(dep1(s)||dep3(s)||dep4(s))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}