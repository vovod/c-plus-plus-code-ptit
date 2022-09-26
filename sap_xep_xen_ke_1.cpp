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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int dem = 0;
        int dem1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                cout << a[dem] << " ";
                dem++;
            }
            else
            {
                cout << a[n - dem1 - 1] << " ";
                dem1++;
            }
        }
        cout << endl;
    }
}