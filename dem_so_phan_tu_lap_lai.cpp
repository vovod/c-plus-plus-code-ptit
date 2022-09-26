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
        map<int, int> b;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] >= 2)
            {
                dem = dem + b[a[i]];
                b[a[i]] = 0;
            }
        }
        cout << dem << endl;
    }
}