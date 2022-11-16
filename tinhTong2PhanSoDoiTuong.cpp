#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class PhanSo{
    ll  tu,mau;
    public:
        PhanSo(ll tu,ll mau);
        friend ostream& operator<<(ostream&,PhanSo);
        friend istream& operator>>(istream&,PhanSo&);
        friend PhanSo operator+(PhanSo,PhanSo);
        void rutgon();
};
PhanSo::PhanSo(ll tu,ll mau){
    this->tu=tu;
    this->mau=mau;
}
ostream& operator<<(ostream& out,PhanSo a){
    out<<a.tu<<"/"<<a.mau<<endl;
    return out;
}
istream& operator>>(istream& in,PhanSo &a){
    in>>a.tu>>a.mau;
    return in;
}
void PhanSo::rutgon(){
    ll gcd=__gcd(tu,mau);
    tu/=gcd;
    mau/=gcd;
}
PhanSo operator+(PhanSo a,PhanSo b){
    PhanSo tong(1,1);
    tong.tu=(a.tu*b.mau)+(a.mau*b.tu);
    tong.mau=a.mau*b.mau;
    tong.rutgon();
    return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}