#include<bits/stdc++.h>
using namespace std;
int main(){
    char de101[]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'},
        de102[]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    int t; cin>>t;
    while(t--){
        int maDe; cin>>maDe;
        char kt[20];
        double grade=0;
        for(int i=0;i<15;i++){
            cin>>kt[i];
        }
        if(maDe==101){
            for(int i=0;i<15;i++){
                if(kt[i]==de101[i]){
                    grade+=(double)10/15;
                }
            }
        }else if(maDe==102){
            for(int i=0;i<15;i++){
                if(kt[i]==de102[i]){
                    grade+=(double)10/15;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<grade<<endl;
    }
}