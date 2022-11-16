#include<iostream>
using namespace std;
int soLocPhat(int n){
    while(n>1){
        int temp=n%10;
        if(temp!=6&&temp!=0&&temp!=8){
            return 0;
        }
        n/=10;
    }
    return 1;
}
int main(){
    int t; cin>>t;
    while(t>0){
        int n; cin>>n;
        if(!soLocPhat(n))cout<<"NO\n";
        else cout<<"YES\n";
        t--;
    }
}