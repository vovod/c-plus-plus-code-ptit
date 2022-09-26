#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int check(double a, double b, double c)
{
    if (a <= c && a >= b)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double r, l, s, w;
        cin >> r >> l >> s >> w;
        if (check(r, 3, 4))
            r = 2.5;
        if (check(r, 5, 6))
            r = 3.0;
        if (check(r, 7, 9))
            r = 3.5;
        if (check(r, 10, 12))
            r = 4.0;
        if (check(r, 13, 15))
            r = 4.5;
        if (check(r, 16, 19))
            r = 5;
        if (check(r, 20, 22))
            r = 5.5;
        if (check(r, 23, 26))
            r = 6;
        if (check(r, 27, 29))
            r = 6.5;
        if (check(r, 30, 32))
            r = 7;
        if (check(r, 33, 34))
            r = 7.5;
        if (check(r, 35, 36))
            r = 8;
        if (check(r, 37, 38))
            r = 8.5;
        if (check(r, 39, 40))
            r = 9.0;
        if (check(l, 3, 4))
            l = 2.5;
        if (check(l, 5, 6))
            l = 3.0;
        if (check(l, 7, 9))
            l = 3.5;
        if (check(l, 10, 12))
            l = 4.0;
        if (check(l, 13, 15))
            l = 4.5;
        if (check(l, 16, 19))
            l = 5;
        if (check(l, 20, 22))
            l = 5.5;
        if (check(l, 23, 26))
            l = 6;
        if (check(l, 27, 29))
            l = 6.5;
        if (check(l, 30, 32))
            l = 7;
        if (check(l, 33, 34))
            l = 7.5;
        if (check(l, 35, 36))
            l = 8;
        if (check(l, 37, 38))
            l = 8.5;
        if (check(l, 39, 40))
            l = 9.0;
        double x = (l + r + w + s) / 4;
        if (x - (double)((ll)x) < 0.25)
            x = x - (x - (double)((ll)x));
        else if (x - (double)((ll)x) >= 0.25 && x - (double)((ll)x) < 0.75)
            x = x - (x - (double)((ll)x)) + 0.5;
        else if (x - (double)((ll)x) >= 0.75)
            x = x = x - (x - (double)((ll)x)) + 1;
        cout << fixed << setprecision(1) << x << endl;
    }
}