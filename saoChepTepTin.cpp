#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    ifstream fp1;
    ofstream fp2;
    fp1.open("PTIT.in");
    fp2.open("PTIT.out");
    while(!fp1.eof()){
        getline(fp1,s);
        fp2<<s<<endl;
    }
    fp2.close();
    fp1.close();
    return 0;
}