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
        int check=0,k;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(a[i]==a[j]){
                    check=1;
                    k=i;
                    goto end;
                }
            }
        }
        end:if(!check)cout<<"-1\n";
        else cout<<a[k]<<endl;
    }
    return 0;
}