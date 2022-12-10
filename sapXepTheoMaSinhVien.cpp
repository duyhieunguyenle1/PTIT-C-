#include<bits/stdc++.h>
using namespace std;
class sv{
	string masv,name,lop,email;
	public:
		friend istream& operator>>(istream&,sv&);
		friend ostream& operator<<(ostream&,sv);
		string getID(){
			return this->masv;
		}
};
bool cmp(sv a,sv b){
	string a1=a.getID(),b1=b.getID();
	return a1<b1;
}
istream& operator>>(istream& in,sv &a){
	in>>a.masv;
	in.ignore();
	getline(in,a.name);
	in>>a.lop>>a.email;
	return in;
}
ostream& operator<<(ostream& out,sv a){
	return out<<a.masv<<" "<<a.name<<" "<<a.lop<<" "<<a.email<<endl;
}
int main(){
	vector<sv>v;
	sv tmp;
	while(cin>>tmp){
		v.push_back(tmp);
	}
	sort(v.begin(),v.end(),cmp);
	for(sv x:v)cout<<x;
}

