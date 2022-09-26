#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll tong(string s)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    if (sum < 10)
        return sum;
    return tong(to_string(sum));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (tong(s) == 9)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}