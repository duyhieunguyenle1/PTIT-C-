#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        vector<int>tmp;
        s=s+"hihi";
        int res=0,max=0;
        for(auto x:s){
            if(isdigit(x)){
                res=(res*10)+(x-'0');
            }
            else{
                if(res!=0)tmp.push_back(res);
                res=0;
            }
        }
        for(int i=0;i<tmp.size();i++){
            if(max<tmp[i])max=tmp[i];
        }
        cout<<max<<endl;
    }
    return 0;
}