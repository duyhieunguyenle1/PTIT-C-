#include<iostream>
#include<cmath>
using namespace std;
int primeNumber(long long n){
	if(n<2)return 0;
	for(long long i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t>0){
		long long l,r; cin>>l>>r;
        long long count=0;
		for(long long i=l;i<=sqrt(r);i++){
			if(primeNumber(i))count++;
		}
        cout<<count<<endl;
		t--;
	}
	return 0;
}