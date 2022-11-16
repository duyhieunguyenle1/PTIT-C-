#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,sum=0; cin>>n;
        for(long long i=1;i<=sqrt(n);i++){
            if(n%i==0){
                long long j=n/i;
                if(i==j)sum+=i;
                else sum=sum+i+j;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}