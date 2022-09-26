#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int nguyento(long long a)
{
    if (a == 2 || a == 3)
    {
        return 1;
    }
    if (a % 2 == 0 || a % 3 == 0 || a == 1)
    {
        return 0;
    }
    for (long long i = 5; i * i <= a;)
    {
        if (a % i == 0 || a % (i + 2) == 0)
            return 0;
        i = i + 6;
    }
    return 1;
}
ll uocchung(ll a, ll b)
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
    return (a + b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 1; i < n; i++)
        {
            if (uocchung(i, n) == 1)
                dem++;
        }
        if (nguyento(dem) == 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}