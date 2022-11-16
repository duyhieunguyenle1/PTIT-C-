#include<iostream>
using namespace std;
int soThuanNghich(long long n){
	long long m=n,so=0;
	while(n>0){
		so=so*10+n%10;
		n/=10;
	}
	if(m==so)return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t>0){
		long long n;
		cin>>n;
		if(soThuanNghich(n))cout<<"YES\n";
		else cout<<"NO\n";
		t--;
	}
}