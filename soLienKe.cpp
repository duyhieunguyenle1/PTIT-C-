#include<iostream>
#include<algorithm>
using namespace std;
int check(long long n){
    while(n>10){
        int temp1=n%10;
        n/=10;
        int temp2=n%10;
        if(max(temp1,temp2)-min(temp1,temp2)!=1)return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while (t>0){
        long long n; cin>>n;
        if(check(n))cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
    return 0;
}