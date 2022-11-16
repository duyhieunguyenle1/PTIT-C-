#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu,mau;
};
void rutgon(PhanSo &a){
    long long gcd=__gcd(a.tu,a.mau);
    a.tu/=gcd;
    a.mau/=gcd;
}
void process(PhanSo a,PhanSo b){
    PhanSo tong,tich;
    tong.tu=(a.tu*b.mau)+(a.mau*b.tu);
    tong.mau=a.mau*b.mau;
    tong.tu*=tong.tu; tong.mau*=tong.mau;
    rutgon(tong);
    tich.tu=a.tu*b.tu*tong.tu;
    tich.mau=a.mau*b.mau*tong.mau;
    rutgon(tich);
    cout<<tong.tu<<"/"<<tong.mau<<" "<<tich.tu<<"/"<<tich.mau<<endl;
}
int main(){
    int t; 
    cin>>t;
    while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}