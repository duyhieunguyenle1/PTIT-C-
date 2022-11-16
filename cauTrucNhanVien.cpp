#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string id,name,sex,birth,
    address,mst,daySign;
};
void nhap(NhanVien &a){
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.birth);
    getline(cin,a.address);
    getline(cin,a.mst);
    getline(cin,a.daySign);
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
}
void in(NhanVien a){
    a.id="00001";
    cout<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<
    a.birth<<" "<<a.address<<" "<<a.mst<<" "<<
    a.daySign;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}