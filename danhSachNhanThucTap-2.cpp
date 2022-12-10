#include<bits/stdc++.h>
using namespace std;
class ds{
    string id,name;
    int so;
    public:
        friend istream& operator>>(istream&,ds&);
        friend ostream& operator<<(ostream&,ds);
        string getId(){
            return this->id;
        }
        int getSo(){
            return this->so;
        }
};
istream& operator>>(istream& in,ds &a){
    in>>a.id;
    in.ignore();
    getline(in,a.name);
    in>>a.so;
    return in;
}
ostream& operator<<(ostream& out,ds a){
    return out<<a.id<<" "<<a.name<<" "<<a.so<<endl;
}
bool cmp(ds a,ds b){
    if(a.getSo()!=b.getSo())return a.getSo()>b.getSo();
    return a.getId()<b.getId();
}
int main(){
    int n; cin>>n;
    ds a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,cmp);
    int q; cin>>q;
    while(q--){
        int x,y; cin>>x>>y;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<x<<" DEN "<<y<<" SINH VIEN:\n";
        for(int i=0;i<n;i++){
            if(a[i].getSo()<=y&&a[i].getSo()>=x)cout<<a[i];
        }
    }
}