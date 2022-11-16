#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
        int count=0,i=1;
		// xet trong khoang i -> can n
		while (i<=n/i){ 
		// ktra uoc
			if(n%i==0){ 
				// ktra so chan
				if (i%2==0) count++; 
				// ktra so chan doi xung qua can 
				if (n/i%2==0) count++; 
                // truong hop la binh phuong thi tru 1
				if (n/i==i && i%2==0) count--; 
			} 
			i++; 
		}
		cout<<count<<endl;
	}
	return 0;
}