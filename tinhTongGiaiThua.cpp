#include<iostream>
using namespace std;
long long giaiThua(long long n){
    long long temp=1;
    for(long long i=1;i<=n;i++){
        temp*=i;
    }
    return temp;
}
int main(){
    long long n; cin>>n;
    long long sum=0;
    for(long long i=1;i<=n;i++){
        sum+=giaiThua(i);
    }
    cout<<sum;
    return 0;
}