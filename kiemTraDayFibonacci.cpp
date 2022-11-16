#include<iostream>
#include<cmath>
using namespace std;
int checkFibonacci(int n){
	int a=5*n*n +4,
		b=5*n*n -4;
	float A=sqrt(a),
		  B=sqrt(b);
	if((A==(int)A)||(B==(int)B)) return 1;
	return 0;
}
int main(){
	int t; cin>>t;
	while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            if(checkFibonacci(a[i]))cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}