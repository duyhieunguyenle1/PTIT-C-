#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,masv,birth;
    float g1,g2,g3;
};
void nhap(SinhVien &a){
    cin.ignore();
    getline(cin, a.masv);
    getline(cin, a.name);
    cin>>a.birth>>a.g1>>a.g2>>a.g3;
}
bool cmp(SinhVien &a,SinhVien &b){
    return a.masv.compare(b.masv)<0;
}
void sap_xep(SinhVien a[],int n){
    sort(a,a+n,cmp);
}
void in_ds(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" "<<a[i].masv<<" "<<a[i].name<<" "<<a[i].birth<<" "
        <<fixed<<setprecision(1)<<a[i].g1<<" "<<a[i].g2<<" "<<a[i].g3<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
    sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}