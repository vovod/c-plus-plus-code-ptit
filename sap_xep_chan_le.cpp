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
        vector<int> b;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        for (int i = n / 2 + 1 + n % 2; i <= n; i++)
        {
            b.push_back(a[i]);
        }
        for (int i = 1; i <= n / 2; i++)
        {
            cout << a[i] << " " << b[i - 1] << " ";
        }

        if (n % 2 == 1)
            cout << a[n / 2 + 1];
        cout << endl;
    }
}