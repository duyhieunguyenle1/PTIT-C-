#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    set<string>s;
    ifstream f("CONTACT.in");
    while(!f.eof()){
        f>>a;
        for(int i=0;i<a.size();i++)a[i]=tolower(a[i]);
        s.insert(a);
    }
    for(auto x:s)cout<<x<<endl;
    f.close();
    return 0;
}