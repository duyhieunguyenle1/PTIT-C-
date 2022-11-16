#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int l,int r,int x){
    if (l<=r) {
        int mid = (l+r)/ 2;
        if(a[mid] == x)return mid+1;
        if(a[mid] > x)return binarySearch(a, l, mid - 1, x);
        return binarySearch(a, mid + 1, r, x);
    }
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];
        int index=-1;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            // xem mảng tăng đến đâu
            if (a[i] - a[i - 1] < 0)
                index = i;
        }
        // xét các đoạn tăng dần
        if (x > a[index])
            cout << binarySearch(a, index, n, x) << endl;
        else
            cout << binarySearch(a, 0, index, x) << endl;
    }
    return 0;
}