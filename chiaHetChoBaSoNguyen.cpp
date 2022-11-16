#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcd(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
int main(){
    int t; cin>>t;
    while(t--){
        ll x,y,z,n; cin>>x>>y>>z>>n;
        ll a=pow(10,n-1),b=pow(10,n);
        ll temp1=lcd(x,lcd(y,z)),temp2=ceil((double)a/temp1);
        int check=1;
        if(temp2*temp1<=b){
            check=0;
            cout<<temp2*temp1<<endl;
            }
        if(check==1)cout<<"-1\n";
    }
    return 0;
}