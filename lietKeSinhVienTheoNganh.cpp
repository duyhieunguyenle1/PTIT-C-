#include<bits/stdc++.h>
using namespace std;
class sv{
    string masv,name,lop,email;
    public:
        friend ostream& operator<<(ostream&, sv);
        friend istream& operator>>(istream&, sv&);
        string getID(){
            return this->masv;
        }
        string getClass(){
            return this->lop;
        }
};
istream& operator>>(istream& in,sv &a){
    in>>a.masv;
    in.ignore();
    getline(in,a.name);
    in>>a.lop>>a.email;
    return in;
}
ostream& operator<<(ostream& out,sv a){
    out<<a.masv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
    return out;
}
string nganh(string s){
    stringstream ss(s);
    string res="";
    string tmp;
    while(ss>>tmp){
        res+=toupper(tmp[0]);
    }
    return res.substr(0,2);
}
int main(){
    int n; cin>>n;
    sv a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int q; cin>>q;
    cin.ignore();
    while(q--){
        string t; getline(cin,t);
        for(int i=0;i<t.size();i++)t[i]=toupper(t[i]);
        cout<<"DANH SACH SINH VIEN NGANH "<<t<<":\n";
        for(int i=0;i<n;i++){
            if(nganh(t)=="AT"||nganh(t)=="CN"){
                if(a[i].getClass()[0]!='E'&&nganh(t)==a[i].getID().substr(5,2)){
                    cout<<a[i];
                }
            }else if(nganh(t)==a[i].getID().substr(5,2))cout<<a[i];
        }
    }
    return 0;
}