#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    map <string, ll> mp;
    string bien,type,ghe,vao,date;
    int t;
    cin >> t;
    while(t--){
        cin>>bien>>type>>ghe>>vao>>date;
        if (vao == "IN"){
            if (type == "Xe_con" && ghe == "5")
                mp[date] += 10000;
                
            else if (type == "Xe_con" && ghe == "7")
                mp[date] += 15000;
                
            else if (type == "Xe_tai" && ghe == "2")
                mp[date] += 20000;
                
            else if (type == "Xe_khach" && ghe == "29")
                mp[date] += 50000;
                
            else if (type == "Xe_khach" && ghe == "45")
                mp[date] += 70000;
        }
    }
    for (auto it : mp){
        cout << it.first << ": " << it.second << endl;
    }
    return 0;
}