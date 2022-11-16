#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        while(q--){
            int l,r; cin>>l>>r;
            long long sum=0;
            for(int i=l-1;i<r;i++){
                sum+=a[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}