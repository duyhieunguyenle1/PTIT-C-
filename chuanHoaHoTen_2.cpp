#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)s[i]=tolower(s[i]);
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        int n; cin>>n;
        cin.ignore();
        if(n==1){
            vector <string> temp;
            string name; getline(cin,name);
            string x;
            stringstream ss(name);
            while (ss>>x){
                temp.push_back(x);
            }
            int len=temp.size();
            chuanHoa(temp[len-1]);
            cout<<temp[len-1]<<" ";
            for(int i=0;i<len-1;i++){
                chuanHoa(temp[i]);
                cout<<temp[i]<<" ";
            }
            cout<<endl;
        }
        else if(n==2){
            vector <string> temp;
            string name; getline(cin,name);
            string x;
            stringstream ss(name);
            while (ss>>x){
                temp.push_back(x);
            }
            int len=temp.size();
            for(int i=1;i<len;i++){
                chuanHoa(temp[i]);
                cout<<temp[i]<<" ";
            }
            chuanHoa(temp[0]);
            cout<<temp[0]<<endl;
        }
    }
    return 0;
}