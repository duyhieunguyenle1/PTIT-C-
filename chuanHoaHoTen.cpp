#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)s[i]=tolower(s[i]);
}
void upperCase(string &s){
    for(int i=0;i<s.size();i++)s[i]=toupper(s[i]);
}
int main(){
    vector <string> temp;
    string name; getline(cin,name);
    string x;
    stringstream ss(name);
    while (ss>>x){
        temp.push_back(x);
    }
    int len=temp.size();
    for(int i=0;i<len-1;i++){
        chuanHoa(temp[i]);
        if(i==len-2)break;
        cout<<temp[i]<<" ";
    }
    upperCase(temp[len-1]);
    cout<<temp[len-2]<<", "<<temp[len-1];
    return 0;
}