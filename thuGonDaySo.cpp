#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    int k=0,dem=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(;k<n;){
        if((a[k]+a[k+1])%2!=0){
            dem++;
            k++;
        }else {
            k++;
        }
    }
    if(dem==n-1)dem++;
    cout<<dem<<endl;
    return 0;
}