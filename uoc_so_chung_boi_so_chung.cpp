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
        ll a, b;
        cin >> a >> b;
        ll x = a * b;
        while (a * b != 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
                b = b % a;
        }
        cout << x / (a + b) << " " << a + b << endl;
    }
}