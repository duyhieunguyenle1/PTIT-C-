#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            if(min1>a[i])min1=a[i];
        }
        for(int i=0;i<n;i++){
            if(min2>a[i]&&a[i]>min1)min2=a[i];
        }
        if(min2==INT_MAX)cout<<"-1\n";
        else cout<<min1<<" "<<min2<<endl;
    }
}