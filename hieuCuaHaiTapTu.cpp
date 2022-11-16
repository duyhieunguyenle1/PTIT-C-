#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        string temp1,temp2;
        vector<string>v1;
        vector<string>v2;
        stringstream ss1(s1);
        while(ss1>>temp1){
            v1.push_back(temp1);
        }
        stringstream ss2(s2);
        while(ss2>>temp2){
            v2.push_back(temp2);
        }
        set<string>hic;
        int len1=v1.size(),len2=v2.size();
        for(int i=0;i<len1;i++){
            int check=0;
            for(int j=0;j<len2;j++){
                if(v1[i]==v2[j]){
                    check=1;
                    break;
                }
            }
            if(check==0)hic.insert(v1[i]);
        }
        for(auto i:hic)cout<<i<<" ";
        cout<<endl;
    }
}