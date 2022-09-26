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
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        int l, r;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                r = i;
                break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
}