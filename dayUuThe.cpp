#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        char check=' ';
        int odd=0,even=0,count=0;
        while(check!='\n'){
            int n; cin>>n;
            count++;
            if(n%2==0)even++;
            else odd++;
            check=getchar();
        }
        if((count%2==0&&odd<even)||(count%2!=0&&even<odd))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}