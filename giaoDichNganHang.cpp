#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string name; getline(cin,name);
        int n; cin>>n;
        long long a[n];
        long long sum=0,temp=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]<0)sum+=a[i];
            else temp+=a[i];
        }
        if(abs(sum)>=100000000&&temp>=sum)cout<<"YES\n";
        else cout<<"NO\n";
    }
}