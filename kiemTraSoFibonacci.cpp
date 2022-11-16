#include <iostream>
using namespace std; 
int main(){ 
	int t; cin>>t;
	long long a[100000]; 
	a[0] = 0; a[1] = 1; 
	for(int i=2;i<1001;++i)a[i]=a[i-1]+a[i-2]; 
	while(t--){
		long long n; cin>>n;
		int check=0;
		for(int i=0;i<1001;++i){
			if(n==a[i]){ 
				check=1; 
				break; 
			} 
		}
		if(check)cout<<"YES\n";
		else cout<<"NO\n"; 
	} 
	return 0; 
}
