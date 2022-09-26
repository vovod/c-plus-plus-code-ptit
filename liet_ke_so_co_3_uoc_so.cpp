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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (nguyento(i) == 1)
                cout << i * i << " ";
        }
        cout << endl;
    }
}