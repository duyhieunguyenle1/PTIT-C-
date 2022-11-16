#include<bits/stdc++.h>
using namespace std;
int ktra(int a[],int l,int r){
    int anchor;
    for(int i=l;i<=r;i++){
        if(a[i]>a[i+1]){
            anchor=i;
            break;
        }
    }
    for(int i=anchor;i<r;i++){
        if(a[i]<a[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int l,r; cin>>l>>r;
		if(ktra(a,l,r))cout<<"Yes\n";
        else cout<<"No\n";
	}
	return 0;
}