#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream f;
    string s;
    set<string>a;
    f.open("VANBAN.in");
    while(!f.eof()){
        f>>s;
        for(int i=0;i<s.size();i++)s[i]=tolower(s[i]);
        a.insert(s);
    }
    f.close();
    for(auto x:a)cout<<x<<endl;
}