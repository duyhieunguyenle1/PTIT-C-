#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    double a[n];
    double k,max=0,min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    multiset<double>s;
    for(int i=0;i<n;i++){
        if(a[i]!=max&&a[i]!=min)s.insert(a[i]);
    }
    double res=0;
    for(auto x:s){
        res+=x;
    }
    cout<<setprecision(2)<<fixed<<(res/s.size())<<endl;
}