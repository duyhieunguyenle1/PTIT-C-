#include<bits/stdc++.h>
using namespace std;
string s;
int solve(int k){
	int cnt=0;
	for(int i=0;i<s.size();i++){
		int n=0;
		for(int j=i;j<s.size();j++){
			n=n*10+(s[j]-'0');
			n%=k;
			if(n==0)cnt++;
		}
	}
	return cnt;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		cout<<solve(8)-solve(24)<<endl;
	}
}
