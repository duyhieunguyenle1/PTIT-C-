#include<iostream>
using namespace std;
int a[100], n,stop;
void print(){
    for(int i=1;i<=n;i++)cout<<a[i];
    cout<<" ";
}
void sinh(){
    int i=n;
    while(i>=1&&a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0)stop=1;
    else a[i]=1;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        stop=0;
        for(int i=1;i<=n;i++)a[i]=0;
        while(!stop){
            print();
            sinh();
        }
        cout<<endl;
    }
    return 0;
}