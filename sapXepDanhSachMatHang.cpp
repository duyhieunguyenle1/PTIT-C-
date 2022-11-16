#include<bits/stdc++.h>
using namespace std;
struct matHang{
    string name,type;
    float buy,sell;
    int id;
};
void nhap(matHang a[],int n){
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        getline(cin,a[i].type);
        cin>>a[i].buy>>a[i].sell;
        a[i].id=i+1;
    }
}
bool cmp(matHang &a,matHang &b){
    return (a.sell-a.buy)>(b.sell-b.buy);
}
void sapxep(matHang a[],int n){
    sort(a,a+n,cmp);
}
void in(matHang a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].type<<" "<<fixed<<setprecision(2)<<a[i].sell-a[i].buy<<endl;
    }
}
int main(){
    int N; 
    cin>>N;
    struct matHang ds[N];
    nhap(ds,N);
    sapxep(ds,N);
    in(ds,N);
    return 0;
}