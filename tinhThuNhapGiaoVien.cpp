#include<bits/stdc++.h>
using namespace std;
struct giaovien{
    string level,name;
    int heso,luong;
    long long salary;
};
typedef struct giaovien gv;
long long income(gv a){
    long long sum=0;
    a.heso=(a.level[3]-'0')+(a.level[2]-'0')*10;
    if(a.level[0]=='H'&&a.level[1]=='T'){
        sum+=2000000;
        a.luong=2000000;
    }
    if(a.level[0]=='H'&&a.level[1]=='P'){
        sum+=900000;
        a.luong=900000;
    }
    if(a.level[0]=='G'&&a.level[1]=='V'){
        sum+=500000;
        a.luong=500000;
    }
    sum=sum+(a.heso*a.salary);
    return sum;
}
int he(gv a){
    int temp;
    temp=(a.level[3]-'0')+(a.level[2]-'0')*10;
    return temp;
}
int thunhap(gv a){
    if(a.level[0]=='H'&&a.level[1]=='T'){
        a.luong=2000000;
    }
    if(a.level[0]=='H'&&a.level[1]=='P'){
        a.luong=900000;
    }
    if(a.level[0]=='G'&&a.level[1]=='V'){
        a.luong=500000;
    }
    return a.luong;
}
void print(gv a){
    cout<<a.level<<" "<<a.name<<" "<<he(a)<<" "<<
    thunhap(a)<<" "<<income(a);
}
int main(){
    gv a;
    cin>>a.level;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.salary;
    print(a);
    return 0;
}