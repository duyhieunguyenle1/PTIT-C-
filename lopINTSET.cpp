#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    set<int>s;
    ifstream f("DATA.in");
    while(f>>n>>m){
        int a[n],b[m];
        for(int i=0;i<n;i++)f>>a[i];
        for(int i=0;i<m;i++)f>>b[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j])s.insert(a[i]);
            }
        }
    }
    f.close();
    for(auto x:s)cout<<x<<" ";
}