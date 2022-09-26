#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        int dem1 = 0;
        for (int i = 1; i <= n; i++)
        {
            int dem = 0;
            for (int j = 1; j <= 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    dem++;
            }
            if (dem >= 2)
                dem1++;
        }
        cout << dem1 << endl;
    }
}