#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    string tmp=s;
    reverse(s.begin(),s.end());
    return tmp==s;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s,tmp; cin>>s;
        for(int i=0;i<s.size();i++){
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i]+'a'-'A';
            if (s[i] >= 'a' && s[i] <= 'c')
                tmp.push_back('2');
            if (s[i] >= 'd' && s[i] <= 'f')
                tmp.push_back('3');
            if (s[i] >= 'g' && s[i] <= 'i')
                tmp.push_back('4');
            if (s[i] >= 'j' && s[i] <= 'l')
                tmp.push_back('5');
            if (s[i] >= 'm' && s[i] <= 'o')
                tmp.push_back('6');
            if (s[i] >= 'p' && s[i] <= 's')
                tmp.push_back('7');
            if (s[i] >= 't' && s[i] <= 'v')
                tmp.push_back('8');
            if (s[i] >= 'w' && s[i] <= 'z')
                tmp.push_back('9');
        }
        if(palindrome(tmp))cout<<"YES\n";
        else cout<<"NO\n";
    }
}