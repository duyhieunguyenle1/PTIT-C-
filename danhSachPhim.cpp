#include <bits/stdc++.h>
using namespace std;

string chuanHoa(int a){
    string End = "";
    while (a){
        End = (char)(a % 10 + '0');
        a /= 10;
    }
    while (End.size() < 3)
        End = '0' + End;
    return End;
}

class type{
public:
    string ma, name;
    static int ID;
    friend istream &operator>>(istream &input, type &obj){
        type::ID++;
        obj.ma = "TL" + chuanHoa((type::ID));
        getline(input, obj.name);
        return input;
    }
};

class movie{
public:
    int eps;
    string ma, name, date, kind, xo;
    static int ID;
    friend istream &operator>>(istream &input, movie &obj){
        movie::ID++;
        obj.ma = "P" + chuanHoa((movie::ID));
        input >> obj.kind;
        input >> obj.date;
        cin.ignore();
        getline(input, obj.name);
        input >> obj.eps;
        return input;
    }
    friend ostream &operator<<(ostream &output, movie &obj){
        cout << obj.ma << " " << obj.kind << " " << obj.date << " " << obj.name << " " << obj.eps << endl;
        return output;
    }
};

int type::ID = 0;
int movie::ID = 0;

bool cmp(movie a, movie b){
    int check[10] = {6, 7, 8, 9, 3, 4, 1, 2};
    for (int i = 0; i < 8; i++){
        if(a.date[check[i]] < b.date[check[i]])return 1;
        if(a.date[check[i]] > b.date[check[i]])return 0;
    }
    if (a.name < b.name)return 1;
    if (a.name > b.name)return 0;
    if (a.eps > b.eps)return 1;
    return 0;
}

void process(type tl[], int n, movie p[], int m){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if ((tl + j)->ma == (p + i)->kind){
                (p + i)->kind = (tl + j)->name;
            }
        }
    }
    sort(p, p + m, cmp);
}

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    type t[100];
    movie p[1000];
    for (int i = 0; i < n; i++){
        cin >> t[i];
    }
    for (int i = 0; i < m; i++){
        cin >> p[i];
    }
    process(t, n, p, m);
    for (int i = 0; i < m; i++){
        cout << p[i];
    }
}