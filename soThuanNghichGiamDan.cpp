#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.size()<2)return false;
    int l=0,r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r])return false;
        l++; r--;
    }
    return true;
}
int main(){
    auto cmp=[](const string a, const string b){
        return (a.size()!=b.size()?a.size()>b.size():a>b);
    };
    string s;
    map<string,int,decltype(cmp)>mp(cmp); 
    while (cin>>s){
        if(check(s)){
            mp[s]++;
        }
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
