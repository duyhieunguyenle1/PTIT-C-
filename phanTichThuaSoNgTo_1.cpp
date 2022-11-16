#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        for(int i=2;i*i<=n;i++){ 
			int count =0; 
			while(n%i==0){ 
				n/=i; 
				count++; 
			} 
			if(count>=1)cout<<i<<" "<<count<<" "; 
		}
        // Mot so truong hop sau khi tach ra so ngto se con thua
        // so nguyen to chinh no nen neu con thua thi in ra
        if(n != 1){ 
            cout << n << " 1"; 
        } 
        cout<<"\n";
    }
    return 0;
}