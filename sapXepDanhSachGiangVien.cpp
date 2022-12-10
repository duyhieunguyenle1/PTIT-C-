#include<bits/stdc++.h>
using namespace std;
class gv{
    string id,name,major;
    public:
        friend ostream& operator<<(ostream&,gv);
        friend istream& operator>>(istream&,gv&);
        string getName(){
            return this->name;
        }
        string getID(){
            return this->id;
        }
};
static int cnt=0;
string nganh(string s){
    stringstream ss(s);
    string res="";
    string tmp;
    while(ss>>tmp){
        res+=toupper(tmp[0]);
    }
    return res;
}
istream& operator>>(istream& in,gv &a){
    getline(in,a.name);
    getline(in,a.major);
    string tmp="GV";
    cnt++;
    if(cnt<10)tmp+="0";
    a.id=tmp+to_string(cnt);
    return in;
}
ostream& operator<<(ostream& out,gv a){
    return out<<a.id<<" "<<a.name<<" "<<nganh(a.major)<<endl;
}
bool cmp(gv a,gv b){
    stringstream ss1(a.getName());
    string res1;
    string tmp1;
    while(ss1>>tmp1){
        res1=tmp1;
    }
    stringstream ss2(b.getName());
    string res2;
    string tmp2;
    while(ss2>>tmp2){
        res2=tmp2;
    }
    if(res1!=res2)return res1<res2;
    return a.getID()<b.getID();
}
int main(){
    int n; cin>>n;
    cin.ignore();
    gv a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)cout<<a[i];
}