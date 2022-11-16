#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while (t>0){
        char a;
        cin>>a;
        if(a>='a'&&a<='z')a+='A'-'a';
        else if(a>='A'&&a<='Z')a+='a'-'A';
        cout<<a<<endl;
        t--;
    } 
    return 0;
}