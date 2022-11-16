#include<bits/stdc++.h>
using namespace std;
void lowerCase(string &s){
    int len=s.size();
    for(int i=0;i<len;i++)s[i]=tolower(s[i]);
}
int main(){
    vector <string> tmp;
    string name; getline(cin,name);
    string x;
    stringstream ss(name);
    while(ss>>x){
        tmp.push_back(x);
    }
    int len=tmp.size();
    for(int i=0;i<len;i++)lowerCase(tmp[i]);
    cout<<tmp[len-1];
    for(int i=0;i<len-1;i++){
        cout<<tmp[i][0];
    }
    cout<<"@ptit.edu.vn";
}