#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        string res = "";
        while (a.length() < b.length())
            a = "0" + a;
        while (b.length() < a.length())
            b = "0" + b;
        int c = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
            int tmp = a[i] - 48 + b[i] - 48 + c;
            c = tmp / 10;
            tmp = tmp % 10;
            res = (char)(tmp + 48) + res;
        }
        if (c > 0)
            res = "1" + res;
        cout << res << endl;
    }
}