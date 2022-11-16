#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while (t>0){
        int n; cin>>n;
        int temp1=n%10;
        n/=10;
        int temp2=n%10;
        if(temp1==6&&temp2==8)cout<<1<<endl;
        else cout<<0<<endl;
        t--;
    }
    return 0;
}