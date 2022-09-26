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
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            sum = sum + (i % k);
        }
        if (sum == k)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}