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
        int res = 0, val = 0;
        s += "a";
        for (char x : s)
        {
            if (x >= '0' && x <= '9')
                val = val * 10 + x - '0';
            else
            {
                res += val;
                val = 0;
            }
        }
        cout << res << endl;
    }
}