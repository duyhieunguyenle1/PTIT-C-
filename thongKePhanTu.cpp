#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> s;
    int a[10000]={0};
    char check=' ';
    while(check!='\n'){
        int n;
        cin>>n;
        s.push_back(n);
        a[n]++;
        check=getchar();
    }
    for(int x:s){
        if(a[x]>0){
            cout<<x<<" "<<a[x]<<endl;
            a[x]=0;
        }
    }
    return 0;
}