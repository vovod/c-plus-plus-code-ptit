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
        long long n;
        cin >> n;
        int i = 2, dem = 0;
        while (i <= sqrt(n))
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    dem++;
                if (i != (n / i))
                {
                    if ((n / i) % 2 == 0)
                        dem++;
                }
            }
            i++;
        }
        if (n % 2 == 0)
            cout << dem + 1 << endl;
        else
            cout << dem << endl;
    }
}
