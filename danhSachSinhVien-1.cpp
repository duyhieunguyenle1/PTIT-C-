#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,class1,birth;
    float gpa;
    int id;
};
void nhap(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].class1>>a[i].birth>>a[i].gpa;
        if(a[i].birth[1]=='/'){ 
            a[i].birth.insert(0,"0");
        } 
        if(a[i].birth[4]=='/'){ 
            a[i].birth.insert(3, "0"); 
        } 
    }
}
void in(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        a[i].id=i+1;
        cout<<"B20DCCN"<<setw(3)<<right<<setfill('0')<<a[i].id<<" "
        <<a[i].name<<" "<<a[i].class1<<" "<<a[i].birth<<" "
        <<fixed<<setprecision(2)<<a[i].gpa<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N; 
    cin>>N;
    nhap(ds,N);
    in(ds,N);
    return 0;
}