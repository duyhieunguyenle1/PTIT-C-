#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int len=s.size(),cnt=0;
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                if(s[i]==s[j])cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}