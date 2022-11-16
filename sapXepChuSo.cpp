#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        set<int>s;
        for(int i=0;i<n;i++){
            int temp=a[i];
            while(temp>0){
                s.insert(temp%10);
                temp/=10;
            }
        }
        for(int x:s)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}