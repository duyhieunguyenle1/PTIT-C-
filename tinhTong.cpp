#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long sum=0;
    ifstream f("DATA.in");
    if(f.is_open()){
        while(f>>s){
            if(s.size()>=1&&s.size()<=9&&isdigit(s[0]))sum+=stoi(s);
        }
    }
    cout<<sum;
    f.close();
    return 0;
}