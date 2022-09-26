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
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double sum = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << fixed << setprecision(4) << sum << endl;
    }
}