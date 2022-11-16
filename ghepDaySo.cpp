#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n][m],b[n*m],k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                b[k++]=a[i][j];
            }
        }
        sort(b,b+k);
        for(int x:b)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}