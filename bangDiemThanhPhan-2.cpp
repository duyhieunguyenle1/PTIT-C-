#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,masv,birth;
    float g1,g2,g3;
};
void nhap(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, a[i].masv);
        getline(cin, a[i].name);
        cin>>a[i].birth>>a[i].g1>>a[i].g2>>a[i].g3;
    }
}
bool cmp(SinhVien &a,SinhVien &b){
    return a.name.compare(b.name)<0;
}
void in(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<a[i].masv<<" "<<a[i].name<<" "<<a[i].birth<<" "
        <<fixed<<setprecision(1)<<a[i].g1<<" "<<a[i].g2<<" "<<a[i].g3<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    struct SinhVien ds[n];
    nhap(ds,n);
    sort(ds,ds+n,cmp);
    in(ds,n);
    return 0;
}