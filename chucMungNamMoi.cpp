#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    cin.ignore();
    set <string> chuc;
    for(int i=0;i<n;i++){
        string x; 
        getline(cin,x);
        chuc.insert(x);
    }
    cout<<chuc.size()<<endl;
}