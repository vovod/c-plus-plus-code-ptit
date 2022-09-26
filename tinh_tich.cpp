#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ll sum;
        ll min;
        ll max;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
                max = a[i];
            if (max < a[i])
                max = a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (i == 0)
                min = b[i];
            if (min > b[i])
                min = b[i];
        }
        sum = max * min;
        cout << max * min << endl;
    }
}