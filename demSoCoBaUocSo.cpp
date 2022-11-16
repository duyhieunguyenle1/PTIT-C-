#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int primeNumber(ll n){
	if(n<2)return 0;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t>0){
		ll n; cin>>n;
		int count=0;
		for(ll i=1;i<=sqrt(n);i++){
			if(primeNumber(i))count++;
		}
        cout<<count<<endl;
		t--;
	}
	return 0;
}