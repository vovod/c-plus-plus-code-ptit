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
        int dem = 0;
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp == x && dem == 0)
            {
                dem = i;
            }
        }
        cout << dem << endl;
    }
}