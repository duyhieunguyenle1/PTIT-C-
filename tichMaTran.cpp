#include<iostream>
using namespace std;
int main(){
    int n,m,p; cin>>n>>m>>p;
    int a[n][m],b[m][p],c[n][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int l=0;l<p;l++){
            c[i][l]=0;
            for(int j=0;j<m;j++){
                int temp=a[i][j]*b[j][l];
                c[i][l]+=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<p;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}