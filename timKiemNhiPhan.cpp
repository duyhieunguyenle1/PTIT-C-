#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        int cnt[100000]={0};
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        if(cnt[k]==0)cout<<"-1\n";
        else cout<<"1\n";
    }
}