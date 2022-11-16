#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long a[n];
        for(long long &x:a)cin>>x;
        for(long long x:a){
            if(x!=0)cout<<x<<" ";
        }
        for(long long x:a){
            if(x==0)cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}