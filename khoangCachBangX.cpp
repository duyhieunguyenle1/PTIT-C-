#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int check=0;
        for(int i=0;i<n;i++){
            if(binary_search(a,a+n,x+a[i])){
                cout<<"1\n";
                check=1;
                break;
            }
        }
        if(!check)cout<<"-1\n";
    }
    return 0;
}