#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
struct PhanSo{
    ll tu,mau;
};
void rutgon(PhanSo &A){
    ll x=gcd(A.tu,A.mau);
    A.tu/=x;
    A.mau/=x;
}
void nhap(PhanSo &A){
    cin>>A.tu>>A.mau;
    rutgon(A);
}
void in(PhanSo A){
    cout<<A.tu<<"/"<<A.mau;
}
PhanSo tong(PhanSo p, PhanSo q){
    PhanSo t;
    t.tu=(p.tu*q.mau)+(q.tu*p.mau);
    t.mau=p.mau*q.mau;
    rutgon(t);
    return t;
}
int main(){
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}