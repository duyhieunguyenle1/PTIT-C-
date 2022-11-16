#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        int array[1000000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            array[a[i]]++;
        }
        int check=0;
        for(int i=0;i<n;i++){
            if(array[a[i]]>1){
                check=1;
                cout<<a[i]<<endl;
                break;
            }
        }
        if(check==0)cout<<"NO\n";
        // delete[] array;
    }
    return 0;
}