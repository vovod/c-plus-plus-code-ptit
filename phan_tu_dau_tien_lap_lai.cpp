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
        map<int, int> a;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
            if (a[x] == 2 && dem == 0)
            {
                cout << x << endl;
                dem = 1;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
    }
}