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
        int n;
        cin >> n;
        int a[n];
        map<int, int> b;
        int min = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // if (i == 0 && a[0] >= 0)
            //     min = a[0];
            // else if (min > a[i] && a[i] >= 0)
            //     min = a[i];
            b[a[i]]++;
        }
        while (b[min] != 0)
        {
            min++;
        }
        cout << min << endl;
    }
}