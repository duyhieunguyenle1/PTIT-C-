#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        // tìm số ptu nhỏ hơn k
        // sau đó tìm số ptu nhỏ hơn k trong cửa sổ có ptu = k
        // rồi ta dùng two-pointer technique (giảm dần từ 2 bên) để tìm cửa sổ
        // chứa nhiều số ptu nhỏ hơn k nhất rồi đếm số ptu lớn hơn k khi đó
        // chính là kết quả
        int n,k; cin>>n>>k;
        int a[n],temp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=k)temp++;
        }
        int cnt=0;
        for(int i=0;i<temp;i++){
            if(a[i]>k)cnt++;
        }
        int ans=cnt;
        for(int i=temp;i<n;i++){
            // a[i-temp] để xét phần tử đầu trong cửa sổ
            if(a[i-temp]>k)--cnt;
            if(a[i]>k)cnt++;
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}