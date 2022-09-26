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
        string s;
        cin >> s;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
                sum = sum + (ll)(s[i] - '0');
            else
                sum = sum - (ll)(s[i] - '0');
        }
        if (sum % 11 == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}