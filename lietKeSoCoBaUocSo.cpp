#include<iostream>
#include<cmath>
using namespace std;
int primeNumber(int n){
	if(n<2)return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t>0){
		int n; cin>>n;
		for(int i=1;i<=sqrt(n);i++){
			if(primeNumber(i))cout<<i*i<<" ";
		}
        cout<<endl;
		t--;
	}
	return 0;
}