#include<bits/stdc++.h>
using namespace std;
void lowerCase(string &s){
    int len=s.size();
    for(int i=0;i<len;i++)s[i]=tolower(s[i]);
}
int main(){
    string s; cin>>s;
    lowerCase(s);
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'
        ||s[i]=='o'||s[i]=='u'||s[i]=='y');
        else cout<<"."<<s[i];
    }
}