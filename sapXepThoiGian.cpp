#include<bits/stdc++.h>
using namespace std;
struct time{
    int hour,minute,second;
};
typedef struct time tg;
void input(tg &a){
    cin>>a.hour>>a.minute>>a.second;
}
bool cmp(tg a,tg b){
    if(a.hour!=b.hour)return a.hour<b.hour;
    if(a.minute!=b.minute)return a.minute<b.minute;
    return a.second<b.second;
}
void sapxep(tg a[],int n){
    sort(a,a+n,cmp);
}
void print(tg a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i].hour<<" "<<a[i].minute<<" "<<a[i].second<<endl;
    }
}
int main(){
    int n; cin>>n;
    tg a[n];
    for(int i=0;i<n;i++)input(a[i]);
    sapxep(a,n);
    print(a,n);
}