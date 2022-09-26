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
        int a;
        cin >> a;
        int dem = 0;
        for (int i = 2; i <= a / 2; i++)
        {
            if (nguyento(i) == 1 && nguyento(a - i) == 1 && dem == 0)
            {
                dem++;
                cout << i << " " << a - i;
                break;
            }
        }
        if (dem == 0)
            cout << "-1";
        cout << endl;
    }
}