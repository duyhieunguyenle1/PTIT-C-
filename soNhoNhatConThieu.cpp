#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int i){
    for(int j=0;j<n-1;j++){
        if(i==a[j])return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n-1;i++)cin>>a[i];
        for(int i=a[0];i<a[n-2];i++){
            if(solve(a,n,i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}