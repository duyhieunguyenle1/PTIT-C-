#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    cin.ignore();
    vector<int>s1;
    for(int i=0;i<n;i++){
        string hic;
        getline(cin,hic);
        stringstream ss(hic);
        string temp;
        int cnt=0;
        while(ss>>temp)cnt++;
        s1.push_back(cnt);
    }
    int res=0;
    vector<int> s2;
    for(int i=0;i<n;i++){
        if(s1[i]==6){
            while(s1[i]==6)i+=2;
            s2.push_back(1);
            res++; 
            i--;
        }else {
            i+=4;
            s2.push_back(2);
            res++;
            i--;
        }
    }
    cout<<res<<endl;
    for(int i:s2)cout<<i<<endl;
}