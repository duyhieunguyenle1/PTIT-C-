#include<bits/stdc++.h>
#include<cstring>
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
        string getMajor(){
            return this->major;
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
bool tim(string name,string key){
    for(char &x:name)x=tolower(x);
    for(char &x:key)x=tolower(x);
    return name.find(key)!=string::npos;
}
int main(){
    int n; cin>>n;
    cin.ignore();
    gv a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int q; cin>>q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
        for(int i=0;i<n;i++){
            if(tim(a[i].getName(),s))cout<<a[i];
        }
    }
}