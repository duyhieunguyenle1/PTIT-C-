// Binary Exponentiation
// x^n = x*(x^2)^(n-1)/2 if n is odd
// x^n = (x^2)^n/2 if n is even
// x^n mod m = (x mod m)^n mod m
#include <iostream>
using namespace std;
typedef long long ll;
ll sqr(ll x) { 
    return x * x; 
}
ll powf(ll a, ll b, ll mod){
    if (b == 0)
        return 1 % mod;
    else
    {
        if (b%2!=0)
            return a * (sqr(powf(a, b / 2, mod)) % mod) % mod;
        else
            return sqr(powf(a, b / 2, mod)) % mod;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        ll b;
        ll m;
        cin >> a >> b >> m;
        int len = a.length();
        ll s[1001];
        ll phanDu = 0;
        for (int i = 0; i < len; i++)
            s[i] = a[i] - '0';
        for (int i = 0; i < len; i++)
            phanDu = (phanDu * 10 + s[i]) % m;
        cout << powf(phanDu, b, m) << endl;
    }
    return 0;
}