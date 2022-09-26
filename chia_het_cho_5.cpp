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
        int x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            x = 2*x + (int)(s[i] - '0');
            if (x >= 5)
                x = x - 5*((int)(x/5));
        }
        if (x % 5== 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}