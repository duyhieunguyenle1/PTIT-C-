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
int minPrime(int n){
    for(int i=3;i*i<=n;i++){
        if(primeNumber(i)&&n%i==0)return i;
    }
    return n;
}
int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        cout<<"1 ";
        for(int i=2;i<=n;i++){
            if(i%2==0)cout<<"2 ";
            else cout<<minPrime(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}