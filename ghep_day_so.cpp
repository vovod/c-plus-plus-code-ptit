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
        cin >> k >> n;
        vector<int> a;
        for (int i = 0; i < n * k; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n * k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}