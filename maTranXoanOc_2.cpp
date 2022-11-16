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
		int c[n*m];
		int c1=0,h1=0,c2=m-1,h2=n-1,cnt=0;
		while(c1<=c2&&h1<=h2){
			for(int i=c1;i<=c2;i++){
				if(cnt==n*m)goto end;
				c[cnt]=a[h1][i];
				cnt++;
			}
			h1++;
			for(int i=h1;i<=h2;i++){
				if(cnt==n*m)goto end;
				c[cnt]=a[i][c2];
				cnt++;
			}
			c2--;
			for(int i=c2;i>=c1;i--){
				if(cnt==n*m)goto end;
				c[cnt]=a[h2][i];
				cnt++;
			}
			h2--;
			for(int i=h2;i>=h1;i--){
				if(cnt==n*m)goto end;
				c[cnt]=a[i][c1];
				cnt++;
			}
			c1++;
		}
		end:for(int i=cnt-1;i>=0;i--)cout<<c[i]<<" ";
		cout<<endl;
	}
	return 0;
}