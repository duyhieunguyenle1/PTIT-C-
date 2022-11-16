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
        a[i].id=i+1;
    }
}
void chuanHoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)s[i]=tolower(s[i]);
}
string chuanHoaHoTen(SinhVien a){
    vector <string> temp;
    string x;
    stringstream ss(a.name);
    while (ss>>x){
        temp.push_back(x);
    }
    int len=temp.size();
    string name;
    for(int i=0;i<len;i++){
        if(i==len-1){
            chuanHoa(temp[i]);
            name += temp[i]; 
        } else{ 
            chuanHoa(temp[i]); 
            name += temp[i] + " "; 
        }
    }
    return name;
}
bool cmp(SinhVien &a,SinhVien &b){
    return a.gpa>b.gpa;
}
void sapxep(SinhVien a[],int n){
    sort(a,a+n,cmp);
}
void in(SinhVien a[],int n){
    sapxep(a,n);
    for(int i=0;i<n;i++){
        cout<<"B20DCCN"<<setw(3)<<right<<setfill('0')<<a[i].id<<" "
        <<chuanHoaHoTen(a[i])<<" "<<a[i].class1<<" "<<a[i].birth<<" "
        <<fixed<<setprecision(2)<<a[i].gpa<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N; 
    cin>>N;
    nhap(ds,N);
    sapxep(ds,N);
    in(ds,N);
    return 0;
}