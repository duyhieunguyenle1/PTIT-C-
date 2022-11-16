#include<bits/stdc++.h>
using namespace std;
class sv{
    string masv,name,lop,email;
    public:
        friend ostream& operator<<(ostream&, sv);
        friend istream& operator>>(istream&, sv&);
        string getClass(){
            return this->lop;
        }
        string getId(){
            return this->masv;
        }
};
bool cmp(sv a,sv b){
    string a1=a.getClass(),a2=a.getId(),
            b1=b.getClass(),b2=b.getId();
    if(a1!=b1)return a1<b1;
    return a2<b2;
}
istream& operator>>(istream& in,sv &a){
    in>>a.masv;
    in.ignore();
    getline(in,a.name);
    in>>a.lop>>a.email;
    return in;
}
ostream& operator<<(ostream& out,sv a){
    return out<<a.masv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
}
int main(){
    int n; cin>>n;
    sv a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)cout<<a[i];
    return 0;
}