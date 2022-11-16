#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    string name,lop,birth;
    float gpa;
    public:
        friend ostream& operator<<(ostream&,SinhVien);
        friend istream& operator>>(istream&,SinhVien&);
};
ostream& operator<<(ostream& out,SinhVien a){
    if(a.birth[1]=='/')a.birth.insert(a.birth.begin(),'0');
    if(a.birth[4]=='/')a.birth.insert(a.birth.begin()+3,'0');
    out<<"B20DCCN001"<<" "<<a.name<<" "<<a.lop<<" "<<a.birth<<" "
    <<setprecision(2)<<fixed<<a.gpa;
    return out;
}
istream& operator>>(istream& in,SinhVien &a){
    getline(in,a.name);
    getline(in,a.lop);
    getline(in,a.birth);
    in>>a.gpa;
    return in;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}