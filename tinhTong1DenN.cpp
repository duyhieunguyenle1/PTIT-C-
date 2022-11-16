#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t>0){
        int n;
        cin>>n;
        long long temp=n*(n+1)/2;
        cout<<temp<<endl;
        t--;
    }
    return 0;
}