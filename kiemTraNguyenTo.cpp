#include<iostream>
using namespace std;
int primeNumber(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int n; cin>>n;
    if(primeNumber(n))cout<<"YES";
    else cout<<"NO";
    return 0;
}