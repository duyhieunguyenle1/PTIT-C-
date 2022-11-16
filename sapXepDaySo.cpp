#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n],max=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>max)max=a[i];
        }
        int b[n],k=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                b[k]=a[i];
                k++;
            }
        }
        int cnt=1;
        for(int i=0;i<n;i++){
            if(a[i]==max&&cnt==1){
                b[k]=m;
                k++;
                cnt++;
            }
            if(a[i]>=0){
                b[k]=a[i];
                k++;
            }
        }
        for(int i=0;i<k;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}