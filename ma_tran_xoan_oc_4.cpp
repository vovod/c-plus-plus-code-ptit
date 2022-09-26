#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int a[n * n];
    for (int i = 0; i < n * n; i++)
        cin >> a[i];
    sort(a, a + n * n);
    int b[n][n];
    int m = 0;
    while (m <= n * n)
    {
        int hang = n - 1, cot = n - 1, d = 0;
        while (d <= n / 2)
        {
            int i;
            for (i = d; i <= cot; i++)
                b[d][i] = a[m++];
            for (i = d + 1; i <= hang; i++)
                b[i][cot] = a[m++];
            for (i = cot - 1; i >= d; i--)
                b[hang][i] = a[m++];
            for (i = hang - 1; i > d; i--)
                b[i][d] = a[m++];
            hang--;
            cot--;
            d++;
        }
        m++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}