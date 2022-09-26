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
        int a[105][105];
        int b[105][105];
        int d[105][105];
        int n, m, p;
        cin >> n >> m >> p;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                d[i][j] = sum;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                cout << d[i][j] << " ";
            }
            cout << endl;
        }
    }
}