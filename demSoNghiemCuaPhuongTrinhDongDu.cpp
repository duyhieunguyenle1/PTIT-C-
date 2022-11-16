#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long b,p; cin>>b>>p;
        int cnt=0;
        for(long long i=1;i<=p;i++){
            if((i*i)%p==1){
                long long x=i+(b/p)*p;
                if(x>b)x-=p;
                cnt+=((x-i)/p+1);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}