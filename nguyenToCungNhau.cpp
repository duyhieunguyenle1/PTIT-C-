#include<bits/stdc++.h>
using namespace std;
bool primeNumber(int n){
    if(n<=3)return n>1;
    if(n%2==0||n%3==0)return false;
    int i=5;
    while(i*i<=n){
        if(n%i==0||n%(i+2)==0)return false;
        i+=6;
    }
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int cnt=0;
        for(int i=1;i<=x;i++){
            if(__gcd(i,x)==1)cnt++;
        }
        if(primeNumber(cnt))cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
