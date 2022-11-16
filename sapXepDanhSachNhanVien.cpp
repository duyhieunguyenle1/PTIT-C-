#include<bits/stdc++.h>
using namespace std;
int res=0,i=0;
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
    a.id=i+1;
    i++;
}
bool cmp(NhanVien a,NhanVien b){
    string s=a.birth,t=b.birth;
    int n1=(s[0]-'0')*10+s[1]-'0',n2=(s[3]-'0')*10+s[4]-'0';
    int t1=(t[0]-'0')*10+t[1]-'0',t2=(t[3]-'0')*10+t[4]-'0';
    int na1=stoi(s.substr(6)),na2=stoi(t.substr(6));
    if(na1!=na2)return na1<na2;
    if(n1!=t1)return n1<t1;
    return n2<t2;
}
void sapxep(NhanVien a[],int n){
    sort(a,a+n,cmp);
}
void inds(NhanVien a[],int n){
    for(int i=0;i<n;i++){
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
    sapxep(ds,N);
    inds(ds,N);
    return 0;
}