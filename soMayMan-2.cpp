#include<bits/stdc++.h>
using namespace std;
int solve(string n){
    int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=(n[i]-'0');
    }
    if(sum<10)return sum;
    return solve(to_string(sum));
}
int main(){
    int t; cin>>t;
    while(t--){
        string n; cin>>n;
        if(solve(n)==9)cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}