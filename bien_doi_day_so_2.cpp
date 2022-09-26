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
        vector<ll> a;
        vector<ll> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                a[i] = b[i] * b[i + 1];
            else if (i == n - 1)
                a[i] = b[i] * b[i - 1];
            else
                a[i] = b[i - 1] * b[i + 1];
            cout << a[i] << " ";
        } 
        cout << endl;
    }
}