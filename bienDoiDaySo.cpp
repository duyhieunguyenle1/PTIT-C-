#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        // sử dụng two pointer technique để xét 2 ptu từ đầu và cuối
        // nếu 2 ptu = nhau thì bỏ qua
        // nếu 1 trong 2 cái lớn hơn thì sẽ tăng lên và + ptu trc đó lại
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0,r=n-1,cnt=0;
        while(l<=r){
            if(a[l]==a[r]){
                l++;
                r--;
            }else if(a[l]<a[r]){
                l++;
                a[l]+=a[l-1];
                cnt++;
            }else {
                r--;
                a[r]+=a[r+1];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}