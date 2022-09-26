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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        // map<int, int> b;
        //  int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            // b[a[i]]++;
        }
        sort(a.begin(), a.end());
        for (int i = n - 1; i >= n - k; i--)
        {
            // dem = dem + b[a[i]];
            cout << a[i] << " ";
        }
        cout << endl;
    }
}