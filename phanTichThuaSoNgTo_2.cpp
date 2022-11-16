#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=2;i*i<=n;i++){ 
		int count =0; 
		while(n%i==0){ 
			n/=i; 
			count++; 
		} 
		if(count>=1)cout<<i<<" "<<count<<"\n"; 
	}
    if(n != 1){ 
        cout << n << " 1"; 
    } 
    return 0;
}