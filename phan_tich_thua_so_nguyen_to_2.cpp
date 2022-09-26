#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int nguyento(long long a)
{
    if (a == 2 || a == 3)
    {
        return 1;
    }
    if (a % 2 == 0 || a % 3 == 0 || a == 1)
    {
        return 0;
    }
    for (long long i = 5; i * i <= a;)
    {
        if (a % i == 0 || a % (i + 2) == 0)
            return 0;
        i = i + 6;
    }
    return 1;
}
int main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i*i <= n; i++)
        {
            // if (nguyento(i) != 1)
            //     continue;
            int dem2 = 0;
            while (n % i == 0)
            {
                dem2++;
                n = n / i;
                if (n % i != 0)
                    cout << i << " " << dem2 << endl;
            }
            if (n == 1)
                break;
        }
        if(nguyento(n)==1) cout << n << " 1" << endl;
    }
}