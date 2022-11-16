#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        int a[100000]={0};
        string s; getline(cin,s);
        for(int i=0;i<s.size();i++)a[s[i]]++;
        for(int i=0;i<s.size();i++){
            if(a[s[i]]<2)cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}