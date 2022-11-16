#include<bits/stdc++.h>
using namespace std;
int soTang(int n){
    int temp=n%10;
    n/=10;
    while(n>0){
        if(temp<=(n%10))return 0;
        temp=n%10;
        n/=10;
    }
    return 1;
}
int soGiam(int n){
    int temp=n%10;
    n/=10;
    while(n>0){
        if(temp>=(n%10))return 0;
        temp=n%10;
        n/=10;
    }
    return 1;
}
int primeNumber(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a=pow(10,n-1),b=pow(10,n),
        cnt=0;
        for(int i=a;i<b;i++){
            if(soGiam(i)||soTang(i)){
                if(primeNumber(i))cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}