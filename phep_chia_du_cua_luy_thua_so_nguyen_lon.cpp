#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
long long Find(string a, long long b)
{
    long long res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        res = res * 10 + a[i] - '0';
        res %= b;
    }
    return res;
}

long long powmod(long long a, long long b, long long m)
{
    long long res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        long long b, m;
        cin >> b >> m;
        long long du = Find(a, m);
        cout << powmod(du, b, m) << endl;
    }
}