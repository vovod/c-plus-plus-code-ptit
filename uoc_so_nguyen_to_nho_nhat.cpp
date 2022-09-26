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
int check(ll a)
{
    if (a % 2 == 0)
        return 2;
    if (nguyento(a) == 1)
        return a;
    if (a == 1)
        return 1;
    for (int i = 3; i * i <= a; i++)
    {
        if (a % i == 0)
            return i;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << check(i) << " ";
        }
        cout << endl;
    }
}