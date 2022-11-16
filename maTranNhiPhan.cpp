#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++)cin>>a[i][j];
    }
    int res=0;
    for(int i=0;i<n;i++){
        int so1=0,so0=0;
        for(int j=0;j<3;j++){
            if(a[i][j]==0)so0++;
            if(a[i][j]==1)so1++;
        }
        if(so1>so0)res++;
    }
    cout<<res<<endl;
    return 0;
}