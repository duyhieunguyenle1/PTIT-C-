#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
struct PhanSo{
    ll tu,mau;
};
void nhap(PhanSo &A){
    cin>>A.tu>>A.mau;
}
void in(PhanSo A){
    cout<<A.tu<<"/"<<A.mau;
}
void rutgon(PhanSo &A){
    ll x=gcd(A.tu,A.mau);
    A.tu/=x;
    A.mau/=x;
}
int main(){
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}