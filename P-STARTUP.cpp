#include<bits/stdc++.h>
using namespace std;
struct post{
    int id,share,interact;
};
bool cmp(post &a,post &b){
    return (a.share*7+a.interact*3)>(b.share*7+b.interact*3);
}
int main(){
    int n; cin>>n;
    struct post a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].id>>a[i].share>>a[i].interact;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<7;i++)cout<<a[i].id<<" ";
}