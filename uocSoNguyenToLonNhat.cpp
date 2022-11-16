#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t; cin>>t;
    while (t--){
        long long n; cin>>n;
        long long d[100000],cnt=0;
        while(n%2==0){
            n/=2;
            d[cnt++]=2;
        }
        for(long long i=3;i*i<=n;i+=2){ 
			while(n%i==0){ 
				n/=i; 
                d[cnt++]=i;
			} 
		}
        if(n!=1){
            cout<<n;
        }else {
            cout<<d[cnt-2];
        }
        cout<<"\n";
    }
    return 0;
}