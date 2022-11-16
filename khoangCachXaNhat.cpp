#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],res=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>=i;j--){
                if(a[i]<=a[j]){
                    int tmp=j-i;
                    if(tmp>res)res=tmp;
                    break;
                }
            }
        }
        cout<<res<<endl;
    }
}