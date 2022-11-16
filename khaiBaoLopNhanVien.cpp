#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    string name,sex,birth,address,mst,daySign;
    public:
        friend ostream& operator<<(ostream&,NhanVien);
        friend istream& operator>>(istream&,NhanVien&);
};
istream& operator>>(istream& in,NhanVien &a){
    getline(in,a.name);
    getline(in,a.sex);
    getline(in,a.birth);
    getline(in,a.address);
    getline(in,a.mst);
    getline(in,a.daySign);
    if(a.birth[1]=='/'){
        a.birth.insert(0,"0");
    }
    if(a.birth[4]=='/'){
        a.birth.insert(0,"0");
    }
    if(a.daySign[1]=='/'){
        a.daySign.insert(3,"0");
    }
    if(a.daySign[4]=='/'){
        a.daySign.insert(3,"0");
    }
    return in;
}
ostream& operator<<(ostream& out,NhanVien a){
    out<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.address
    <<" "<<a.mst<<" "<<a.daySign<<endl;
    return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}