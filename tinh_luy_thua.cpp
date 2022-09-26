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
        int a, b, p;
        cin >> a >> b >> p;
        int t = a % p;
        ll m = 1;
        b %= p - 1;
        for (int i = 1; i <= b; i++)
        {
            m = m * t % p;
        }
        cout << m << endl;
    }
}