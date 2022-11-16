#include<bits/stdc++.h>
using namespace std;
// kiểm tra số cuối nếu mod 5 = 0 thì chia hết cho 5
int main(){
    int t; cin>>t;
    while (t--){
        string n; cin>>n;
        int len=n.size();
        int r=0;
        for(int i=0;i<len;i++){
            if(n[i]=='1'){
                r=(2*r+1)%5;
            }
            else r=(2*r)%5;
        }
        if(r==0)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}