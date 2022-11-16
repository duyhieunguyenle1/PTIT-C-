#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int max1=0,max2=0,max;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=a[i][j];
            }
            if(temp>max1){
                max1=temp;
            }
        }
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=a[j][i];
            }
            if(temp>max2){
                max2=temp;
            }
        }
        max=max1>max2?max1:max2;
        int res=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=a[i][j];
            }
            res+=(max-temp);
        }
        cout<<res<<endl;
    }
}