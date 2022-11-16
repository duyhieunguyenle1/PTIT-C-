#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int t; cin>>t;
    while(t--){
        ll a,x,y; cin>>a>>x>>y;
        ll temp=gcd(x,y);
        while(temp--){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}