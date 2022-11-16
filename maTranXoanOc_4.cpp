#include<bits/stdc++.h>
using namespace std;
int main(){
        int n; cin>>n;
        int a[n][n],b[n*n],k=0,c[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                b[k]=a[i][j];
                k++;
            }
        }
        sort(b,b+k);
        int c1=0,h1=0,c2=n-1,h2=n-1,x=0;
        while(c1<=c2&&h1<=h2){
            for(int i=c1;i<=c2;i++){
                c[h1][i]=b[x];
                x++;
            }
            h1++;
            for(int i=h1;i<=h2;i++){
                c[i][c2]=b[x];
                x++;
            }
            c2--;
            for(int i=c2;i>=c1;i--){
                c[h2][i]=b[x];
                x++;
            }
            h2--;
            for(int i=h2;i>=h1;i--){
                c[i][c1]=b[x];
                x++;
            }
            c1++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}