#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll boichung(ll a, ll b)
{
    ll x = a * b;
    while (a * b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b = b % a;
    }
    return x / (a + b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int x = boichung(a, b);
        int dem = 0;
        for (int i = m; i <= n; i++)
        {
            if (i % a == 0)
                dem++;
            if (i % b == 0)
                dem++;
            if (i % x == 0)
                dem--;
        }
        cout << dem << endl;
    }
}