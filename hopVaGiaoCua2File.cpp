#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream f1;
    ifstream f2;
    string s;
    set<string>a;
    map<string,int>mp;
    f1.open("DATA1.in");
    while(!f1.eof()){
        f1>>s;
        for(int i=0;i<s.size();i++)s[i]=tolower(s[i]);
        mp.insert({s,1});
        a.insert(s);
    }
    f1.close();
    f2.open("DATA2.in");
    while(!f2.eof()){
        f2>>s;
        for(int i=0;i<s.size();i++)s[i]=tolower(s[i]);
        if(mp[s]==1)mp[s]=2;
        a.insert(s);
    }
    f2.close();
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    for(auto x:mp)if(x.second==2)cout<<x.first<<" ";
}