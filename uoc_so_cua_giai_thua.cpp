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
        int n, p;
        cin >> n >> p;
        int x = 0;
        int dem = p;
        while (dem <= n)
        {
            x += n / dem;
            dem = dem * p;
        }
        cout << x << endl;
    }
}