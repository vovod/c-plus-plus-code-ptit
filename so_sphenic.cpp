#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int nguyento(long long a)
{
    if (a == 2 || a == 3)
    {
        return 1;
    }
    if (a % 2 == 0 || a % 3 == 0 || a == 1)
    {
        return 0;
    }
    for (long long i = 5; i * i <= a;)
    {
        if (a % i == 0 || a % (i + 2) == 0)
            return 0;
        i = i + 6;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int dem = 0;
        int dem1 = 0;
        for (ll i = 2; i * i <= n; i++)
        {
            // if (nguyento(i) != 1)
            //     continue;
            if (n % i == 0)
                dem1++;
            while (n % i == 0)
            {
                // cout << i << " ";
                dem++;
                n = n / i;
                // if (n % i != 0)
                //     cout << endl;
            }
            if (n == 1)
                break;
        }
        if (nguyento(n) == 1)
        {
            dem++;
            dem1++;
        }
        if (dem == 3 && dem1 == 3)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}