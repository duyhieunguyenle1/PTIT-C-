#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id,name,class1,birth;
    float gpa;
};
void nhap(SinhVien &a){
    getline(cin,a.name);
    cin>>a.class1;
    cin>>a.birth;
    cin>>a.gpa;
    if(a.birth[1]=='/'){
        a.birth.insert(0,"0");
    }
    if(a.birth[4]=='/'){
        a.birth.insert(3,"0");
    }
}
void in(SinhVien a){
    a.id="B20DCCN001";
    cout<<a.id<<" "<<a.name<<" "<<a.class1<<" "<<a.birth<<" "
    <<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}