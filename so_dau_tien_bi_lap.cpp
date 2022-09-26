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
        int a[n + 5];
        map<int, int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] == 2)
            {
                cout << a[i] << endl;
                break;
            }
            else if (i == n - 1)
                cout << "NO" << endl;
        }
    }
}