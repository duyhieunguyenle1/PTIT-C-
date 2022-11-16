#include<bits/stdc++.h>
using namespace std;
int idCount=1,cnt=0;
class NhanVien{
    int id;
    string name,sex,birth,address,mst,daySign;
    public:
        friend ostream& operator<<(ostream&,NhanVien);
        friend istream& operator>>(istream&,NhanVien&);
        string getBirth(){
            return this->birth;
        }
};
istream& operator>>(istream& in,NhanVien &a){
    if(cnt==0){
        in.ignore();
        cnt++;
    }
    getline(in,a.name);
    getline(in,a.sex);
    getline(in,a.birth);
    getline(in,a.address);
    getline(in,a.mst);
    getline(in,a.daySign);
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
    a.id=idCount++;
    return in;
}
ostream& operator<<(ostream& out,NhanVien a){
    out<<setw(5)<<setfill('0')<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.birth<<" "<<a.address
    <<" "<<a.mst<<" "<<a.daySign<<endl;
    return out;
}
bool cmp(NhanVien a,NhanVien b){
    string s=a.getBirth(),t=b.getBirth();
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
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}