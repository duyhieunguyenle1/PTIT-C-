#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        vector <string> tmp;
        string name; getline(cin,name);
        string x;
        stringstream ss(name);
        while(ss>>x){
            tmp.push_back(x);
        }
        cout<<tmp.size()<<endl;
    }
    return 0;
}