#include<bits/stdc++.h>
using namespace std;
int res=0;
struct NhanVien{
    int id;
    string name,sex,birth,
    address,mst,daySign;
};
void nhap(NhanVien &a){
    res++;
    if(res==1)cin.ignore();
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
void inds(NhanVien a[],int n){
    for(int i=0;i<n;i++){
        a[i].id=i+1;
        cout<<setw(5)<<setfill('0')<<a[i].id<<" "<<a[i].name<<" "<<a[i].sex
        <<" "<<a[i].birth<<" "<<a[i].address<<" "<<a[i].mst<<" "<<
        a[i].daySign<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin>>N;
    for(i=0;i<N;i++)nhap(ds[i]);
    inds(ds,N);
    return 0;
}