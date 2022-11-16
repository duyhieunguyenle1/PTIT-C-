#include<iostream>
using namespace std;
typedef long long ll;
ll max(ll n){
    int a[100],i=0;
    ll temp=0;
    while(n>0){
        a[i]=n%10;
        if(a[i]==5){
            a[i]=6;
        }
        i++;
        n/=10;
    }
    for(int k=i-1;k>=0;k--){
        temp=(temp+a[k])*10;
    }
    return temp/10;
}
ll min(ll n){
    int a[100],i=0;
    ll temp=0;
    while(n>0){
        a[i]=n%10;
        if(a[i]==6){
            a[i]=5;
        }
        i++;
        n/=10;
    }
    for(int k=i-1;k>=0;k--){
        temp=(temp+a[k])*10;
    }
    return temp/10;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        cout<<min(a)+min(b)<<" "<<max(a)+max(b)<<endl;
    }
    return 0;
}