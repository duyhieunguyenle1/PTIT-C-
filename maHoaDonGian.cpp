#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<'y')s[i]+=2;
        else if(s[i]>'B'&&s[i]<='Z')s[i]-=2;
        else if(s[i]=='y')s[i]='a';
        else if(s[i]=='A')s[i]='Y';
        else if(s[i]=='z')s[i]='b';
        else if(s[i]=='B')s[i]='Z';
    }
    cout<<s;
}