#include<iostream>
using namespace std;
typedef long long ll;
ll sumNumber(ll n){
	ll temp=0;
	while(n>0){
		temp+=n%10;
		n/=10;
	}
	return temp;
}
ll primeNumber(ll n){
	ll i=2,sum=0;
	while(i<=n){
		if(n%i==0){
			sum+=sumNumber(i);
			n/=i;
			}else i++;
		}
	return sum;
}
bool isPrime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return n>1;
}
int main(){
    ll n; cin>>n;
    if((sumNumber(n)==primeNumber(n))&&!isPrime(n))cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
