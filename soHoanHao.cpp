#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
bool isPrime(int n){
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
        ll n; cin>>n;
        int check=0;
        for(int i=2;i<20;i++){
            if(isPrime(pow(2,i)-1)){
                if(pow(2,2*i)-pow(2,i)==2*n){
                    cout<<"1\n";
                    check=1;
                    break;
                }
            }
        }
        if(!check)cout<<"0\n";
    }
    return 0;
}
// so hoan hao euclid