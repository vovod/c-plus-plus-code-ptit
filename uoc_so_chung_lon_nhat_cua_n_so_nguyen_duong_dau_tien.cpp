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
    while ((t--))
    {
        int n;
        cin >> n;
        ll boi = 1;
        for (int i = 1; i <= n; i++)
        {
            boi = boichung(boi, i);
        }
        cout << boi << endl;
    }
}