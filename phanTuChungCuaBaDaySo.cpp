#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n1,n2,n3; cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        map<int,int>m1,m2,m3;
        for(int i=0;i<n1;i++){
            cin>>a[i];
            m1[a[i]]++;
        }
        for(int i=0;i<n2;i++) {
            cin>>b[i];
            m2[b[i]]++;
        }
        for(int i=0;i<n3;i++){
            cin>>c[i];
            m3[c[i]]++;
        }
        vector<int>v;
        int check=0;
        for(int i=0;i<n1;i++){
            if(m1[a[i]]&&m2[a[i]]&&m3[a[i]]){
                v.push_back(a[i]);
                check=1;
            }
        }
        if(check)for(auto x:v)cout<<x<<" ";
        else cout<<"-1";
        cout<<endl;
    }
    return 0;
}