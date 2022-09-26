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
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        //sort(a.begin(), a.end());
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                cout << a[i] << " ";
            else
                dem++;
        }
        for (int i = 1; i <= dem; i++)
        {
            cout << "0 ";
        }
        cout << endl;
    }
}