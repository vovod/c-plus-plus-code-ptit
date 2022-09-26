#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;
        ll x = a * b / __gcd(a, b);
        x = x * c / __gcd(x, c);
        ll y = (pow(10, n - 1) / x);
        if ((ll)log10(y * x) + 1 == n)
            cout << y * x << endl;
        else if ((ll)log10((y + 1) * x) + 1 == n)
            cout << (y + 1) * x << endl;
        else
            cout << -1 << endl;
    }
}