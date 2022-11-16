#include<bits/stdc++.h>
using namespace std;
int idCount=1,cnt=0;
class NhanVien{
    int id;
    string name,sex,birth,address,mst,daySign;
    public:
        friend ostream& operator<<(ostream&,NhanVien);
        friend istream& operator>>(istream&,NhanVien&);
};
istream& operator>>(istream& in,NhanVien &a){
    if(cnt==0){
        in.ignore();
        cnt++;
    }
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
    a.id=idCount++;
    return in;
}
ostream& operator<<(ostream& out,NhanVien a){
    out<<setw(5)<<setfill('0')<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.address
    <<" "<<a.mst<<" "<<a.daySign<<endl;
    return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}