#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[2000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll dem = 1;
            for (int j = n - i - 1; j > 0; j--)
            {
                dem = (dem * x) % mod;
            }
            sum += a[i] * dem;
            if (sum > mod)
            {
                sum %= mod;
            }
        }
        cout << sum << endl;
    }
    return 0;
}