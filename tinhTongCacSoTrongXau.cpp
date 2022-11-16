#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int sum=0,res=0;
        s=s+"hihi";
        for(auto x:s){
            if(isdigit(x)){
                res=(res*10)+(x-'0');
            }
            else{
                sum+=res;
                res=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}