#include<bits/stdc++.h>
using namespace std;
//gọi struct trong hàm c++ ko cần gọi struct
//need to pass by reference or pass the address to change its value 
struct Point{
    double x,y;
};
void input(Point &A){
    cin>>A.x>>A.y;
}
double distance(Point A,Point B){
    return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}
int main(){
    struct Point A,B;
    int t; cin>>t;
    while (t--){
        input(A); input(B);
        cout<<fixed<<setprecision(4)<<distance(A,B)<<endl;
    }
    
}