#include<bits/stdc++.h>
using namespace std;
struct sv{
    int id;
    string masv,name,lop,email,corp;
};
bool cmp(sv a,sv b){
    return a.masv<b.masv;
}
void print(sv a){
    cout<<a.id<<" "<<a.masv<<" "<<a.name<<" "
    <<a.lop<<" "<<a.email<<" "<<a.corp<<endl;
}
int main(){
    int n; cin>>n;
    sv a[n];
    for(int i=0;i<n;i++){
        a[i].id=i+1;
        cin>>a[i].masv;
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].lop>>a[i].email>>a[i].corp;
    }
    int q; cin>>q;
    while(q--){
        vector<sv> company;
        string x; cin>>x;
        for(int i=0;i<n;i++){
            if(a[i].corp==x)company.push_back(a[i]);
        }
        sort(company.begin(),company.end(),cmp);
        for(int i=0;i<company.size();i++)print(company[i]);
    }
}