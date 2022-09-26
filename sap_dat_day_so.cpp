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
        int n;
        cin >> n;
        // vector<ll> a;
        map<int, ll> b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            b[x]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] > 0)
                cout << i << " ";
            else
                cout << "-1 ";
        }
        cout << endl;
    }
}