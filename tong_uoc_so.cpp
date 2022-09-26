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
        ll n;
        cin >> n;
        ll sum = 0;
        for (ll i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ll x = n / i;
                if (i == x)
                {
                    sum = sum + i;
                }
                else
                    sum = sum + x + i;
            }
        }
        cout << sum << endl;
    }
}