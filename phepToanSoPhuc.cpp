#include<bits/stdc++.h>
using namespace std;
struct SoPhuc{
    int thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    return {pow((a.thuc+b.thuc),2)-pow((a.ao+b.ao),2),2*(a.thuc+b.thuc)*(a.ao+b.ao)};
}
void hien_thi(SoPhuc a){
    cout<<a.thuc<<" + "<<a.ao<<"i\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}