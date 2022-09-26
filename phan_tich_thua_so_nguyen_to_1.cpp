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
        for (int i = 2; i <= n; i++)
        {
            int dem2 = 0;
            while (n % i == 0)
            {
                dem2++;
                n = n / i;
                if (n % i != 0)
                    cout << i << " " << dem2 << " ";
            }
            if (n == 1)
                break;
        }
        printf("\n");
    }
}