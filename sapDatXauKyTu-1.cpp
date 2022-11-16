#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        map<char,int>m;
        int len=s.size(),dem=0;
        char max;
        for(int i=0;i<len;i++){
            m[s[i]]++;
            if(m[s[i]]>dem){
                dem=m[s[i]];
                max=s[i];
            }
        }
        if(m[max]>(len+1)/2)cout<<"0\n";
        else cout<<"1\n";
    }
    return 0;
}