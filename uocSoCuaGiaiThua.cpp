#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t>0){
        int n,p; cin>>n>>p;
        int i=1,count=0;
        while(pow(p,i)<=n){
            count+=n/pow(p,i);
            i++;
        }
        cout<<count<<endl;
        t--;
    }
}
// cong thuc legendre