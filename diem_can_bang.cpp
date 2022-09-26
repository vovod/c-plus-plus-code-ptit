#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int a[1000000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        int s1 = 0, ok = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1 == s - a[i] - s1)
            {
                cout << i + 1 << endl;
                ok = 1;
                break;
            }
            s1 += a[i];
        }
        if (ok == 0)
            cout << "-1\n";
    }
}