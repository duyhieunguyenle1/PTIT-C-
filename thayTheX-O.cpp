#include<bits/stdc++.h>
using namespace std;
pair<int,int>path[4]={{-1,0},{0,-1},{1,0},{0,1}};
char a[100][100];
int n,m;

void ff(int i,int j){
    a[i][j]='*';
    for(int k=0;k<4;k++){
        int i1=i+path[k].first;
        int j1=j+path[k].second;
        if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]=='O'){
            ff(i1,j1);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)cin>>a[i][j];
        }
        for(int i=1;i<=n;i++){
            if(a[i][1]=='O')ff(i,1);
            if(a[i][m]=='O')ff(i,m);
        }
        for(int i=1;i<=m;i++){
            if(a[1][i]=='O')ff(1,i);
            if(a[n][i]=='O')ff(n,i);
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]=='*')a[i][j]='O';
                else a[i][j]='X';
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}