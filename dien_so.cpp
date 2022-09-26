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
        sort(a, a + n);
        int max = a[n - 1];
        int min = a[0];
        int dem = 0;
        for (int i = min; i <= max; i++)
        {
            if (b[i] == 0)
                dem++;
        }
        cout << dem << endl;
    }
}