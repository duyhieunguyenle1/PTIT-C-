#include<bits/stdc++.h>
using namespace std;
// phan tich va dem thua so nguyen to khac nhau = 3
int isSphenic(int n){
    int res=0;
    for (int i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>=2)return 0;
        if(cnt==1)res++;
    }
    if(n!=1)res++;
    if(res==3)return 1;
    return 0;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(isSphenic(n))cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}