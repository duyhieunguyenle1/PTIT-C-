#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
    int odd=0,even=0;
    while(n>0){
        int temp=n%10;
        if(temp & 1)odd++;
        else even++;
        n/=10;
    }
    if(even==odd)return 1;
    return 0;
}
int main(){
    int n; cin>>n;
    if(n%2!=0)return 0;
    int a=pow(10,n-1),b=pow(10,n),count=0;
    for(int i=a;i<b;i++){
        if(check(i)){
            cout<<i<<" ";
            count++;
        }
        if(count==10){
            cout<<endl;
            count=0;
        }
    }
    return 0;
}