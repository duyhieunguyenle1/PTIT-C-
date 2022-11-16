#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    string name,lop,birth;
    float gpa;
    public:
        void nhap(){
            getline(cin,name);
            getline(cin,lop);
            getline(cin,birth);
            cin>>gpa;
            if(birth[1]=='/')birth.insert(birth.begin(),'0');
            if(birth[4]=='/')birth.insert(birth.begin()+3,'0');
        }
        void xuat();
};
void SinhVien::xuat(){
    cout<<"B20DCCN001"<<" "<<name<<" "<<lop<<" "
    <<birth<<" "<<setprecision(2)<<fixed<<gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
