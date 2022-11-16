#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stringstream ss(s);
        string tmp;
        string res="";
        int cnt=0;
        while(ss>>tmp){
            cnt+=tmp.size();
            if(cnt>100){
                break; 
            }
            cnt++;
            res=res+tmp+' ';
        }
        cout<<res<<endl;
    }
    return 0;
}