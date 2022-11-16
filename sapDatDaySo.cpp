#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll a[n];
        multiset<int> mset;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mset.insert(a[i]);
        }
        for (int i = 0; i < n; i++){
            if (mset.find(i) != mset.end())cout << i << " ";
            else cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}