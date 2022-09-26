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
        vector<int> a;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int max = 99999999;
        for (int i = n - 2; i >= 1; i--)
        {
            if (a[i] - a[i - 1] < max)
                max = a[i] - a[i - 1];
        }
        cout << max << endl;
    }
}