#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        int a[n][m],b[n*m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int c1=0,h1=0,c2=m-1,h2=n-1,x=0;
        while(c1<=c2&&h1<=h2){
            for(int i=c1;i<=c2;i++){
                b[x]=a[h1][i];
                x++;
            }
            h1++;
            for(int i=h1;i<=h2;i++){
                b[x]=a[i][c2];
                x++;
            }
            c2--;
            for(int i=c2;i>=c1;i--){
                b[x]=a[h2][i];
                x++;
            }
            h2--;
            for(int i=h2;i>=h1;i--){
                b[x]=a[i][c1];
                x++;
            }
            c1++;
        }
        cout<<b[k-1]<<endl;
    }
    return 0;
}