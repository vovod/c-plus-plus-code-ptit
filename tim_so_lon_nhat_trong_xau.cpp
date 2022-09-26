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
        int res = -1e7, val = 0;
        s += "a";
        for (int i = 0; i < s.size(); i++)
        {
            char x = s[i];
            if (x >= '0' && x <= '9')
                val = val * 10 + x - '0';
            else
            {
                res = max(res, val);
                val = 0;
            }
        }
        cout << res << endl;
    }
}