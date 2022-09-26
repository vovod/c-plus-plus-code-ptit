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
        int a[n][n];
        int hang[n] = {0}, cot[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                hang[i] += a[i][j];
                cot[j] += a[i][j];
            }
        }
        int final = max(*max_element(hang, hang + n), *max_element(cot, cot + n));
        int ans = 0;
        int i = 0, j = 0;
        while (i < n && j < n)
        {
            int r = min(final - hang[i], final - cot[j]);
            hang[i] += r;
            cot[j] += r;
            ans += r;
            if (hang[i] == final)
                ++i;
            if (cot[j] == final)
                ++j;
        }
        cout << ans << endl;
    }
}
