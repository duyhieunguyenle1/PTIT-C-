#include<bits/stdc++.h>
using namespace std;
struct thisinh{
    string masv,name;
    float uutien,toan,ly,hoa,tong;
};
typedef struct thisinh ts;
float sum(ts a){
    a.tong=(a.toan*2)+a.hoa+a.ly;
    return a.tong;
}
int main(){
    ts a;
    getline(cin,a.masv);
    getline(cin,a.name);
    cin>>a.toan>>a.ly>>a.hoa;
    string temp;
    if(a.masv[2]=='1')a.uutien=0.5;
    if(a.masv[2]=='2')a.uutien=1.0;
    if(a.masv[2]=='3')a.uutien=2.5;
    if(sum(a)+a.uutien>=24)temp="TRUNG TUYEN";
    else temp="TRUOT";
    cout<<a.masv<<" "<<a.name<<" "<<a.uutien<<" "<<
    sum(a)<<" "<<temp;
}