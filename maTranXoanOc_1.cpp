#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int dem = 0;
		int d=0;
		int x=n-1;
		int y=m-1;
		while(d<=n/2){
		for(int i=d;i<=y;i++){
            if(dem==m*n)goto end;
			cout<<a[d][i]<<" ";
			dem++;
		}
		for(int i=d+1;i<=x;i++){
            if(dem==m*n)goto end;
			cout<<a[i][y]<<" ";
			dem++;
		}
		for(int i=y-1;i>=d;i--) {
            if(dem==m*n)goto end;
			cout<<a[x][i]<<" ";
			dem++;
		}
		for(int i=x-1;i>d;i--){
            if(dem==m*n)goto end;
			cout<<a[i][d]<<" ";
			dem++;
		}
		d++;x--;y--;
		}
		end:cout<<endl;
	}
	return 0;
}