#include<iostream>
using namespace std;
// sqrt(n)/6
bool prime(int n){
    if(n<=3)return n>1;
    else if(n%2==0||n%3==0)return false;
    int i=5;
    while(i*i<=n){
        if(n%i==0||n%(i+2)==0)return false;
        i+=6;
    }
    return true;
}
int main(){
    int t; cin>>t;
    while (t--){
        int a,b; cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(prime(i))cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}