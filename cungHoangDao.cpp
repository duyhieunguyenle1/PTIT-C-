#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int ngay,thang;
        cin>>ngay>>thang;
        long long temp=ngay+thang*30;
        if(temp>=50&&temp<=78)cout<<"Bao Binh\n";
        else if(temp>=79&&temp<=110)cout<<"Song Ngu\n";
        else if(temp>=111&&temp<=139)cout<<"Bach Duong\n";
        else if(temp>=140&&temp<=170)cout<<"Kim Nguu\n";
        else if(temp>=141&&temp<=200)cout<<"Song Tu\n";
        else if(temp>=201&&temp<=232)cout<<"Cu Giai\n";
        else if(temp>=233&&temp<=262)cout<<"Su Tu\n";
        else if(temp>=263&&temp<=292)cout<<"Xu Nu\n";
        else if(temp>=293&&temp<=322)cout<<"Thien Binh\n";
        else if(temp>=323&&temp<=352)cout<<"Thien Yet\n";
        else if(temp>=353&&temp<=381)cout<<"Nhan Ma\n";
        else cout<<"Ma Ket\n";
    }
}