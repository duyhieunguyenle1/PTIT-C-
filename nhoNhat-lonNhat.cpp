#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,s; cin>>m>>s;
    int max[m]={0};
    int s1=s,s2=s;
    if(s>9*m||s==0){
        cout<<"-1 -1";
        return 0;
    }
    for(int i=0;i<m;i++){
         if(s1>=9){
            max[i]=9;
            s1-=9;
        }else{
            max[i]=s1;
            s1-=s1;
        }
    }
    int min[m]={0};
    for(int i=m-1;i>=0;i--){
        if(s2>=9){
            min[i]=9;
            s2-=9;
        }else if(s2>1&&i!=0){
            int tmp=s2-1;
            min[i]=tmp;
            s2-=tmp;
        }else if(s2>1&&i==0){
            min[i]=s2;
            s2-=s2;
        }else if(s2==1){
            min[0]=1;
        }
    }
    for(int i=0;i<m;i++)cout<<min[i];
    cout<<" ";
    for(int i=0;i<m;i++)cout<<max[i];
}