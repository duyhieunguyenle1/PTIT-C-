#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int i){
    for(int j=1;j<n-1;j++){
        if(i==a[j])return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int min=a[0],max=a[n-1],cnt=0;
        for(int i=min+1;i<max;i++){
            if(check(a,n,i))cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}