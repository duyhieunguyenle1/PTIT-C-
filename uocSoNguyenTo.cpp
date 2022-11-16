#include<iostream>
using namespace std;
int main(){
    long long t; cin>>t;
    while (t--){
        long long n; cin>>n;
        // tim so chia het cho 2 trc
        while(n%2==0){
            n/=2;
            cout<<2<<" ";
        }
        // ko can ++ vi ham tren da check chia het cho 2
        for(long long i=3;i*i<=n;i+=2){ 
			while(n%i==0){ 
				n/=i; 
                cout<<i<<" ";
			} 
		}
        if(n!=1)cout<<n; 
        cout<<"\n";
    }
    return 0;
}