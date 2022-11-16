#include<bits/stdc++.h>
using namespace std;
struct danhSach{
    string name,birth;
};
typedef struct danhSach ds;
bool cmp(ds a,ds b){
    string s=a.birth,t=b.birth;
    int n1=(s[0]-'0')*10+s[1]-'0',n2=(s[3]-'0')*10+s[4]-'0';
    int t1=(t[0]-'0')*10+t[1]-'0',t2=(t[3]-'0')*10+t[4]-'0';
    int na1=stoi(s.substr(6)),na2=stoi(t.substr(6));
    if(na1!=na2)return na1>na2;
    if(n2!=t2)return n2>t2;
    return n1>t1;
}
int main(){
    int n; cin>>n;
    ds a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].birth;
    }
    sort(a,a+n,cmp);
    cout<<a[0].name<<endl<<a[n-1].name;
}