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
ll tong(ll a)
{
    ll sum = 0;
    while (a > 0)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    return sum;
}
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = n;
        ll sum = 0;
        ll sum1 = tong(n);
        for (int i = 2; i <= sqrt(n); i++)
        {
            int dem = 0;
            while (n % i == 0)
            {
                n = n / i;
                dem++;
            }
            if (dem > 0)
                sum = sum + tong(i) * dem;
            if (n == 1)
                break;
        }
        if (nguyento(n) == 1)
            sum = sum + tong(n);
        if (sum == sum1 && nguyento(x) != 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}