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
        int n, x;
        cin >> n >> x;
        vector<int> a;
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a.push_back(t);
        }
        sort(a.begin(), a.end());
        cout << a[x - 1] << endl;
    }
}