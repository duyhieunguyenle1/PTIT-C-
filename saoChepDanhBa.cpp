#include <bits/stdc++.h>
using namespace std;

int checkdate(string s){
    for (int i = 0; i < s.size(); i++)if(s[i] == '/')return 1;
    return 0;
}

struct data{
    string date, name, so;
    void setDate(string x){
        string s;
        for(int i = 0; i < x.size(); i++){
            if((x[i] >= '0' && x[i] <= '9') || x[i] == '/')s.push_back(x[i]);
        }
        date = s;
    }
    void setname(string x){
        name = x;
    }
    void setPhone(string x){
        so = x;
    }
    void out(){
        cout << name << ": " << so << " " << date << "\n";
    }
    string getname(){
        return name;
    }
};

bool cmp(data a, data b){
    string x = a.getname(), y = b.getname();
    vector<string> xx, yy;
    string u;
    for (int i = 0; i < x.size(); i++){
        if(x[i] != ' ')
            u.push_back(x[i]);
        else{
            xx.push_back(u);
            u.clear();
        }
    }
    xx.push_back(u);
    u.clear();
    for(int i = 0; i < y.size(); i++){
        if (y[i] != ' ')
            u.push_back(y[i]);
        else{
            yy.push_back(u);
            u.clear();
        }
    }
    yy.push_back(u);
    u.clear();
    if (xx[xx.size() - 1] == yy[yy.size() - 1]){
        return xx < yy;
    }
    return xx[xx.size() - 1] < yy[yy.size() - 1];
}
int main(){
    freopen("SOTAY.txt", "r", stdin);
    freopen("DIENTHOAI.txt", "w", stdout);
    int dem = 1;
    string s, date;
    data a;
    vector<data> l;
    while (getline(cin, s)){
        if (checkdate(s) == 1){
            date = s;
        }
        else{
            if (dem == 1)
            {
                a.setname(s);
                a.setDate(date);
            }
            else
            {
                a.setPhone(s);
                a.setDate(date);
            }
            dem++;
        }
        if (dem > 2){
            l.push_back(a);
            dem = 1;
        }
    }
    sort(l.begin(), l.end(), cmp);
    for (int i = 0; i < l.size(); i++)l[i].out();
    return 0;
}