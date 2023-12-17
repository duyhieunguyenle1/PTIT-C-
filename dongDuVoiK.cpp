// x>y : x%K=y%K -> (x-y)%k=0
// tìm ước chung lớn nhất của dãy số 
// số đồng dư chính là số ước của ước chung lớn nhất đấy

#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int j=1,res=0,ans=0;
        if(n)while(a[j]==a[j-1])j++;
        ans=abs(a[j]-a[j-1]);
        for(int i=j+1;i<n;i++)ans=gcd(ans,abs(a[i]-a[i-1]));
        if(j==n)ans=0;
        for(int i=1;i<=sqrt(ans);i++){
            if(ans%i==0){
                res++;
                if(ans!=i*i)res++;
            }
        }
        cout<<res<<endl;
    }
}