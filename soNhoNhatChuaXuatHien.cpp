#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=a[0];
        for(int i=1;i<n;i++){
            if(max<a[i])max=a[i];
        }
        for(int i=1;i<=max+1;i++){
            int dem=0;
            for(int j=0;j<n;j++){
                if(i==a[j])dem++;
            }
            if(dem==0){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}