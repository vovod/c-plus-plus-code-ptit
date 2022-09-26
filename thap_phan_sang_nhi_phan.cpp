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
        string tmp = "";
        while (n > 0)
        {
            tmp = tmp + to_string((n % 2));
            ++p;
            n /= 2;
        }
        for (int i = tmp.size() - 1; i >= 0; i--)
            cout << tmp[i];
        cout << endl;
    }
}