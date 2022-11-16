#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name,birth;
    float g1,g2,g3,sum;
};
void nhap(ThiSinh &A){
    getline(cin,A.name);
    getline(cin,A.birth);
    cin>>A.g1>>A.g2>>A.g3;
}
void in(ThiSinh A){
    A.sum=A.g1+A.g2+A.g3;
    cout<<A.name<<" "<<A.birth<<" "<<fixed<<setprecision(1)<<A.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}