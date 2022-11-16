#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int temp=INT_MAX;
		for(int i=0;i<n-1;i++){
			if((a[i+1]-a[i])<temp)temp=(a[i+1]-a[i]);
		}
		cout<<temp<<endl;
	}
	return 0;
}
