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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = x + 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 1; i <= x; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}