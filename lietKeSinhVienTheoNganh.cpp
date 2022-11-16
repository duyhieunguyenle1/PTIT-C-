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
};
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
    int q; cin>>q;
    while(q--){
        string t; cin>>t;
        cout<<"DANH SACH SINH VIEN LOP "<<t<<":\n";
        for(sv x:a){
            if(x.getClass()==t){
               cout<<x;
            }
        }
    }
    return 0;
}