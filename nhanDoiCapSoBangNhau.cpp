#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],cnt=0;;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                cout<<a[i]<<" ";
                cnt++;
            }
        }
        for(int i=0;i<n-cnt;i++){
            cout<<0<<" ";
        }
        cout<<endl;
    }
}