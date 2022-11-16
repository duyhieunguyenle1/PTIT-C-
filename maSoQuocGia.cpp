#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string code; cin>>code;
        int vitri=code.find("084");
        code.erase(code.begin()+vitri,code.begin()+vitri+3);
        cout<<code<<endl;
    }
    return 0;
}