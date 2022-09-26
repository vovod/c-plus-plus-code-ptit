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
        // vector<int> a;
        cin >> n >> x;
        int dem = -1;
        int dem1 = 0;
        for (int i = 1; i <= n; i++)
        {
            int b;
            cin >> b;
            if (b == x && dem1 == 0)
            {
                dem = i;
                dem1++;
            }
        }
        cout << dem << endl;
    }
}