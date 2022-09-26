#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int kiemtra(int n)
{
    while (n > 0)
    {
        if (n % 10 != 0 && n % 10 != 6 && n % 10 != 8)
            return 0;
        n = n / 10;
    }
    if (n % 10 != 0 && n % 10 != 6 && n % 10 != 8)
        return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (kiemtra(n) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}