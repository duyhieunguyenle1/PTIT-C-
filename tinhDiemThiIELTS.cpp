#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int r,l; cin>>r>>l;
        float r1,l1,s,w; cin>>s>>w;
        if(r>=3&&r<=4)r1=2.5;
        else if(r>=5&&r<=6)r1=3.0;
        else if(r>=7&&r<=9)r1=3.5;
        else if(r>=10&&r<=12)r1=4.0;
        else if(r>=13&&r<=15)r1=4.5;
        else if(r>=16&&r<=19)r1=5.0;
        else if(r>=20&&r<=22)r1=5.5;
        else if(r>=23&&r<=26)r1=6.0;
        else if(r>=27&&r<=29)r1=6.5;
        else if(r>=30&&r<=32)r1=7.0;
        else if(r>=33&&r<=34)r1=7.5;
        else if(r>=35&&r<=36)r1=8.0;
        else if(r>=37&&r<=38)r1=8.5;
        else if(r>=39&&r<=40)r1=9.0;
        if(l>=3&&l<=4)l1=2.5;
        else if(l>=5&&l<=6)l1=3.0;
        else if(l>=7&&l<=9)l1=3.5;
        else if(l>=10&&l<=12)l1=4.0;
        else if(l>=13&&l<=15)l1=4.5;
        else if(l>=16&&l<=19)l1=5.0;
        else if(l>=20&&l<=22)l1=5.5;
        else if(l>=23&&l<=26)l1=6.0;
        else if(l>=27&&l<=29)l1=6.5;
        else if(l>=30&&l<=32)l1=7.0;
        else if(l>=33&&l<=34)l1=7.5;
        else if(l>=35&&l<=36)l1=8.0;
        else if(l>=37&&l<=38)l1=8.5;
        else if(l>=39&&l<=40)l1=9.0;
        float overall=float((l1+r1+w+s)/4);
        if(overall>=0.25&&overall<=0.5)overall=0.5;
        else if(overall>0.5&&overall<1.25)overall=1.0;
        else if(overall>=1.25&&overall<=1.75)overall=1.5;
        else if(overall>1.5&&overall<2.25)overall=2.0;
        else if(overall>=2.25&&overall<=2.75)overall=2.5;
        else if(overall>2.5&&overall<3.25)overall=3.0;
        else if(overall>=3.25&&overall<=3.75)overall=3.5;
        else if(overall>3.5&&overall<4.25)overall=4.0;
        else if(overall>=4.25&&overall<=4.75)overall=4.5;
        else if(overall>4.5&&overall<5.25)overall=5.0;
        else if(overall>=5.25&&overall<=5.75)overall=5.5;
        else if(overall>5.5&&overall<6.25)overall=6.0;
        else if(overall>=6.25&&overall<=6.75)overall=6.5;
        else if(overall>6.5&&overall<7.25)overall=7.0;
        else if(overall>=7.25&&overall<=7.75)overall=7.5;
        else if(overall>7.5&&overall<8.25)overall=8.0;
        else if(overall>=8.25&&overall<=8.75)overall=8.5;
        else if(overall>8.5&&overall<=9.0)overall=9.0;
        cout<<fixed<<setprecision(1)<<overall<<endl;
    }
    return 0;
}