#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    cin.ignore();
    string title,question;
    char k;
    int i=0;
    again:int cnt=0;
    getline(cin,title);
    i++;
    while(k!='\n'){
        getline(cin,question);
        cnt++;
        k=getchar();
        if(i==n){
            cout<<title<<": "<<cnt;
            return 0;
        }
    }
    if(k=='\n')i++;
    i+=cnt;
    k='0';
    cout<<i;
    cout<<title<<": "<<cnt<<endl;
    if(i<=n)goto again;
    else return 0;
}