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
        ll n;
        cin >> n;
        ll sum = 0;
        int p = 0;
        while (n > 0)
        {
            sum += (n % 2) * pow(10, p);
            ++p;
            n /= 2;
        }
        cout << sum << endl;
    }
}