#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int t; cin>>t;
    while (t--){
        double xA,yA,xB,yB; cin>>xA>>yA>>xB>>yB;
        double res=sqrt(((xA-xB)*(xA-xB))+((yA-yB)*(yA-yB)));
        cout<<fixed<<setprecision(4)<<res<<endl;
    }
    return 0;
}