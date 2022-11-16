#include<iostream>
using namespace std;
bool primeNumber(int n){
    if(n<=3)return n>1;
    if(n%2==0||n%3==0)return false;
    int i=5;
    while(i*i<=n){
        if(n%i==0||n%(i+2)==0)return false;
        i+=6;
    }
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        int cnt=0;
        for(int i=l;i<=r;i++){
            if(primeNumber(i))cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}