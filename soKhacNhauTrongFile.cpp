#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<int,int>mp;
    ifstream f("DATA.in");
    while(f>>n){
        mp[n]++;
    }
    f.close();
    for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
}