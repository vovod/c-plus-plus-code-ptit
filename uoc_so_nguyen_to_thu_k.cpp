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
        int n, n1;
        cin >> n >> n1;
        int dem1 = 0;
        int dem2 = 0;
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                n = n / i;
                dem1++;
                if (dem1 == n1)
                {
                    dem1 = i;
                    dem2 = 1;
                    break;
                }
            }
            if (n == 1 || dem2 == 1)
                break;
        }
        if (dem2 == 1)
            cout << dem1 << endl;
        else
            cout << "-1" << endl;
    }
}