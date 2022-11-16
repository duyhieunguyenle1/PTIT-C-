#include<iostream>
using namespace std;
long long fibo(int n){
	if(n<2)return n;
	if(n==2)return 1;
	long long f1=1,f2=1;
	long long fn=f1+f2;
		while(n>3){
			f1=f2;
			f2=fn;
			fn=f1+f2;
			n--;
		}
	return fn;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<fibo(n)<<endl;
	}
	return 0;
}
