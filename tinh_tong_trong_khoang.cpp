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
        int n, x;
        cin >> n >> x;
        vector<int> a;
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a.push_back(t);
        }
        while (x--)
        {
            ll sum = 0;
            int l, r;
            cin >> l >> r;
            for (int i = l - 1; i < r; i++)
            {
                sum = sum + a[i];
            }
            cout << sum << endl;
        }
    }
}