#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string dr; getline(cin,dr);
        for(int i=0;i<dr.length();i++){
            if(dr[i]!='0'&&dr[i]!='1'&&dr[i]!='2'&&dr[i]!='3'&&dr[i]!='4'&&dr[i]!='5'&&dr[i]!='6'&&dr[i]!='7'&&dr[i]!='8'&&dr[i]!='9')dr.erase(dr.begin()+i);
        }
        if(dr[0]=='+'&&dr[1]=='8'&&dr[2]=='4'){
            dr.erase(0,3);
            dr='0'+dr;
        }
        if(dr[0]=='8'&&dr[1]=='4'){
            dr.erase(0,2);
            dr='0'+dr;
        }
        cout<<dr<<endl;
    }
}