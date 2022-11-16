#include<bits/stdc++.h>
using namespace std;
int idCnt=1;
class SinhVien{
    int id;
    string name,lop,birth;
    float gpa;
    public:
        friend ostream& operator<<(ostream&,SinhVien);
        friend istream& operator>>(istream&,SinhVien&);
};
ostream& operator<<(ostream& out,SinhVien a){
    if(a.birth[1]=='/')a.birth.insert(a.birth.begin(),'0');
    if(a.birth[4]=='/')a.birth.insert(a.birth.begin()+3,'0');
    out<<"B20DCCN"<<setw(3)<<setfill('0')<<a.id<<" "<<a.name<<" "<<a.lop<<" "<<a.birth<<" "
    <<setprecision(2)<<fixed<<a.gpa<<endl;
    return out;
}
istream& operator>>(istream& in,SinhVien &a){
    in.ignore();
    getline(in,a.name);
    getline(in,a.lop);
    getline(in,a.birth);
    in>>a.gpa;
    a.id=idCnt++;
    return in;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}