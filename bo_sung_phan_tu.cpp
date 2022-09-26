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
        // vector <int> a;
        map<int, int> b;
        int min = 99999;
        int max = -9999;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[x]++;
            if (x > max)
                max = x;
            if (x < min)
                min = x;
        }
        int dem = 0;
        for (int i = min; i <= max; i++)
        {
            if (b[i] == 0)
                dem++;
        }
        cout << dem << endl;
    }
}