#include<bits/stdc++.h>
using namespace std;
#define modulo 1000000007
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
        long long a[n];
		long long temp=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
			 long long s = 1; 
			 for (int j=n-i-1; j>0;--j) { 
				s=(s*x)%modulo; 
			} 
			temp+=a[i]*s; 
			if (temp>modulo)temp%=modulo; 
		}
        cout<<temp<<endl;
	}
	return 0;
}