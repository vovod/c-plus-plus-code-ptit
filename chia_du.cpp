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
        int a, m;
        cin >> a >> m;
        int dem = 0;
        for (int i = 0; i < m; i++)
        {
            if (a * i % m == 1)
            {
                cout << i << endl;
                dem++;
                break;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
    }
}