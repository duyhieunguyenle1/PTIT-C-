#include<iostream>
using namespace std;
int sumCharacter(int n){
    if(n<10&&n>0)return n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sumCharacter(sum);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<sumCharacter(n)<<endl;
    }
    return 0;
}