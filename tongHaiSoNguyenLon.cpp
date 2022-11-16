#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++; r--;
    }
}
// coi a nhieu chu so hon b
void cong(string a,string b){
    int str1=a.size(),str2=b.size(),n=0;
    int x[str1],y[str1],z[str1+1];
    for(int i=0;i<str1;i++)x[i]=a[i]-'0';
    for(int i=0;i<str2;i++)y[i]=b[i]-'0';
    swap(x,str1); swap(y,str2);
    for(int i=str2;i<str1;i++){
        y[i]=0;
    }
    int nho=0;
    for(int i=0;i<str1;i++){
        int temp=x[i]+y[i]+nho;
        z[n++]=temp%10;
        nho=temp/10;
    }
    if(nho)z[n++]=nho;
    for(int i=n-1;i>=0;i--)cout<<z[i];
}
int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        if(a.size()>=b.size())cong(a,b);
        else cong(b,a);
        cout<<endl;
    }
}